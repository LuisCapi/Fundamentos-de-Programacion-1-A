#include<stdio.h>
int identidad[3][3];
int vector[3];
int i,j;
int main()
{
	printf("Ingresa los valores de la matriz:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&identidad[i][j]);
		}
	}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%5d",identidad[i][j]);
			}
			printf("\n");
		}

	printf("Coloca el vector a multiplicar:\n");
	for(i=0;i<3;i++)
	{
	scanf("%d",&vector[i]);
	}
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
			identidad[i][j]=identidad[i][j]*vector[j];
		}
	}
	printf("La nueva matriz es:\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%5d",identidad[i][j]);
		}
		printf("\n");
	}
}
