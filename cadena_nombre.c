/*El programa lo ejecute escribiendo mi nombre "Luis", si quisiera poner otro nombre con mayor numero de letras se tendria que aumentar el arreglo y el ciclo, 
lo hice de esta manera porque no recuerdo si lo pidio con nuestro nombre o que el usuario ingresara el nombre*/
#include<stdio.h> 
char nombre[5],letra,reemplazo;
int i;
main()
{
	printf("Nombre: ");
	scanf ("%s",nombre);
	printf("Cual letra quieres reemplazar? ");
	scanf ("%s",&letra);
	printf("por cual letra la quieres sustituir? ");
	scanf ("%s",&reemplazo);
	for(i=0;i<5;i++)
	{
		if(nombre[i]==letra)
		{
			nombre[i]=reemplazo; 
		}
	}
	printf("\nLa palabra que se formo es: %s",nombre);
}
