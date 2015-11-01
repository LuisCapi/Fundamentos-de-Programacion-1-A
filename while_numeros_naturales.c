/*Ciclo: For-para, while-mientras, do while-hacer mientras*/
/*while*/
#include<stdio.h>

int final;
int i;
int suma;
int main()
{
printf("Ingresa el numero final: ");
scanf("%d",&final);
i=1;
suma=0;
while(i<=final)
{
	printf("%d\n",i);
	suma=suma+i;
	i=i+1;
}
	printf("Suma= %d\n",suma);
	
	printf("La suma es: %d",(final*(final+1)/2)); /*Use la formula n(n+1)/2 para la suma*/
}
