#include <msp430.h>
#include "stateMachines.h"
#include "led.h"
#include "switches.h"
#include "buzzer.h"
#include "buzzerStateMachines.h"

void

__interrupt_vec(WDT_VECTOR) WDT(){/* 250 interrupts/sec */



  static char blink_count = 0;

  if(++blink_count != 250){
    switch(button_state){
    case 1:
      blink_count = 0;
      state_advance();
      break;
    case 2:
      blink_count = 0;
      play_song();
      break;
    case 3:
      buzzer_set_period(0);
      blink_count = 0;
      break;
    case 4:
      both_lights();
      blink_count = 0;
      break;
    }
  }else{
    blink_count = 0;
  }
}
