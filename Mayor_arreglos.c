#include<stdio.h>
int numeros[10];
int i,a,temporal;
int main()
{
	printf("PROGRAMA QUE ORDENA LA LISTA DE 10 NUMEROS DE MAYOR A MENOR\n");
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
}
