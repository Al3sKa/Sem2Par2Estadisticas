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