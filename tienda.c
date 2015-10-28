#include<stdio.h>
int a;
int eleccion;
int Papas;
int Refresco;
int Galletas;
int Paletas;
int Chocolate;
int total;
int main()
{

printf("selecciona 1 para la opcion vender\n");
printf("Selecciona 2 para la opcion Ver ganancias\n");
scanf("%d",&a);
switch(a)
{ case 1:{printf("Vender\n");
		printf("Elige un prodructo\n");
		printf("\n 1.-Papas=$10\n 2.-Refresco=$12\n 3.-Galletas=$11\n 4.-Paletas=$2\n 5.-Chocolate=$2\n");
		printf("Elige un producto\n");
		scanf("%d",&eleccion);
			switch(eleccion)
			{ case 1:{ printf("Cuantas papas quieres?\n");
						scanf("%d",&Papas); 
						total=Papas*10; 
						printf("Total de compra: %d",total); break;}
				case 2:{ printf("Cuantos refrescos quieres?\n");
						scanf("%d",&Refresco);
						total=Refresco*12; 
						printf("Total de compra: %d",total); break;}
						case 3:{ printf("Cuantas galletas quieres?\n");
								scanf("%d",&Galletas);
								total=Galletas*11; 
								printf("Total de compra: %d",total); break;}
							case 4:{ printf("Cuantas paletas quieres?\n");
								scanf("%d",&Paletas);
								total=Paletas*2; 
								printf("Total de compra: %d",total); break;}
								case 5:{ printf("Cuantos chocolates quieres?\n");
									scanf("%d",&Chocolate);
									total=Chocolate*2; 
									printf("Total de compra: %d",total); break;}
										default:{printf("No selecciono un campo valido"); break;}
			}

		break;}

	case 2:{printf("Ver ganancias\n");
			printf("Tiene $500");
		break;
	}
default:{printf("No selecciono un campo valido");
			break;
		}
}
}
