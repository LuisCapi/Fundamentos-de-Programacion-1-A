#include<stdio.h>
int n1, n2;
int num(int n1,int n2)
{
	int suma;
	suma=n1+n2;
	return suma;
}
int num1(int n1, int n2)
{
	int resta;
	resta=n1-n2;
	return resta;
}
int num2(int n1,int n2)
{
	int multi;
	multi=n1*n2;
	return multi;
}
float num3(int n1, int n2)
{
	float div;
	div=(float)n1/n2;
	return div;
}

int main()
{

	int suma;
	int resta;
	int multi;
	float div;
	
 	printf("Programa que imprime la suma,resta,multiplicacion y division de 2 numeros\n");
 	printf("\ningresa un numero: ");
	scanf("%d",&n1);
	printf("\nIngresa otro numero: ");
	scanf("%d",&n2);
	suma=num(n1,n2);
 	printf("\nSuma: %d\n",suma);
 	resta=num1(n1,n2);
 	printf("\nResta: %d\n",resta);
 	multi=num2(n1,n2);
 	printf("\nMultiplicacion: %d\n",multi);
 	div=num3(n1,n2);
 	printf("\nDivision: %f\n",div);
}

//funciones suma, resta, multiplicacion y division. "calculadora"
