# makfile configuration

COMMON_OBJECTS  =

CPU             = msp430g2553

CFLAGS          = -mmcu=${CPU} -I../h

LDFLAGS		= -L/opt/ti/msp430_gcc/include



#switch the compiler (for the internal make rules)

CC              = msp430-elf-gcc

AS              = msp430-elf-as



all: blink.elf



#additional rules for files

blink.elf: ${COMMON_OBJECTS} blinkMain.o stateMachines.o led.o wdInterruptHandler.o buzzerStateMachines.o buzzer.o switches.o p2_interrupt_handler.o ../lib/libTimer.a

	${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^



load: blink.elf

	msp430loader.sh blink.elf



clean:

	rm -f *.o *.elf



led.o: led.c led.h

buzzer.o: buzzer.h

wdInterruptHandler.o: stateMachines.h buzzerStateMachines.h led.h buzzer.h switches.h

buzzerStateMachines.o: buzzerStateMachines.h buzzer.h

stateMachines.o: led.h stateMachines.h

p2_interrupt_handler.o: switches.h

switches.o: switches.h led.h
