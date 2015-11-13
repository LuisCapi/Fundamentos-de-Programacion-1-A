#include<stdio.h>
float calificaciones[10],suma;
int i;
int main()
{
	printf("Programa que saca el promedio de 10 calificaciones\n");
	printf("\n");
	printf("Ingresa las calificaciones:\n");
	for(i=0;i<10;i++)
	{
	scanf("%f",&calificaciones[i]);
	}
	for(i=0;i<10;i++)
	{
	suma=suma+calificaciones[i];	
	}
	printf("EL promedio es:");
	printf("%f\n",suma/10);
}
