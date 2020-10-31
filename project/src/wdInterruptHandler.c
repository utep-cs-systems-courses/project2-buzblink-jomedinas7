#include <msp430.h>
#include "stateMachines.h"
#include "buzzerStateMachines.h"
void

__interrupt_vec(WDT_VECTOR) WDT(){/* 250 interrupts/sec */
  static char butt_count=0;
  static char state =1;
  play_song();
  state_advance();
  
}
