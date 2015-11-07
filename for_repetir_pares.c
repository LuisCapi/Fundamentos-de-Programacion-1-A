#include<stdio.h>
int fin;
int i;
int j;
int main()
{
	printf("Ingresa un numero:");
	scanf("%d",&fin);
	for(i=1;i<=fin;i++)
	{
		if(i%2==0)
		{
			for(j=2;j<=i;j++)
			{printf("%d",i);
			}
		}
	printf("%d\n",i);
	}
}
