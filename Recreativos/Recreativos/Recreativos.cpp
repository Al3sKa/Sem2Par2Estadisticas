#include <stdio.h>
#include <stdlib.h>
#include "Operaciones.h"

int main(void) {

	float n1, n2, n3, * val1, * val2, * val3;
	float res = 0;
	char SiNo;
	int decision;

	goto Inicio;

MainError:
	system("color 4");
	printf("No se reconoce el comando, en su lugar se repetira el codigo.\n\n");
	system("pause");
	goto Inicio;

Inicio:

	system("cls");
	system("color 7");

	printf("No lo copien, inspirense! xd\n\(c) Al3sKa 2022 - 2022\n\n "
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
	scanf_s(" %c", &SiNo);

	if (SiNo == 'A' || SiNo == 'a') goto Inicio;
	else if (SiNo == 'B' || SiNo == 'b') goto Operadores;
	else if (SiNo == 'C' || SiNo == 'c') exit(0);
	else goto MainError;

Mayor:
	float mayor;

	system("color 2");
	mayor = ope.Mayor(*val1, *val2, *val3);

	printf("El valor mayor introducido = %.2f", mayor);

	printf("\n\nA: Repetir programa\nB: Realizar nueva operacion\nC: Salir\n\n");
	scanf_s(" %c", &SiNo);

	if (SiNo == 'A' || SiNo == 'a') goto Inicio;
	else if (SiNo == 'B' || SiNo == 'b') goto Operadores;
	else if (SiNo == 'C' || SiNo == 'c') exit(0);
	else goto MainError;

Menor:
	float menor;

	system("color 2");
	menor = ope.Menor(*val1, *val2, *val3);

	printf("El valor menor introducido = %.2f", menor);

	printf("\n\nA: Repetir programa\nB: Realizar nueva operacion\nC: Salir\n\n");
	scanf_s(" %c", &SiNo);

	if (SiNo == 'A' || SiNo == 'a') goto Inicio;
	else if (SiNo == 'B' || SiNo == 'b') goto Operadores;
	else if (SiNo == 'C' || SiNo == 'c') exit(0);
	else goto MainError;

Multi:

	system("color 2");
	res = ope.Multi(*val1, *val2, *val3);

	printf("La multiplicacion de %.2f, %.2f y %.2f es igual a %.2f", *val1, *val2, *val3, res);

	printf("\n\nA: Repetir programa\nB: Realizar nueva operacion\nC: Salir\n\n");
	scanf_s(" %c", &SiNo);

	if (SiNo == 'A' || SiNo == 'a') goto Inicio;
	else if (SiNo == 'B' || SiNo == 'b') goto Operadores;
	else if (SiNo == 'C' || SiNo == 'c') exit(0);
	else goto MainError;

Prom:

	system("color 2");
	res = ope.Prom(*val1, *val2, *val3);

	printf("El promedio de %.2f, %.2f y %.2f es igual a %.2f", *val1, *val2, *val3, res);

	printf("\n\nA: Repetir programa\nB: Realizar nueva operacion\nC: Salir\n\n");
	scanf_s(" %c", &SiNo);

	if (SiNo == 'A' || SiNo == 'a') goto Inicio;
	else if (SiNo == 'B' || SiNo == 'b') goto Operadores;
	else if (SiNo == 'C' || SiNo == 'c') exit(0);
	else goto MainError;
}