#include <msp430.h>
#include "buzzer.h"

//music notes for frequency equation
#define FSfv 759
#define Dfv 587
#define Ffv 699
#define Efv 659
#define Csfv 554
#define Bfv 987
#define Bfr 494
#define Afv 880
#define Gfv 784

static int notes[52] = {

  500, 20, 0, 0, 40, 0, 40, 20, 60, 0,
  FSfv, Dfv, Efv, Efv, Ffv, Efv, Dfv, Csfv, Dfv, Efv,
  FSfv, Bfv, Bfr, Csfv, Dfv, Efv, Dfv, Csfv, Afv, Gfv,
  FSfv, Dfv, Efv, Efv, Ffv, Efv, Dfv, Csfv, Dfv, Efv,
  FSfv, Bfv, Bfr, 277, Dfv, 392, 370, 349, Dfv, 466,
  494, 0
};

int beats[52] = {

  4,6,1,1,2,2,2,2,2,2,
  4,6,1,1,2,2,2,2,2,2,
  4,6,1,1,2,2,2,2,2,2,
  4,6,1,1,2,2,2,2,2,2,
  4,6,1,1,2,2,2,2,2,2,
  4,5,
};

void play_song()
{
  static char count = 0;
  static char stateNote = 0;
  if(++count != 250){
    if(stateNote == 52){
      buzzer_set_period(0);
    }
    else if(++count == notes[stateNote]*31){
      stateNote++;
      buzzer_set_period(2000000/notes[stateNote]);
      count == 0;
    }
  }
  
}

  

  
  
