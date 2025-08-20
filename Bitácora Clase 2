# Bitacora clase 02 - 14 de agosto del 2025

## Conocimientos teóricos preliminares

Repasamos a grandes rasgos la historia de la programación, desde el concepto del código binario hasta la
programación al como la conocemos hoy en dia.
También introducimos algunos conceptos claves como lenguaje de programación, sintaxis, interfaz, consola, entre otros. 

## Processing

Instalamos Processing, el cual mediante una serie de funciones y variables en Java nos permite elaborar 

gráficas e imagenes a base de un código reflejado en el sketch.
### Conceptos:

Funcion: opera bajo una lógica similar a la ecuación de la recta f(x) ya que todas las funciones se escriben de esa forma
donde f es la función y (x) el argumento
Variable: Es un contenedor ya que guarda la información en una memoria. Es el valor asignado a (x). Es necesario establecer primero
el tipo de variable que se va a usar y una vez realizado, puedo agregar una función. 
Signos: 
" " se usa para las palabras
; para cerrar lineas
. decimal
' ' para carateres

### Tipos de funciones:
print() para imprimir en la consola. se imprime para el lado, no para abajo
println() para imprimir solo lo que se escribe en la linea
print("\n") es otra forma de hacer salto de linea
println(hola); para imprimir saltos de linea con textos
println("texto tipo " + variable); para imprimir mensajes complejos concatenados

### Variales:
char X = 'a'; para caracteres. Solo guarda letras de a una, tampoco sirve para operaciones aritmeticas
int x = 10; para numeros enteros. Se pueden hacer operaciones aritmeticas siempre y cuando la variable
se defina como 0 y después se llame como operación de otras variables (de la misma forma que las celdas de resultados en Excel)
float X = 1.1; para numeros decimales. Ocupa más espacio en la memoria que int. Se puede convertir un float en int con un int
de funcion el cual le quita los decimales al numero

### En processing

line(x1,y1,x2,y2); para hacer lineas rectas. cada coordenada representa los extremos de la linea
bezier(x1,y,1,x2.y2.x3.y3,x4,y4); para hacer lineas curvas
background(0); para poner tno enel lienzo. 0 es negro y 255 es blanco en escala de grises, la cual se obtiene solo al poner
soo una variable. Debe estar antes de dibujar
text("hola",x,y); para agregar texto al lienzo. se escribe primero el texto y luego su posicion en coordenadas
textSize(39);para modificar el tamaño del texto. Se pone antes del texto
Para aprovechar Processing de mejor manera, se utiliza su librería:
void setup() {
}
void draw() {
}
las variables suelen crearse antes del setup
el frameRate(60); cuenta los frames desde el Run del programa. por dfecto es 60
si pongo el background al inicio del draw, evito que los frames se superpongan
fill(0); se usa para rellenar
frameCount() es la variable que se usa para contar cuántos frames han pasado desde el incio del programa

#### Formnas primitivas:

size(400,400) para el tamaño de la forma
triangle(x1,y1,x2,y2,x3,y3); cada coorenada representa un vertice
rect(x,y,ancho,largo); la coordenada es la posición de la esquina superior izquierda
rectMode(corners) (center) (radius); modifica los parámetros
quad(x1,y1,x2,y2,x3,y3,x4,y4); cada coordenada representa un vertice del cuadrilatero
ellipse(x,y,ancho,alto);
arc(x,y,ancho,alto,star,stop); star es el angulo de inicio como radio y stop el de freno. avanza en sentido antihorario
radio: PI, HALF_PI, TWO_PI,QUARTER_PI
OPEN: para que la figura este abierta
CHORD: para que esté cerrada
PIE: como pie
noFill(); para no rellenar


