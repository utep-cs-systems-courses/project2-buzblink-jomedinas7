#include <msp430.h>
#include "stateMachines.h"
#include "buzzerStateMachines.h"
void

__interrupt_vec(WDT_VECTOR) WDT(){/* 250 interrupts/sec */

  static char blink_count = 0;
  static char seconds = 0;
  // state_advance();
  if(blink_count == 0){
  play_song();
  }
  blink_count++;
}
