#include<stdio.h>
int i, n1, n2, n3, dia;
int main()
{
	printf("Programa que te dice cuantos dias tarda en subir un caracol\n");
	printf("Ingresa la cantidad en metros que cayo: ");
	scanf("%d",&n1);
	printf("Ingresa los metros que avanza al subir al dia : ");
	scanf("%d",&n2);
	printf("Ingresa los metros que retrocede mientras descansa: ");
	scanf("%d",&n3);
	dia=1;
	i=0;
	while(i<=n1)
	{
		i=i+n2;
		if(i>=n1)
		{
			printf("\n");
			printf("\nEl caracol salio en el dia: %d",dia);
			return 0;	
		}
		if(n3>=n2)
		{
			printf("\n");
			printf("EL caracol nunca saldra\n");
			return 0;
		}
		i=i-n3;
		dia=dia+1;

	}
}
