#include <stdio.h> 
int n1;
int n2;
int n3;
int main() 
{ 
	printf("Programa que ordena los numeros de mayor a menor\n");
	printf("Introduce el primer numero: "); 
    scanf("%d",&n1); 
    printf("Introduce el segundo numero: "); 
    scanf("%d",&n2); 
    printf("Introduce el tercer numero: "); 
    scanf("%d",&n3); 
     
    if(n1>=n2 && n1>=n3) 
    { 
    if(n2>=n3) 
    { 
    printf("Numero mayor: %d\n",n1); 
    printf("Numero intermedio: %d\n",n2); 
    printf("Numero menor: %d\n",n3); 
    } 
               
            else  if(n3>=n2) 
              { 
                       printf("Numero mayor: %d\n",n1); 
                       printf("Numero intermedio: %d\n",n3); 
                       printf("Numero menor: %d\n",n2); 
              } 
    } 
     
    if(n2>=n1 && n2>=n3) 
    { 
	if(n1>=n3) 
    { 
    printf("Numero mayor: %d\n",n2); 
    printf("Numero intermedio: %d\n",n1); 
	printf("Numero menor: %d\n",n3); 
    } 
               
            else if(n3>=n1) 
              { 
                       printf("Numero mayor: %d\n",n2); 
                       printf("Numero intermedio: %d\n",n3); 
                       printf("Numero menor: %d\n",n1); 
              } 
    } 
     
    if(n3>=n1 && n3>=n2) 
    { 
    if(n1>=n2) 
    { 
    printf("Numero mayor: %d\n",n3); 
    printf("Numero intermedio: %d\n",n1); 
    printf("Numero menor: %d\n",n2); 
    } 
               
            else if(n2>=n1) 
              { 
                       printf("Numero mayor: %d\n",n3); 
                       printf("Numero intermedio: %d\n",n2); 
                       printf("Numero menor: %d\n",n1); 
              } 
    } 
} 
