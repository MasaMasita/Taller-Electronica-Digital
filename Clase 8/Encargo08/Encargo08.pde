import processing.serial.*;

Serial miEncoder; 
String datos;
int val;

void setup(){
  
  size(400,600);
  colorMode(HSB);
  background(175,200,175);
  line(90, 200, 310, 200);
  line(90, 150, 310, 150);
  noFill();
  arc(90, 175, 50, 50, 1.5, PI + HALF_PI, OPEN);
  arc(310, 175, 50, 50, -1.5, HALF_PI, OPEN);
  arc(195, 150, 140, 100, -3.15, HALF_PI - PI + HALF_PI, OPEN);
  miEncoder = new Serial(this, "COM3", 9600);
  miEncoder.bufferUntil('\n');
}

void draw(){
  colorMode(HSB);
  fill(mouseY,255,255);
  ellipse(100,180,30,30);
  ellipse(140,180,30,30);
  ellipse(180,180,30,30);
  ellipse(220,180,30,30);
  ellipse(260,180,30,30);
  ellipse(300,180,30,30);
  dibujoFormas();
  dibujoLuces();
  dibujoTexto();
}
void dibujoFormas() {
  fill(200, 200, 200);

}
void dibujoLuces() {
  colorMode(HSB);
  noStroke();
  
  int h = val;
  fill(h, 350, 250);
  triangle(75,600,195,200,325,600);
}
void dibujoTexto() {
  textSize(20);
  fill(0);
  text("nunca me faltes", 130, 450);
  text("nunca me engañes", 120, 475);
}

void serialEvent(Serial miEncoder) {
  datos = miEncoder.readStringUntil('\n');
  if (datos != null) {
    datos = trim(datos);
    val = int(datos);
  }
  println(val);
}
