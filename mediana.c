#include<stdio.h>
int numeros[10];
int i,a,temporal,suma;
float mediana;
int main()
{
	printf("PROGRAMA QUE MANDA A PANTALLA LA MEDIANA DE 10 NUMEROS\n");
	printf("\n");
	printf("Ingresa los 10 numeros:\n");
	for(i=0;i<10;i++)
	{
	scanf("%d",&numeros[i]);
	}
	for(i=0;i<10;i++)
	{
		for (a=i+1;a<10;a++)
		{
		if(numeros[a]>numeros[i])
			{
			temporal=numeros[a];
			numeros[a]=numeros[i];
			numeros[i]=temporal;
			}
		}
	}
	printf("\n");
	printf("ORDEN DE LISTA:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",numeros[i]); 
	}
	printf("\n");
	suma=numeros[4]+numeros[5];
	mediana=(float)suma/2;
	printf("La mediana es:%f",mediana);
}
