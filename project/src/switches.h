#ifndef switches_included

#define switches_included



#define SW1 BIT0/* switch1 is p2.0 */

#define SW2 BIT1

#define SW3 BIT2

#define SW4 BIT3

#define SWITCHES (BIT0 | BIT1 | BIT2 | BIT3)    /* 4 switches on this board */



void switch_init();

void switch_interrupt_handler();



extern char switch1_state_down, switch2_state_down, switch3_state_down, switch4_state_down, switch_state_changed,button; /* effectively boolean */

#endif // included
