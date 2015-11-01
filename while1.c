#include<stdio.h>
int n1;
int n2;
int i;
int suma;
int main()
{
	printf("Programa que suma numeros para realizar una multiplicacion\n");
	printf("ingresa el primer digito de la multiplicacion: ");
	scanf("%d",&n1);
	printf("ingresa el segundo digito de la multiplicacion: ");
	scanf("%d",&n2);
i=1;
suma=0;
while(i<=n1)
{
	printf(" %d\n",n2);	
	suma=suma+n2;
	i++;
}
printf("\nLa respuesta es: %d",suma);

}
