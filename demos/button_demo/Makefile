# makfile configuration

COMMON_OBJECTS  =

CPU             = msp430g2553

CFLAGS          = -mmcu=${CPU} -I../h

LDFLAGS		= -L/opt/ti/msp430_gcc/include



#switch the compiler (for the internal make rules)

CC              = msp430-elf-gcc

AS              = msp430-elf-as



all: blink.elf



#additional rules for file

blink.elf: ${COMMON_OBJECTS} p1_interrupt_handler.o buttonMain.o stateMachines.o led.o switches.o wdInterruptHandler.o ../lib/libTimer.a

	${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^



load: blink.elf

	msp430loader.sh blink.elf



clean:

	rm -f *.o *.elf



led.o: led.c led.h



wdInterruptHandler.o: stateMachines.h led.h switches.h

switches.o: switches.h led.h

p1_interrupt_handler.o: switches.h

stateMachines.o: led.h stateMachines.h
