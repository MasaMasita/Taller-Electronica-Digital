int potPin = A0;
int ledPin = 9;
int valorPot = 0; 
int potMapeado = 0;

int tiempoPunto = 300;
int tiempoRaya = 900;
int separador = 300;
int finCaracter = 300;

int intervalo = 1500;


void setup()
{
	pinMode(ledPin,OUTPUT);
  Serial.begin(9600);  
}

void loop()
{
  valorPot = analogRead(potPin);
  potMapeado = map(valorPot,0,1023,0,1500);
	intervalo = potMapeado;
	

if(intervalo >= 0 && intervalo < 500){
	
		raya(); 
		raya();//m
		delay(finCaracter);
	}
if(intervalo > 500 && intervalo < 1000){
	
		punto();
		raya();//a
		delay(finCaracter);
	}
if(intervalo > 1000 && intervalo <=1500){
		punto();
		punto();
		punto();//s
		delay(finCaracter);
	}

	Serial.println(intervalo);
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