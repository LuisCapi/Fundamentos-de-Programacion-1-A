#include<stdio.h>
int n1;
int n2;
int main()
{
	printf("Programa que manda a pantalla el rango entre dos numeros\n");
	printf("Ingresa el primer numero: ");
	scanf("%d",&n1);
	printf("Ingresa el segundo numero: ");
	scanf("%d",&n2);


	if(n1<=n2)
	{
	while(n1<=n2)
	{
	printf("%d\n",n1);

	n1=n1+1;
	}
	}
	else if(n2<=n1)
	{
		while(n2<=n1)
		{
		printf("%d\n",n1);
		n1=n1-1;
		}
	}
	
}

