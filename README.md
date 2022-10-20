# ese-5190-lab2-B
University of Pennsylvania, ESE 5190: Intro to Embedded Systems, Lab 2  

    Lihong Zhao  
        LinkedIn: www.linkedin.com/in/lihong-zhao-a24789224  
    Tested on: Lenovo Legion 5 Pro 16" Laptop, Intel Core i7-12700H， Windows11 
    
## Initialize LED
1. Find a resistor from 330 Ohm and 1 KOhm and a LED (Blue). 

- Use the Multimeter to test the resistance of the resistor which is 360 Ohm. 
![1](https://user-images.githubusercontent.com/113971230/197061293-81f91455-d545-442e-86aa-cab7b2bcdcfc.jpg)

- Use the Multimeter to test that the blue LED wroks or not.
  * ⚠️Never power an LED without also chaining it to a resistor! This is to limit the current that can flow through the LED. Otherwise you will have a short circuit (extremely low resistance from power to ground), and the resulting rush of current will fry your LED and quite possibly your microcontroller!
![2](https://user-images.githubusercontent.com/113971230/197061451-7e4366bf-1e0c-4617-97bc-b9507230ef86.jpg)

2. Connect RP2040 to the LED

3. LED will be on/off controlled by the RP2040
- If Type "1" and click "Enter", the LED will be on and print "hello" on screen.
- If Type "0" and click "Enter", the LED will be on and print "bye" on screen.
