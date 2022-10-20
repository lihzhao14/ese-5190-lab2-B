# Proposal

Lihong Zhao worked with Xingjian Chen

## Introduction
We're trying to use two RP2040s to build a 2-input AND logic gate. 
The output of the first board is the input of the second board. It displayed by two LEDs.
- If the output of the first board is high level voltage, the LED will be on.
- If the output of the first board is low level voltage, the LED will be off.

After the second board gets the output of the first board as input, it makes an AND logic judgment to get the output.
- If the output of the second board is high level voltage, the LED will be on.
- If the output of the second board is low level voltage, the LED will be off.

- Logic Table

|InputA|InputB|Output|
| :---: | :---: | :---: |
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |


## GPIO used
- Need five GPIO pins.
  - Two as the output of the first board
  - Two as the input of the second board
  - One as the output of the second board

## Components
- Two RP2040
- Three LEDs
- Three 360 Ohm
- Wires
