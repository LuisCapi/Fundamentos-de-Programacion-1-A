/*Programa que suma, resta, multiplica y divide dos numeros */
#include<stdio.h>//Libreria de E/S
int suma;
int resta;
int multiplicacion;
float division;
float N1;
float N2;
int main ()
{
	printf("Este programa suma,resta,multiplica y divide dos numeros \n");
	printf("Dame un numero: ");
	scanf("%f",&N1);
	printf("Dame otro numero: ");
	scanf("%f",&N2);
	suma=N1+N2;
	printf("El resultado de la suma es: %d\n",suma);
	resta=N1-N2;
	printf("El resultado de la resta es: %d\n",resta);
	multiplicacion=N1*N2;
	printf("El resultado de la multiplicacion es: %d\n",multiplicacion);
	division=N1/N2;
	printf("El resultado de la division es: %f\n",division);
}
