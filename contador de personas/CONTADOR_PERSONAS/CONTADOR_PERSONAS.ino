int LED12 = 12;
int LED13 = 13;
int Trigger_der = 3;
int Echo_der = 2;
int Trigger_izq = 11;
int Echo_izq = 10;

int derecho = 0;
int derecho_cuenta = 0;
int derecho_ahora = 0;
int derecho_anterior = 0;

int izquierdo = 0;
int izquierdo_cuenta = 0;
int izquierdo_anterior = 0;
int izquierdo_ahora = 0;

int izquierdo_duracion,izquierdo_distancia;
int derecho_duracion, derecho_distancia;

int cuenta = 0;
String pulsadores = "";

void setup() {
  pinMode(LED12, OUTPUT);
  pinMode(LED13, OUTPUT);
  pinMode(Trigger_der, OUTPUT);
  pinMode(Echo_der, INPUT);
  pinMode(Trigger_izq, OUTPUT);
  pinMode(Echo_der, INPUT);
  Serial.begin(9600);
}

void loop(){
delay(100);

    digitalWrite (Trigger_der, HIGH);
    delayMicroseconds (10);
    digitalWrite (Trigger_der, LOW);
    derecho_duracion = pulseIn (Echo_der, HIGH);
    derecho_distancia = (derecho_duracion/2) / 29.1;
    
    digitalWrite (Trigger_izq, HIGH);
    delayMicroseconds (10);
    digitalWrite (Trigger_izq, LOW);
    izquierdo_duracion = pulseIn (Echo_izq, HIGH);
    izquierdo_distancia = (izquierdo_duracion/2) / 29.1;

  if (izquierdo_distancia < 20) { // Se esta a menos de 20 activa izquierdo.
      izquierdo = HIGH;
      digitalWrite (LED13, HIGH);
    }
 else {
      izquierdo = LOW;
      digitalWrite (LED13, LOW);
    }  
 if (derecho_distancia < 20) { // Se esta a menos de 20 activa derecho.
     derecho = HIGH;
     digitalWrite (LED12, HIGH);
    }
 else {
      derecho = LOW;
      digitalWrite (LED12, LOW);
    } 

//izquierdo = digitalRead(LED13);
//derecho = digitalRead(LED12);

if (izquierdo ==  HIGH) { // Comprueba activado izquierdo.
izquierdo_ahora = 1;
}
else {
izquierdo_ahora = 0;
}
if (derecho ==  HIGH) { // Comprueba activado derecho.
derecho_ahora = 1;
}
else {
derecho_ahora = 0;
}

if(derecho_ahora != derecho_anterior){
if(derecho_ahora == 1){
derecho_cuenta = derecho_cuenta + 1;
//Serial.print("derecho_cuenta: "); 
//Serial.println(derecho_cuenta);
}
}

if(izquierdo_ahora != izquierdo_anterior){
if(izquierdo_ahora == 1){
izquierdo_cuenta = izquierdo_cuenta + 1;
//Serial.print("izquierdo_cuenta: "); 
//Serial.println(izquierdo_cuenta);
}
}

////////////////////////////////////////////////////////////////
if (izquierdo == HIGH && derecho == LOW && pulsadores == "")
{
pulsadores="entrando";
}
if (izquierdo == HIGH && derecho == HIGH && pulsadores == "entrando")
{
pulsadores="entrando_mitad";
}
if (izquierdo == LOW && derecho == HIGH && pulsadores == "entrando_mitad")
{
pulsadores="casi_entro";
}
if (izquierdo == LOW && derecho == LOW && pulsadores == "casi_entro")
{
pulsadores="";
cuenta=cuenta+1;
// Serial.println("Cuenta uno mas: ");
Serial.println(cuenta); 
}

///////////////////////////////////////////////
if (izquierdo == LOW && derecho == HIGH && pulsadores == "")
{
  
pulsadores="saliendo";
}
if (izquierdo == HIGH && derecho == HIGH && pulsadores == "saliendo")
{
pulsadores="saliendo_mitad";
}
if (izquierdo == HIGH && derecho == LOW && pulsadores == "saliendo_mitad")
{
pulsadores="casi_salio";
}
if (izquierdo == LOW && derecho == LOW && pulsadores == "casi_salio")
{
pulsadores="";
cuenta=cuenta-1;
//Serial.println("Cuenta uno menos: ");
Serial.println(cuenta); 
}
//Serial.println(pulsadores);
////////////////////////////////////////////////////////////////
izquierdo_anterior = izquierdo_ahora;
derecho_anterior = derecho_ahora;
}
