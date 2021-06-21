#include <16F877A.h>
#device ADC=10

#FUSES PUT                   	//Power Up Timer

#use delay(crystal=4MHz)
#use rs232(baud=9600,parity=N,xmit=PIN_C6,rcv=PIN_C7,bits=8,stream=PORT1,FORCE_SW)

