/*
 ============================================================================
 Name        : TP1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "ingresar.h"
#include "calcular.h"

void mostrarCalculos(float km,float precio1, float precio2, float desc1, float desc2, float recargo1, float recargo2, float uni1, float uni2, float dif, float btc1, float btc2);

int main(void){
	setbuf(stdout,NULL);

	int opcion;
	float km;
	float flagUno=0;
	float flagDos=0;
	float flagTres=0;
	float precioLatam=0;
	float precioAero=0;
	float BTCLat;
	float BTCAero;
	float descLat;
	float recargoLat;
	float precioUnitarioLat;
	float descAero;
	float recargoAero;
	float precioUnitarioAero;
	float diferencia;


	while(opcion!=6)
	{
		printf("1-Ingresar Kilómetros: ( km=%f)\n 2-Ingresar Precio de Vuelos: (Aerolíneas=%f, Latam=%f)\n 3-Calcular todos los costos: \n 4-Informar Resultados\n 5-Carga forzada de datos\n 6-Salir\n Ingrese una opcion", km, precioAero, precioLatam);
		scanf("%d", &opcion);
		while(opcion<1 || opcion>6)
		{
			printf("Error, ingrese un dato valido (entre 1 y 6)\n");
			scanf("%d", &opcion);
		}
		switch(opcion)
		{
			case 1:
				if(flagUno==0)
				{
					km=ingresarKilometros();
					printf("kilometros ingresados: %f\n", km);
					flagUno=1;
				}

				break;

			case 2:
				if(flagDos==0)
				{
					precioLatam=ingresarPrecioLatam();
					precioAero=ingresarPrecioAero();
					printf("El precio de aereolineas es %f y de latam %f\n", precioAero, precioLatam);
					flagDos=1;
				}
				break;

			case 3:
				if(flagTres==0 && flagDos==1 && flagUno==1)
				{

					descLat=calcularDebitoLat(precioLatam);

					recargoLat=calcularCreditoLat(precioLatam);

					BTCLat=calcularBTCLat(precioLatam);

					precioUnitarioLat=calcularPrecioULat(precioLatam, km);


					descAero=calcularDebitoAero(precioAero);

					recargoAero=calcularCreditoAero(precioAero);

					BTCAero=calcularBTCAero(precioAero);

					precioUnitarioAero=calcularPrecioUAero(precioAero, km);


					diferencia=calcularDiferencia(precioLatam, precioAero);

					flagTres=1;

				}
				else
				{
					printf("error, ingrese los datos requeridos\n");
				}
				break;

			case 4:

				if(flagUno==1 && flagDos==1 && flagTres==1)
				{
					mostrarCalculos(km, precioLatam, precioAero, descLat, descAero, recargoLat, recargoAero, precioUnitarioLat, precioUnitarioAero, diferencia, BTCLat, BTCAero);
				}
				else
				{
					if(flagUno==0 || flagDos==0)
					{
						printf("error, ingrese los datos requeridos\n");
					}
					else
					{
						printf("error, realice los calculos apretando la opcion ´3´\n");
					}
				}
				break;

			case 5:
				km=7090;
				precioAero=162965;
				precioLatam=159339;

				descLat=calcularDebitoLat(precioLatam);

				recargoLat=calcularCreditoLat(precioLatam);

				BTCLat=calcularBTCLat(precioLatam);

				precioUnitarioLat=calcularPrecioULat(precioLatam, km);


				descAero=calcularDebitoAero(precioAero);

				recargoAero=calcularCreditoAero(precioAero);

				BTCAero=calcularBTCAero(precioAero);

				precioUnitarioAero=calcularPrecioUAero(precioAero, km);


				diferencia=calcularDiferencia(precioLatam, precioAero);

				mostrarCalculos(km, precioLatam, precioAero, descLat, descAero, recargoLat, recargoAero, precioUnitarioLat, precioUnitarioAero, diferencia, BTCLat, BTCAero);

				break;

			case 6:

				break;
		}
	}//FIN WHILE
	printf("termino");


	return 0;
}
//1 latam
//2 aero
void mostrarCalculos(float km, float precio1, float precio2, float desc1, float desc2, float recargo1, float recargo2, float uni1, float uni2, float dif, float btc1, float btc2)
{
	printf("KMs ingresados: %f\n", km);
	printf("Precio Latam: %f\n", precio1);
	printf("a) precio con tarjeta de debito: %f\n", desc1);
	printf("b) precio con tarjeta de credito: %f\n", recargo1);
	printf("c) precio pagando con bitcoin: %f\n", btc1);
	printf("d) mostrar precio unitario: %f\n", uni1);
	printf("Precio Aerolineas: %f\n", precio2);
	printf("a) precio con tarjeta de debito: %f\n", desc2);
	printf("b) precio con tarjeta de credito: %f\n", recargo2);
	printf("c) precio pagando con bitcoin: %f\n", btc2);
	printf("d) mostrar precio unitario: %f\n", uni2);


	printf("La diferencia de precio es: %f\n", dif);
}

