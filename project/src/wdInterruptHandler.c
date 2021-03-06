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
    switch(button){
    case 1:
      blink_count = 0;
      state_advance();
      break;
    case 2:
      blink_count = 0;
      both_lights();
      play_song();
      break;
    case 3:
      buzzer_set_period(0);
      tgl_red_off();
      tgl_green_off();
      led_changed = 1;
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
