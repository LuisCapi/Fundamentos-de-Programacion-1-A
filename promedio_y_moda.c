#include<stdio.h>
int calificaciones[10],suma;
float promedio;
int i,moda[10],mayor,pos;
int main()
{

	printf("PROGRAMA QUE SACA EL PROMEDIO DE 10 CALIFICACIONES\n");
	printf("\n");
	printf("Ingresa las calificaciones:\n");
	for(i=0;i<10;i++)
	{
	scanf("%d",&calificaciones[i]);
	}
	suma=0;
	for(i=0;i<10;i++)
	{
	suma=suma+calificaciones[i];	
	}
	promedio=(float)suma/10;
	printf("EL promedio es:%f",promedio);

	for(i=0;i<10;i++)
	{
		moda[calificaciones[i]-1]++;
	}
mayor=moda[i];
pos=0;
for(i=0;i<10;i++)
{
    if (moda[i]> mayor){
    mayor=moda[i];
    pos=i+1;
    
    }
}
printf("\n");
printf("Moda:%d\n",pos);

}
