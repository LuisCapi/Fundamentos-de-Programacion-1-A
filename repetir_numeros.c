#include<stdio.h>
int fin;
int comienzo;
int i;
int main()
{
	printf("Ingresa un numero:");
	scanf("%d",&fin);
	comienzo=1;
	if(fin>0){
		  while(comienzo<=fin)
		{
			if(comienzo%2==0)
		{
			 while(i<=comienzo)
		 	{
				printf("%d",comienzo);
				i=i+1;
		 	}
		}
			else
			printf("\n%d\n",comienzo);
		comienzo=comienzo+1;
		i=1;
		}
		}
		else
		printf("No se pueden imprimir numeros con ese valor");
		
}
