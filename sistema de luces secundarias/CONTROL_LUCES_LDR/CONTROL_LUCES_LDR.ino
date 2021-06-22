int valorLDR = 0; //Creamos la variable de tipo número entero para almacenar los datos recogidos del sensor analógico LDR (Light Dependant Resitor).
 
int pinLed1 = 8; //Nombramos los pines digitales que vamos a utilizar para los LEDs. 
int pinLed2 = 9; 
int pinLed3 = 10; 
int pinLed4 = 11; 
int pinLed5 = 12;
int pinLed6= 13;

int pinLDR = A0; //Seleccinoamos el pin analógico A0 como input del sensor LDR.

void setup() { 
pinMode(pinLed1, OUTPUT); //Configuramos como outputs, o salida de datos, los pines de los LEDs. 
pinMode(pinLed2, OUTPUT); 
pinMode(pinLed3, OUTPUT); 
pinMode(pinLed4, OUTPUT); 
pinMode(pinLed5, OUTPUT);
pinMode(pinLed6, OUTPUT);

Serial.begin(9600); //Inicializamos el monitor serie para visualizar los valores del LDR.
}

void loop() { 
valorLDR = analogRead(pinLDR); //Leemos el valor del pinLDR y lo guardamos en la variable creada.
Serial.println(valorLDR); //Imprimimos dicho valor, comprendido entre 0 y 1023.
delay (100);

if(valorLDR < 890) { //Creamos los condicionales que determinarán los intervalos de encendido y apagado de todos los LEDs. 
digitalWrite(pinLed1, LOW); 
digitalWrite(pinLed2, LOW); 
digitalWrite(pinLed3, LOW); 
digitalWrite(pinLed4, LOW); 
digitalWrite(pinLed5, LOW);
digitalWrite(pinLed6, LOW);}

else if((valorLDR >= 921) & (valorLDR < 935)) { 
digitalWrite(pinLed1, HIGH); 
digitalWrite(pinLed2, LOW); 
digitalWrite(pinLed3, HIGH); 
digitalWrite(pinLed4, LOW); 
digitalWrite(pinLed5, LOW);
digitalWrite(pinLed6, LOW);}

else if((valorLDR >= 936) & (valorLDR < 950)) {
digitalWrite(pinLed1, HIGH); 
digitalWrite(pinLed2, HIGH); 
digitalWrite(pinLed3, HIGH); 
digitalWrite(pinLed4, HIGH); 
digitalWrite(pinLed5, LOW);
digitalWrite(pinLed6, LOW);}

else if((valorLDR >= 950) & (valorLDR < 970)) { 
digitalWrite(pinLed1, HIGH); 
digitalWrite(pinLed2, HIGH); 
digitalWrite(pinLed3, HIGH); 
digitalWrite(pinLed4, LOW); 
digitalWrite(pinLed5, LOW);
digitalWrite(pinLed6, LOW);}

else if((valorLDR >= 970) & (valorLDR < 980)) { 
digitalWrite(pinLed1, HIGH); 
digitalWrite(pinLed2, HIGH); 
digitalWrite(pinLed3, HIGH); 
digitalWrite(pinLed4, HIGH); 
digitalWrite(pinLed5, LOW);
digitalWrite(pinLed6, LOW);}

else if(valorLDR >= 980) { 
digitalWrite(pinLed1, HIGH); 
digitalWrite(pinLed2, HIGH); 
digitalWrite(pinLed3, HIGH); 
digitalWrite(pinLed4, HIGH); 
digitalWrite(pinLed5, HIGH);
digitalWrite(pinLed6, HIGH);}

}
