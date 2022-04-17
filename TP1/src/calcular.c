/*
 * calcular.c
 *
 *  Created on: 11 abr. 2022
 *      Author: PC
 */
#include <stdio.h>
#include <stdlib.h>

float calcularDebitoLat(float precioLat)
{
	float porcentaje;
	float descuento;

	porcentaje=precioLat*10/100;
	descuento=precioLat-porcentaje;

	return descuento;
}
float calcularCreditoLat(float precioLat)
{
	float porcentaje;
	float recarg;

	porcentaje=precioLat*25/100;
	recarg=precioLat+porcentaje;

	return recarg;
}
float calcularBTCLat(float precioLat)
{
	float precioBTCLat;
	precioBTCLat=precioLat/4606954.55;

	return precioBTCLat;
}
float calcularPrecioULat(float precioLat, float kilometrosLat)
{
	float precioU;
	precioU=precioLat/kilometrosLat;
	return precioU;
}
float calcularDebitoAero(float precioAero)
{
	float porcentaje;
	float descuento;

	porcentaje=precioAero*10/100;
	descuento=precioAero-porcentaje;

	return descuento;
}
float calcularCreditoAero(float precioAero)
{
	float porcentaje;
	float recarg;

	porcentaje=precioAero*25/100;
	recarg=precioAero+porcentaje;

	return recarg;
}
float calcularBTCAero(float precioAero)
{
	float precioBTCAero;
	precioBTCAero=precioAero/4606954.55;

	return precioBTCAero;
}
float calcularPrecioUAero(float precioAero, float kilometros)
{
	float precioU;
	precioU=precioAero/kilometros;
	return precioU;
}
float calcularDiferencia(float precioLat, float precioAero)
{
	float diferencia;
	if(precioLat>precioAero)
	{
		diferencia=precioLat-precioAero;
	}
	else
	{
		diferencia=precioAero-precioLat;
	}
	return diferencia;
}
