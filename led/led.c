#include <stdio.h>
#include <stdlib.h>

#include "pico/stdlib.h"
// #include "hardware/pio.h"
// #include "hardware/clocks.h"

#define IS_RGBW true
#define LED_PIN 29
//#define keyboard_input


bool A0_state;
bool A1_state;

int main() {
    
    //set_sys_clock_48();
    stdio_init_all();

const uint IN_A0=29;
 gpio_init(IN_A0);
 gpio_set_dir(IN_A0,GPIO_IN);


const uint IN_A1=28;
 gpio_init(IN_A1);
 gpio_set_dir(IN_A1,GPIO_IN);

const uint OUT_A2=27;
 gpio_init(OUT_A2);
 gpio_set_dir(OUT_A2,GPIO_OUT);
 gpio_put(OUT_A2,0);
 

 while(1)
 {
    A0_state=gpio_get(IN_A0);
    A1_state=gpio_get(IN_A1);
    if(A0_state && A1_state==1)
    {
         gpio_put(OUT_A2,1);
    }
    else
    {
         gpio_put(OUT_A2,0);
    }
 }
    
}