#include<stdio.h>
int matriz[3][3];
int mult[3][3];
int resultado[3][3];
int i,j;
int main()
{
	printf("Ingresa los valores de la matriz:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&matriz[i][j]);
		}
	}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%5d",matriz[i][j]);
			}
			printf("\n");
		}

	printf("Coloca la matriz a multiplicar:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&mult[i][j]);
		}
	}
	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%5d",mult[i][j]);
			}
			printf("\n");
		}
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
			resultado[i][j]=matriz[i][j]*mult[i][j];
		}
	}
	printf("La nueva matriz es:\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%5d",resultado[i][j]);
		}
		printf("\n");
	}
}
