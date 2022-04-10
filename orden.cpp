/*Dentro de main.cpp ------------------------------------------------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "Operaciones.h"


int main(void) {

	float n1, n2, n3, * val1, * val2, * val3;
	float res = 0;
	char SiNo;
	int decision;

Inicio:

	system("cls");
	system("color 7");

	printf("Queti \n\n"
		"(PD: Dije que se inspiraran no que copiaran el codigo -.-) \n\n"
		"Escriba un numero: ");
	fflush(stdout);
	scanf_s("%f", &n1);

	printf("Escriba otro numero: ");
	fflush(stdout);
	scanf_s("%f", &n2);

	printf("Escriba un ultimo numero: ");
	fflush(stdout);
	scanf_s("%f", &n3);

Confirmar1:

	system("cls");
	system("color 6");

	printf("Los valores introducidos son: <%.2f>, <%.2f> y <%.2f>. \n\nEs correcto? S/N: ", n1, n2, n3);
	scanf_s(" %c", &SiNo);

	if (SiNo == 'S' || SiNo == 's')
		goto Operadores;
	else
		if (SiNo == 'N' || SiNo == 'n')
			goto Editar;
		else
			system("color 4");
	printf("No se reconoce el comando. ");
	system("pause");
	goto Confirmar1;

Editar:

	system("cls");

	printf("Que valor desea editar? (1, 2, 3 o 4 para cancelar.) ");
	fflush(stdout);
	scanf_s("%d", &decision);

	if (decision < 1 || decision > 4)
	{
		system("color 4");
		printf("No se reconoce el comando.");
		system("pause");
		goto Editar;
	}


	switch (decision) {
	case 1:
		system("cls");

		printf("Escriba el nuevo valor del numero 1: ");
		fflush(stdout);
		scanf_s("%f", &n1);
		goto Confirmar1;

		break;

	case 2:
		system("cls");

		printf("Escriba el nuevo valor del numero 2: ");
		fflush(stdout);
		scanf_s("%f", &n2);
		goto Confirmar1;

		break;

	case 3:
		system("cls");

		printf("Escriba el nuevo valor del numero 3: ");
		fflush(stdout);
		scanf_s("%f", &n3);
		goto Confirmar1;

		break;

	case 4:
		system("cls");

		goto Confirmar1;

		break;
	}

	int oper1;

Operadores:

	val1 = &n1;
	val2 = &n2;
	val3 = &n3;

	system("color 3");
	Operaciones ope;
	system("cls");
	printf("Escriba un numero del 1 al 5 para hacer una operacion, en caso de ayuda, escriba 0: ");
	fflush(stdout);
	scanf_s("%d", &oper1);

	system("cls");

	if (oper1 < 0 || oper1 >5)
	{
		system("color 4");
		printf("No se reconocio el comando. ");
		system("pause");

		goto Operadores;
	}

	switch (oper1) {
	case 0:
		goto Ayuda;
		break;
	case 1:
		goto Suma;
		break;

	case 2:
		goto Mayor;
		break;

	case 3:
		goto Menor;
		break;

	case 4:
		goto Multi;
		break;

	case 5:
		goto Prom;
		break;
	}

Ayuda:
	{
		system("color 5");
		printf("Que operacion desea realizar? \n\n1 = Suma \n2 = Mayor \n3 = Menor \n4 = Multiplicacion \n5 = Promedio"
			"\n\n-----------------------------------\n\n");
		system("pause");

		goto Operadores;

	}

Suma:

	system("color 2");

	res = ope.Suma(*val1, *val2, *val3);

	printf("La suma de %.2f, %.2f y %.2f es igual a %.2f", *val1, *val2, *val3, res);

	printf("\n\nA: Repetir programa\nB: Realizar nueva operacion\nC: Salir\n\n");
	scanf_s("%c", &SiNo);

	if (SiNo == 'A' || SiNo == 'a') goto Inicio;
	else if (SiNo == 'B' || SiNo == 'b') goto Operadores;
	else if (SiNo == 'C' || SiNo == 'c') exit(0);

Mayor:
	float mayor;

	system("color 2");
	mayor = ope.Mayor(*val1, *val2, *val3);

	printf("El valor mayor introducido = %.2f", mayor);

	printf("\n\nA: Repetir programa\nB: Realizar nueva operacion\nC: Salir\n\n");
	scanf_s("%c", &SiNo);

	if (SiNo == 'A' || SiNo == 'a') goto Inicio;
	else if (SiNo == 'B' || SiNo == 'b') goto Operadores;
	else if (SiNo == 'C' || SiNo == 'c') exit(0);

Menor:
	float menor;

	system("color 2");
	menor = ope.Menor(*val1, *val2, *val3);

	printf("El valor menor introducido = %.2f", menor);

	printf("\n\nA: Repetir programa\nB: Realizar nueva operacion\nC: Salir\n\n");
	scanf_s("%c", &SiNo);

	if (SiNo == 'A' || SiNo == 'a') goto Inicio;
	else if (SiNo == 'B' || SiNo == 'b') goto Operadores;
	else if (SiNo == 'C' || SiNo == 'c') exit(0);

Multi:

	system("color 2");
	res = ope.Multi(*val1, *val2, *val3);

	printf("La multiplicacion de %.2f, %.2f y %.2f es igual a %.2f", *val1, *val2, *val3, res);

	printf("\n\nA: Repetir programa\nB: Realizar nueva operacion\nC: Salir\n\n");
	scanf_s("%c", &SiNo);

	if (SiNo == 'A' || SiNo == 'a') goto Inicio;
	else if (SiNo == 'B' || SiNo == 'b') goto Operadores;
	else if (SiNo == 'C' || SiNo == 'c') exit(0);

Prom:

	system("color 2");
	res = ope.Prom(*val1, *val2, *val3);

	printf("El promedio de %.2f, %.2f y %.2f es igual a %.2f", *val1, *val2, *val3, res);

	printf("\n\nA: Repetir programa\nB: Realizar nueva operacion\nC: Salir\n\n");
	scanf_s("%c", &SiNo);

	if (SiNo == 'A' || SiNo == 'a') goto Inicio;
	else if (SiNo == 'B' || SiNo == 'b') goto Operadores;
	else if (SiNo == 'C' || SiNo == 'c') exit(0);
}

/* Dentro de classes.cpp y .h ----------------------------------------------------------------------------------------------------------------------------------------

Classes.cpp:*/

#include "Operaciones.h"

float Operaciones::Suma(float valor1, float valor2, float valor3)
{
	float Respuesta;

	Respuesta = valor1 + valor2 + valor3;

	return Respuesta;
}

float Operaciones::Mayor(float valor1, float valor2, float valor3)
{
	if (valor1 > valor2 && valor1 > valor3)
		return valor1;
	if (valor2 > valor1 && valor2 > valor3)
		return valor2;
	if (valor3 > valor1 && valor3 > valor2)
		return valor3;
}

float Operaciones::Menor(float valor1, float valor2, float valor3)
{
	if (valor1 < valor2 && valor1 < valor3)
		return valor1;
	if (valor2 < valor1 && valor2 < valor3)
		return valor2;
	if (valor3 < valor1 && valor3 < valor2)
		return valor3;
}

float Operaciones::Multi(float valor1, float valor2, float valor3)
{
	float Respuesta;

	Respuesta = valor1 * valor2 * valor3;

	return Respuesta;
}

float Operaciones::Prom(float valor1, float valor2, float valor3)
{
	float Respuesta;

	Respuesta = (valor1 + valor2 + valor3) / 3;

	return Respuesta;
}

/* Dentro de Clases.h --------------------------------------------------------------------------------------------------------------------------------------------*/

#pragma once

#ifndef OPERACIONES_H
#define OPERACIONES_H

class Operaciones
{
public:
	float Suma(float valor1, float valor2, float valor3);
	float Mayor(float valor1, float valor2, float valor3);
	float Menor(float valor1, float valor2, float valor3);
	float Multi(float valor1, float valor2, float valor3);
	float Prom(float valor1, float valor2, float valor3);
};

#endif /* OPERACIONES_H */
