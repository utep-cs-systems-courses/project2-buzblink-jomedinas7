#include <msp430.h>
#include "stateMachines.h"
#include "led.h"
#include "switches.h"
#include "buzzer.h"
#include "buzzerStateMachines.h"

void

__interrupt_vec(WDT_VECTOR) WDT(){/* 250 interrupts/sec */



  static char blink_count = 0;

  if(++blink_count != 250 && button_state == 1){

    state_advance();
  }
  else if(blink_count != 250 && button_state == 2){
    play_song();
  }
}
