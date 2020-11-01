Project 2: Blink Buzz  Toy

===========================



## Description:

This code will turn your MSP430 into a toy capable of light blinking and buzzing
actions. With the green button board attached, pressing either of the four
buttons will make something happen.



## To Compile and Run:

1. Inside the src folder, type "make" without quotes. This will compile the program.

2. Plug in your MSP430 via the USB to your computer. Typing "make load"
without quotes will load the program into your MSP430. Now whenever the MSP430
turns on, you can press the buttons on the green board to play with the program.

3. Typing "make clean" without quotes will remove extra files created during compiling.



## Button Actions:

The green board on your MSP430 has 4 buttons S1-S4. The buttons do the following:


- **S1**: This button will turn on the red LED, and the LED will cycle
    through different states of dimness. You should see the light getting
    dimmer until the cycle repeats.

- **S2**: This button will play a song and blink your red and green LEDs in a
    pattern. Will the lights ever reach the truth? If you pause the song,
    pressing this button again will resume the song where it left off.

- **S3**: This button will pause the song and turn off the LEDs.

- **S4**: This button will enable the LED pattern from the song, but without
    the song. (Warning: If you press this button while the song is playing,
    the current note will be played until you resume the song, or press S3).
    
    
