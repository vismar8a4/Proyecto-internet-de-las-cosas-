#include <main.h>
#USE rs232(baud=9600,parity=N,xmit=PIN_C6,rcv=PIN_C7,bits=8)
#define SERVO PIN_c1

float temp1 = 0;
float temp2 = 0;
float tempanterior = 0;
float tempanterior2 = 0;
int16 dato1=0;
int16 dato2=0;
int8 datorx=0;
int8 datore=0;
int8 dato_ent;
int i;

void main (){
do{
if(kbhit())
{dato_ent=getc();
if(dato_ent=='m'){
for (i = 0; i < 100; i++)
  {
  output_low (pin_e0);
               output_high (pin_a5);
               output_high (pin_b7);
               delay_us (370);
               output_low (pin_b7);
               delay_ms(16);
                output_low (pin_b1);
               output_high (pin_b0);
               output_high (pin_c0);
               delay_us (370);
               output_low (pin_c0);
               delay_ms(16);
               output_low (pin_b3);
               output_high (pin_b2);
               output_high (pin_c1);
               delay_us (370);
               output_low (pin_c1);
               delay_ms(16);
               output_low (pin_b5);
               output_high (pin_b4);
               output_high (pin_c2);
               delay_us (370);
               output_low (pin_c2);
               delay_ms(16);
                output_low (pin_a0);
               output_high (pin_b6);
               output_high (pin_c3);
               delay_us (370);
               output_low (pin_c3);
               delay_ms(16);
               output_low (pin_a2);
               output_high (pin_a1);
               output_high (pin_c4);
               delay_us (370);
               output_low (pin_c4);
               delay_ms(16);
                output_low (pin_d0);
               output_high (pin_a3);
               output_high (pin_c5);
               delay_us (370);
               output_low (pin_c5);
               delay_ms(16);
   
}
}
if(dato_ent=='n'){
for (i = 0; i < 100; i++)
  {
    output_high (pin_b1);
               output_low (pin_b0);
               output_high (pin_c0);
               delay_us (1750);
               output_low (pin_c0);
               delay_ms(16);
                output_high (pin_b3);
               output_low (pin_b2);
               output_high (pin_c1);
               delay_us (1750);
               output_low (pin_c1);
               delay_ms(16);
               output_high (pin_b5);
               output_low (pin_b4);
               output_high (pin_c2);
               delay_us (1750);
               output_low (pin_c2);
               delay_ms(16);
                output_high (pin_a0);
               output_low (pin_b6);
               output_high (pin_c3);
               delay_us (1750);
               output_low (pin_c3);
               delay_ms(16);
                  output_high (pin_a2);
               output_low (pin_a1);
               output_high (pin_c4);
               delay_us (1750);
               output_low (pin_c4);
               delay_ms(16);
                output_high (pin_d0);
               output_low (pin_a3);
               output_high (pin_c5);
               delay_us (1750);
               output_low (pin_c5);
               delay_ms(16);
               output_high (pin_e0);
               output_low (pin_a5);
               output_high (pin_b7);
               delay_us (1750);
               output_low (pin_b7);
               delay_ms(16);

   
}
}

if(dato_ent=='a'){
for (i = 0; i < 100; i++)
  {
               output_high (pin_b1);
               output_low (pin_b0);
               output_high (pin_c0);
               delay_us (1750);
               output_low (pin_c0);
               delay_ms(16);
}
}
if(dato_ent=='e'){
for (i = 0; i < 100; i++)
  {
               output_low (pin_b1);
               output_high (pin_b0);
               output_high (pin_c0);
               delay_us (370);
               output_low (pin_c0);
               delay_ms(16);
}
}
if(dato_ent=='i'){
for (i = 0; i < 100; i++)
  {
               output_high (pin_b3);
               output_low (pin_b2);
               output_high (pin_c1);
               delay_us (1750);
               output_low (pin_c1);
               delay_ms(16);
}
}
if(dato_ent=='o'){
for (i = 0; i < 100; i++)
  {
               output_low (pin_b3);
               output_high (pin_b2);
               output_high (pin_c1);
               delay_us (370);
               output_low (pin_c1);
               delay_ms(16);
}
}
if(dato_ent=='u'){
for (i = 0; i < 100; i++)
  {
               output_high (pin_b5);
               output_low (pin_b4);
               output_high (pin_c2);
               delay_us (1750);
               output_low (pin_c2);
               delay_ms(16);
}
}
if(dato_ent=='b'){
for (i = 0; i < 100; i++)
  {
               output_low (pin_b5);
               output_high (pin_b4);
               output_high (pin_c2);
               delay_us (370);
               output_low (pin_c2);
               delay_ms(16);
}
}
//
if(dato_ent=='c'){
for (i = 0; i < 100; i++)
  {
               output_high (pin_a0);
               output_low (pin_b6);
               output_high (pin_c3);
               delay_us (1750);
               output_low (pin_c3);
               delay_ms(16);
}
}
if(dato_ent=='d'){
for (i = 0; i < 100; i++)
  {
               output_low (pin_a0);
               output_high (pin_b6);
               output_high (pin_c3);
               delay_us (370);
               output_low (pin_c3);
               delay_ms(16);
}
}
if(dato_ent=='g'){
for (i = 0; i < 100; i++)
  {
               output_high (pin_a2);
               output_low (pin_a1);
               output_high (pin_c4);
               delay_us (1750);
               output_low (pin_c4);
               delay_ms(16);
}
}
if(dato_ent=='f'){
for (i = 0; i < 100; i++)
  {
               output_low (pin_a2);
               output_high (pin_a1);
               output_high (pin_c4);
               delay_us (370);
               output_low (pin_c4);
               delay_ms(16);
}
}
if(dato_ent=='h'){
for (i = 0; i < 100; i++)
  {
               output_high (pin_d0);
               output_low (pin_a3);
               output_high (pin_c5);
               delay_us (1750);
               output_low (pin_c5);
               delay_ms(16);
}
}
if(dato_ent=='j'){
for (i = 0; i < 100; i++)
  {
               output_low (pin_d0);
               output_high (pin_a3);
               output_high (pin_c5);
               delay_us (370);
               output_low (pin_c5);
               delay_ms(16);
}
}
if(dato_ent=='k'){
for (i = 0; i < 100; i++)
  {
               output_high (pin_e0);
               output_low (pin_a5);
               output_high (pin_b7);
               delay_us (1750);
               output_low (pin_b7);
               delay_ms(16);
}
}
if(dato_ent=='l'){
for (i = 0; i < 100; i++)
  {
               output_low (pin_e0);
               output_high (pin_a5);
               output_high (pin_b7);
               delay_us (370);
               output_low (pin_b7);
               delay_ms(16);
}
}

for (i = 0; i < 100; i++)
  {
    output_high (pin_b1);
               output_low (pin_b0);
               output_high (pin_c0);
               delay_us (1750);
               output_low (pin_c0);
               delay_ms(16);
                output_high (pin_b3);
               output_low (pin_b2);
               output_high (pin_c1);
               delay_us (1750);
               output_low (pin_c1);
               delay_ms(16);
               output_high (pin_b5);
               output_low (pin_b4);
               output_high (pin_c2);
               delay_us (1750);
               output_low (pin_c2);
               delay_ms(16);
                output_high (pin_a0);
               output_low (pin_b6);
               output_high (pin_c3);
               delay_us (1750);
               output_low (pin_c3);
               delay_ms(16);
                  output_high (pin_a2);
               output_low (pin_a1);
               output_high (pin_c4);
               delay_us (1750);
               output_low (pin_c4);
               delay_ms(16);
                output_high (pin_d0);
               output_low (pin_a3);
               output_high (pin_c5);
               delay_us (1750);
               output_low (pin_c5);
               delay_ms(16);
               output_high (pin_e0);
               output_low (pin_a5);
               output_high (pin_b7);
               delay_us (1750);
               output_low (pin_b7);
               delay_ms(16);

   
}
}





if(dato_ent=='x'){
               output_high (pin_d0);
               output_high (pin_d1);
               output_high (pin_d2);
               output_high (pin_d3);
               output_high (pin_b7);
               output_low (pin_b6);
           
}
//

if(dato_ent=='z'){
               output_low (pin_d0);
               output_low (pin_d1);
               output_low (pin_d2);
               output_low (pin_d3);
               output_low (pin_b7);
               output_high (pin_b6);
           
}


}
}while(true);
}
