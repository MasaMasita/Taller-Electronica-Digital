int ledPin = 13;
int tiempoPunto = 100;
int tiempoRaya = 300;
int separador = 100;
int finCaracter = 300;
int espacio = 100;


void setup() {
 pinMode(ledPin, OUTPUT);
 Serial.begin(9600);

}

void loop() {
  raya();
  punto();
  fraseMorse();
}
void punto(){
  digitalWrite(ledPin, HIGH);
  delay(tiempoPunto);
  digitalWrite(ledPin, LOW);
  delay(separador);
}
void raya(){
  digitalWrite(ledPin, HIGH);
  delay(tiempoRaya);
  digitalWrite(ledPin, LOW);
  delay(separador);
}
void fraseMorse() {
  raya(); punto();//n
  delay(finCaracter);
  punto(); punto(); raya();//u
  delay(finCaracter);
  raya(); punto();//n
  delay(finCaracter);
  raya();punto(); raya(); punto();//c
  delay(finCaracter);
  punto(), raya();//a
  delay(finCaracter);
  delay(espacio);
  raya(); raya();//m
  delay(finCaracter);
  punto();//e
  delay(finCaracter);
  delay(espacio);
  punto(); punto(); raya(); punto();//f
  delay(finCaracter);
  punto(), raya();//a
  delay(finCaracter);
  punto(); raya(); punto();punto();//l
  delay(finCaracter);
  raya();//t
  delay(finCaracter);
  punto();//e
  delay(finCaracter);
  punto();punto();punto();//s
  delay(finCaracter);
  delay(espacio);
  raya(); punto();//n
  delay(finCaracter);
  punto(); punto(); raya();//u
  delay(finCaracter);
  raya(); punto();//n
  delay(finCaracter);
  raya();punto(); raya(); punto();//c
  delay(finCaracter);
  punto(), raya();//a
  delay(finCaracter);
  delay(espacio);
  raya(); raya();//m
  delay(finCaracter);
  punto();//e
  delay(finCaracter);
  delay(espacio);
  punto();//e
  delay(finCaracter);
  raya();punto();//n
  delay(finCaracter);
  raya();raya();punto();//g
  delay(finCaracter);
  punto();raya();//a
  delay(finCaracter);
  raya();raya();punto();raya();raya();//ñ
  delay(finCaracter);
  punto();//e
  delay(finCaracter);
  punto();punto();punto();
  delay(finCaracter);
}



