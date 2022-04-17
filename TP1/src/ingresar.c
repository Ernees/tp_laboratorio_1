/*
 * ingresar.c
 *
 *  Created on: 10 abr. 2022
 *      Author: PC
 */

#include <stdio.h>
#include <stdlib.h>
float ingresarKilometros()
{
	float kilometros;
	printf("Ingrese los kilometros totales\n");
	scanf("%f", &kilometros);
	while(kilometros<1)
	{
		printf("Error, ingrese una cantidad de kilometros validos\n");
		scanf("%f", &kilometros);
	}
	return kilometros;
}
float ingresarPrecioLatam()
{
	float precio;
	printf("Ingrese el precio de su viaje en LATAM\n");
	scanf("%f", &precio);
	while(precio<1)
	{
		printf("Error, ingrese un precio valido para su viaje en LATAM\n");
		scanf("%f", &precio);
	}
	return precio;
}

float ingresarPrecioAero()
{
	float precio;
	printf("Ingrese el precio de su viaje en AEREOLINEAS\n");
	scanf("%f", &precio);
	while(precio<1)
	{
		printf("Error, ingrese un precio valido para su viaje en AEREOLINEAS\n");
		scanf("%f", &precio);
	}
	return precio;
}
