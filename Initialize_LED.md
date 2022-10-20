## Initialize LED
1. Find a resistor from 330 Ohm and 1 KOhm and a LED (Blue). 

<div align=center>
<img src="https://user-images.githubusercontent.com/113971230/197061293-81f91455-d545-442e-86aa-cab7b2bcdcfc.jpg" width="450">  
</div>

- Use the Multimeter to test that the blue LED wroks or not.
  * ⚠️Never power an LED without also chaining it to a resistor! This is to limit the current that can flow through the LED. Otherwise you will have a short circuit (extremely low resistance from power to ground), and the resulting rush of current will fry your LED and quite possibly your microcontroller!

<div align=center>
<img src="https://user-images.githubusercontent.com/113971230/197061451-7e4366bf-1e0c-4617-97bc-b9507230ef86.jpg" width="450">  
</div>

2. Connect RP2040 to the LED

<div align=center>
<img src="https://github.com/lihzhao14/ese-5190-lab2-B/blob/main/image/led_blink.gif" width="450">  
</div>

3. LED will be on/off controlled by the RP2040
- If Type "1" and click "Enter", the LED will be on and print "hello" on screen.
- If Type "0" and click "Enter", the LED will be on and print "bye" on screen.

<div align=center>
<img src="https://github.com/lihzhao14/ese-5190-lab2-B/blob/main/image/led_1_0_gif.gif" width="450">  
</div>
