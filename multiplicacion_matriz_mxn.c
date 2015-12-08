#include<stdio.h>
int A[10][10];
int FA,CA;
int B[10][10];
int FB,CB;
int c[10][10]={{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}};
int i,j,k;
int main()
{
	printf("Programa que multiplica una matriz de orden mxn\n");
	printf("\nCuantas filas y columnas tiene la primera matriz?\n");
	printf("Filas: ");
	scanf("%d",&FA);
	printf("Columnas: ");
	scanf("%d",&CA);
	printf("Cuantas filas y colummnas tiene la segunda matriz?\n");
	printf("Filas: ");
	scanf("%d",&FB);
	printf("Columnas: ");
	scanf("%d",&CB);
	if(CA!=FB)
	{
		printf("\n\nNo se puede realizar esta multiplicacion de matrices\n");
		return 0;
	}
	printf("\n\nIngresa los valores de la primera matriz: \n");
	for(i=0;i<FA;i++)
	{
			for(j=0;j<CA;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<FA;i++)
	{
		for(j=0;j<CA;j++)
		{
			printf("%5d",A[i][j]);
		}
		printf("\n");
	}
	printf("\nIngresa los valores de la Segunda matriz: \n");
	for(i=0;i<FB;i++)
	{
			for(j=0;j<CB;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<FB;i++)
	{
		for(j=0;j<CB;j++)
		{
			printf("%5d",B[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<FA;i++)
	{
		for(j=0;j<CB;j++)
		{
			for(k=0;k<CA;k++)
			{
				c[i][j]+=A[i][k]*B[k][j];
			}
		}
	}
	printf("La nueva matriz es: \n");
	for(i=0;i<FA;i++)
	{
		for(j=0;j<CB;j++)
		{
			printf("%5d",c[i][j]);
		}
		printf("\n");
	}
}
