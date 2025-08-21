

void setup() {
  colorMode(HSB);
  size(400, 600);
  background(175,200,175);
  line(90, 200, 310, 200);
  line(90, 150, 310, 150);
  //rectangulo base
  noFill();
  arc(90, 175, 50, 50, 1.5, PI + HALF_PI, OPEN);
  //primeras dos son las cordenadas desde el centro
  //las dos siguietes son e ancho y alto
  //la tercera es el tamaño de apertura
  //seguido de la posicon de acuerdo al radio
  //considerando la elipse completa y si quiero que esté abierta o cerrada
  arc(310, 175, 50, 50, -1.5, HALF_PI, OPEN);
  //hice una reflexion cambiando la apertura a negativo
  //y eliminando pi para que vaya en sentido horario
  arc(195, 150, 140, 100, -3.15, HALF_PI - PI + HALF_PI, OPEN);
  //Los arcos funcionan en sentido anti horario, por lo que
  //sus angulos se representan desde el 0 al 3.6
  ///puedo alterar el sentido con valores negativos
  //y usado operacione matematicas con pi, medio pi y cuarto de pi
  

}

void draw() {
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
  line(75, 600, 175, 200);
  line(325, 600, 215, 200);
  //triangulo de luz
}
void dibujoLuces() {
  noStroke();
  fill(mouseX + 60, 200, 255, 100);
  triangle(75, 600,195,200,325,600);
 
  
}
void dibujoTexto() {
  textSize(20);
  fill(0);
  text("nunca me faltes", 130, 450);
  text("nunca me engañes", 120, 475);
}
