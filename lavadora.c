/*Programa que calcula el tiempo de lavado segun el tipo de ropa*/
#include<stdio.h>
int kilos;
int ropa;
int main()
{
	printf("Programa que calcula el tiempo de lavado segun el tipo de ropa\n");
	printf("Escribe el peso en kilos de la ropa a lavar: ");
	scanf("%d",&kilos);
	if(kilos>=0&kilos<=10)
		{
			printf("La ropa a lavar sera minima\n");
			printf("Si la ropa es delicada presiona 1, si la ropa es normal presiona 2, si la ropa es sucia presiona 3: ");
			scanf("%d",&ropa);
			if(ropa==1)
			{
			printf("La ropa se lavara por 5 minutos");
			}
				else if(ropa==2)
				{
				printf("La ropa se lavara por 10 minutos");
				}
				else
					if(ropa==3)
					{
					printf("La ropa se lavara por 15 minutos");
					}
					else 
					{
						printf("No selecciono un campo correcto");
					}
		}
		else
			if(kilos>=11&kilos<=15)
			{
				printf("La ropa a lavar sera media\n");
				printf("Si la ropa es delicada presiona 1, si la ropa es normal presiona 2, si la ropa es sucia presiona 3: ");
				scanf("%d",&ropa);
				if(ropa==1)
				{
				printf("La ropa se lavara por 5 minutos");
				}
				else if(ropa==2)
					{
					printf("La ropa se lavara por 10 minutos");
					}
					else
						if(ropa==3)
						{
						printf("La ropa se lavara por 15 minutos");
						}
						else
						{
							printf("No selecciono un campo valido");
						}
			}
			else
				if(kilos>=16&kilos<=20)
				{
					printf("La ropa a lavar sera maxima\n");
					printf("Si la ropa es delicada presiona 1, si la ropa es normal presiona 2, si la ropa es sucia presiona 3: ");
					scanf("%d",&ropa);
					if(ropa==1)
					{
					printf("La ropa se lavara por 5 minutos");
					}
					else if(ropa==2)
						{
						printf("La ropa se lavara por 10 minutos");
						}
						else
							if(ropa==3)
							{
							printf("La ropa se lavara por 15 minutos");
							}
							else
							{
								printf("No selecciono un campo valido");
							}
				}
				else
					{
						printf("no se puede lavar\n");
					}
	
}
