/*Programa que te dice el nombre del mes de acuerdo a su numero*/
#include<stdio.h>//Libreria de E/S
int mes;
int main()
{
	printf("Programa que te dice el nombre del mes de acuerdo a su numero\n");
	printf("Escribe el numero del Mes: ");
	scanf("%d",&mes);
	if(mes==0)
	{ printf("Error, no es un Mes");
	}
	else if(mes==1)
	{ printf("Enero");
	} 
	else if(mes==2)
	{ printf("Febrero");
	}
	else if(mes==3)
	{ printf("Marzo");
	}
	else if(mes==4)
	{ printf("Abril");
	}
	else if(mes==5)
	{ printf("Mayo");
	}
	else if(mes==6)
	{ printf("Junio");
	}
	else if(mes==7)
	{ printf("Julio");
	}
	else if(mes==8)
	{ printf("Agosto");
	}
	else if(mes==9)
	{ printf("Septiembre");
	}
	else if(mes==10)
	{ printf("Octubre");
	}
	else if(mes==11)
	{ printf("Noviembre");
	}
	else if(mes==12)
	{ printf("Diciembre");
	}
	else 
	{ printf("Error, no es un Mes");
	}
}
