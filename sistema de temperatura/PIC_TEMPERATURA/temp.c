#include <16F877A.h>  
#device ADC=10    
#fuses XT,NOWDT,NOPROTECT,NOLVP,PUT,BROWNOUT
#use delay(clock=4000000)
#use fast_io(A)
#use fast_io(B)
//LIBRER?AS A?ADIDAS *NO MODIFICAR LIBRER?AS*
#include <lcd.c>
#include <DriverTec4x4.c>

int8 dig1,min0,dig2,min3,imprime,dig3,atencion,dig,max0,max3;
int1 detector;
int16 ayuda,temperatura,temp,Tmax,Tmin,min1,max1;

lcd_init();

void EjecuConversor(){
   setup_adc(ADC_CLOCK_INTERNAL);    // Configura el conversor ADC
   setup_adc_ports(AN0);          // Entrada RA0 como anal?gica
   set_tris_A(0xFF);            // Todo el PortA como entrada
   set_adc_channel(0);            // Seleccionar un canal (en este caso Canal 0)
   delay_us(10);               // Retardo necesario entre la selecci?n de canal y la adquisici?n.
}
void DescomponerDigitos(int16 Dato){
   int16 aux;
   
   Dig1= Dato/1000;
   Dig2= (Dato%1000)/100;
   aux= Dato%100;
   Dig3= aux/10;   
}
void ProcesarSenal(){
   int32 Read;
   
   Read= ayuda;
   temperatura=(100)*((Read*5.0)/1023.0)*(100);
   //temperatura=*100;
   DescomponerDigitos(temperatura);
      
   Dig1+= '0';
   Dig2+= '0';
   Dig3+= '0';
}

// Esta funci?n ejecuta la acci?n requerida por cada pulsador del teclado.

void ProcesarTeclado(){   
      
   switch (atencion){
   
      case 0:   //TECLA 1            
           imprime="1";
         dig=1;
          detector=1;
            break;
            
      case 1:   //TECLA 2            
          imprime="2";
         dig=2;
          detector=1;
            break;
            
      case 2:  //TECLA 3             
          imprime="3";
         dig=3;
          detector=1;
            break;
         
      case 3:  //TECLA A             
         imprime="A";
          break;
          
      case 4:  //TECLA 6      
          imprime="6";
          dig=6;
          detector=1;
          break;
          
      case 5:   //TECLA 5      
          imprime="5";
          dig=5;
          detector=1;
          break;
          
      case 6:   //TECLA 4           
          imprime="4";
          dig=4;
          detector=1;
          break;
          
      case 7:   //TECLA B           
          imprime="B";
          break;
          
      case 8:  //IMPRIME 7             
          imprime="7";
          dig=7;
          detector=1;
          break;
          
      case 9:   //TECLA 8            
          imprime="8";
          dig=8;
          detector=1;
          break;
          
      case 10:  //TECLA 9         
          imprime="9";
          dig=9;
          detector=1;
          break;
          
      case 11:  //TECLA C        
           imprime="C";
           break;
           
      case 12:  //TECLA ASTERISCO          
          imprime="x";
          break;
          
      case 13:   //TECLA CERO          
          imprime="0";
          dig=0;
          detector=1;
          break;
          
      case 14:  //TECLA NUMERAL           
           imprime="X";
           break;
           
      case 15:   //TECLA D         
          imprime="D";
    }

   if(atencion!=16){  // Si se oprimi? alg?n pulsador se
      delay_ms(150);  // elimina rebote.
   }
}   
void VisualizarLCD(){

   lcd_gotoxy(1,2);
   lcd_putc("Temp: ");
   lcd_putc(Dig1);
   lcd_putc(Dig2);
   lcd_putc(".");
   lcd_putc(Dig3);
   lcd_putc("    ");
}

//===========EJECUCI?N DEL PROGRAMA 

void main() {

   lcd_init();
   EjecuConversor();
   set_tris_B(0x0F);
    port_b_pullups(TRUE);
   while(TRUE){
   
lcd_gotoxy(13,1);
    lcd_putc("\fHOLA VISMAR");
    lcd_gotoxy(1,2);                 
          lcd_putc("BIENVENIDO");
          delay_ms(4000);
   lcd_putc("\fIngresar limites");
   lcd_putc("\nTmin: ");
   
   while(TRUE){      
   atencion=LeerTeclado(); //Lee la funcion teclado
   ProcesarTeclado();
   min1=dig;
   lcd_gotoxy(7,2);
   lcd_putc(imprime);
   delay_ms(150);
   
   if(detector==1){
      break;
      }
   }
   
   imprime=" ";
   detector=0;
   while(TRUE){
   atencion=LeerTeclado();
   ProcesarTeclado();
   min0=dig;
   lcd_gotoxy(8,2);
   lcd_putc(imprime);
   delay_ms(150);
   if(detector==1){
      break;
      }
      }
   imprime="  ";
   detector=0;
      while(TRUE){
   atencion=LeerTeclado();
   ProcesarTeclado();
   min3=dig;
   lcd_gotoxy(9,2);
   lcd_putc(".");
   lcd_putc(imprime);
   delay_ms(150);
   if(detector==1){
      break;
      }
      }
      
   imprime=" ";
   detector=0;
   
   Tmin=(min1*100)+(min0*10)+min3;
   
   lcd_putc("\fIngresar limites");
   lcd_putc("\nTmax:");
  
   while(TRUE){  
   atencion=LeerTeclado();
   ProcesarTeclado();
   max1=dig;
   lcd_gotoxy(7,2);
   lcd_putc(imprime);
   delay_ms(150);
   if(detector==1){
      break;
      }
   }
   
   detector=0;   //DETECTA MI PULSACI?N DE TECLA ANTES DE DAR
                 // UN SALTO AL SIGUIENTE DIGITO O TEMP
   imprime="  ";
   
   while(TRUE){
   atencion=LeerTeclado();
   ProcesarTeclado();
   max0=dig;
   lcd_gotoxy(8,2);
   lcd_putc(imprime);
   delay_ms(150);
   if(detector==1){
      break;
      }
      }
      detector=0;
      imprime="  ";
      while(TRUE){
   atencion=LeerTeclado();
   ProcesarTeclado();
   max3=dig;
   lcd_gotoxy(9,2);
   lcd_putc(".");
   lcd_putc(imprime);
   delay_ms(150);
   
   if(detector==1){    //SI EL DETECTOR SE ACTIVA PASA AL 
                       //SIGUIENTE REGISTRO LUEGO DE LEER LOS DATOS
      break;
      }
      }
    
   Tmax=(max1*100)+(max0*10)+max3;
   
   lcd_putc("\fmin=");
   if(min1==0)
   {min1="0";
      }else
      {
   min1=min1+'0';
   }
   min0=min0+'0';
   lcd_putc(min1);
   lcd_putc(min0);
   if(min3==0){
   min3=" ";
   }else{
   min3=min3+'0';
   lcd_putc(".");
   }
   lcd_putc(min3);
   lcd_gotoxy(9,1);
   
   lcd_putc("max=");
      if(max1==0)
   {max1=" ";
      }else
      {
   max1=max1+'0';
   }
   max0=max0+'0';
    lcd_putc(max1);
   lcd_putc(max0);
   if(max3==0){
   max3=" ";
   }else{
   max3=max3+'0';
   lcd_putc(".");
   }
   lcd_putc(max3);
   

   
   while (true){
      delay_ms(200);
      ayuda= read_adc();         // Adquisici?n de la se?al   
      ProcesarSenal();      // Funci?n encargada de procesar el dato adquirido
      temp=temperatura/10;
      if(temp<=Tmin)
      {
         lcd_gotoxy(1,2);
         VisualizarLCD();
         lcd_gotoxy(13,2);
          lcd_putc("Bajo");
          output_high(pin_c4);
       }else if(temp>Tmin && temp<Tmax)  //COMPARACION BOOLEANA !!!!importante!!!!
         {
            VisualizarLCD();
            lcd_gotoxy(13,2);
            lcd_putc("esta");
            output_low(pin_c4);
          output_high(pin_c0);
           output_high(pin_c1);
               output_low(pin_c2);
                  output_low(pin_c3);
            }else if(temp>=Tmax)
            {
               
               lcd_gotoxy(1,2);
               VisualizarLCD();
               lcd_gotoxy(13,2);
                  lcd_putc("Alto");
                  
                  output_high(pin_c0);
                   output_low(pin_c1);
                      output_high(pin_c2);
                          output_low(pin_c3);
               }   
               
//============INICIO MANEJO DE ERRORES
   if(Tmax==Tmin){
   output_low(pin_c0);
                   output_low(pin_c1);
                      output_low(pin_c2);
                          output_low(pin_c3);
                          output_low(pin_c4);
    lcd_gotoxy(13,1);
    lcd_putc("\fLOS LIMITES NO");
    lcd_gotoxy(1,2);                 
          lcd_putc("DEBEN SER IGUAL");
          delay_ms(4000);
           lcd_gotoxy(13,1);
           lcd_putc("\fINGRESE DATOS");
    lcd_gotoxy(1,2);                 
          lcd_putc("VALIDOS DE NUEVO");
          delay_ms(5000);
          break; 
           
   }
    if(Tmax<Tmin){
     output_low(pin_c0);
                   output_low(pin_c1);
                      output_low(pin_c2);
                          output_low(pin_c3);
                          output_low(pin_c4);
        lcd_gotoxy(13,1);
    lcd_putc("\fTMin NO DEBE SER");
    lcd_gotoxy(1,2);                 
          lcd_putc("MAYOR QUE TMax");
          delay_ms(4000);
           lcd_gotoxy(13,1);
           lcd_putc("\fINGRESE DATOS");
    lcd_gotoxy(1,2);                 
          lcd_putc("VALIDOS DE NUEVO");
          delay_ms(5000);
          break;
             
   }
    
   //=============FIN MANEJO DE ERRORES
      }
      }
}
