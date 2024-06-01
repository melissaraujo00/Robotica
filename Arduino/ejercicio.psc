Algoritmo sin_titulo
	Definir  nombre Como Caracter;
	definir apellido Como Caracter;
	definir edad Como Entero;
	definir peso Como Real;
	definir dui Como Real;
	definir pago Como Real;
	definir descuento Como Real;
	mostrar " cual es su nombre";
	leer nombre;
	Mostrar "cual es su apellido"
    leer apellido;
	mostrar "cual es su peso en libra";
	leer peso;
	Mostrar "cual es numero de dui sin guion ";
	leer dui;
	mostrar "cual es su pago mensual"
	leer pago;
	Definir seguro Como Real;
	Definir renta Como Real;
	Definir suma Como Real;
	renta <- pago*0.13;
	seguro <- pago*0.20;
	suma<- renta + seguro;
	descuento <- pago - suma;
	mostrar " estimado cliente: ", nombre,  apellido " su pago total con descuento es: ", descuento;
	
FinAlgoritmo
