/*Ciclo: For-para, while-mientras, do while-hacer mientras*/
/*while*/
#include<stdio.h>

int final;
int i;
int main()
{
printf("Ingresa el numero final: ");
scanf("%d",&final);
i=1;
while(i<=final)
{
	printf("%d\n",i);
	i=i+1;
}
{
	printf("La suma es: %d",(final*(final+1)/2)); /*Use la formula n(n+1)/2 para la suma*/
 }
}
