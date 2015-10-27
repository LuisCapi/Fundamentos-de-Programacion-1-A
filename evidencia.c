#include<stdio.h>
int n1;
int n2;
int n3;
int n4;
int n5;
int n6;
int n7;
int n8;
int n9;
int n10;
int main()
{
	printf("Programa que manda a pantalla el numero mayor y numero menor de 10 numeros diferentes\n");
	printf("Introduce el primer numero: ");
	scanf("%d",&n1);
	printf("Introduce el segundo numero: ");
	scanf("%d",&n2);
	printf("Introduce el tercer numero: ");
	scanf("%d",&n3);
	printf("Introduce el cuarto numero: ");
	scanf("%d",&n4);
	printf("Introduce el quinto numero: ");
	scanf("%d",&n5);
	printf("Introduce el sexto numero: ");
	scanf("%d",&n6);
	printf("Introduce el septimo numero: ");
	scanf("%d",&n7);
	printf("Introduce el octavo numero: ");
	scanf("%d",&n8);
	printf("Introduce el noveno numero: ");
	scanf("%d",&n9);
	printf("Introduce el decimo numero: ");
	scanf("%d",&n10);
	printf(" \n");
	printf("Los resultados son:\n");
	{
	
	if (n1>=n2&&n1>=n3&&n1>=n4&&n1>=n5&&n1>=n6&&n1>=n7&&n1>=n8&&n1>=n9&&n1>=n10)
	{printf("Numero Mayor: %d\n",n1);
	}
		else if (n2>=n1&&n2>=n3&&n2>=n4&&n2>=n5&&n2>=n6&&n2>=n7&&n2>=n8&&n2>=n9&&n2>=n10)
		{printf("Numero Mayor: %d\n",n2);
		}
			else if (n3>=n1&&n3>=n2&&n3>=n4&&n3>=n5&&n3>=n6&&n3>=n7&&n3>=n8&&n3>=n9&&n3>=n10)
			{printf("Numero Mayor: %d\n",n3);
			}
				else if (n4>=n1&&n4>=n2&&n4>=n3&&n4>=n5&&n4>=n6&&n4>=n7&&n4>=n8&&n4>=n9&&n4>=n10)
				{printf("Numero Mayor: %d\n",n4);
				}
					else if (n5>=n1&&n5>=n2&&n5>=n3&&n5>=n4&&n5>=n6&&n5>=n7&&n5>=n8&&n5>=n9&&n5>=n10)
					{printf("Numero Mayor: %d\n",n5);
					}
						else if (n6>=n1&&n6>=n2&&n6>=n3&&n6>=n4&&n6>=n5&&n6>=n7&&n6>=n8&&n6>=n9&&n6>=n10)
						{printf("Numero Mayor: %d\n",n6);
						}
							else if (n7>=n1&&n7>=n2&&n7>=n3&&n7>=n4&&n7>=n5&&n7>=n6&&n7>=n8&&n7>=n9&&n7>=n10)
							{printf("Numero Mayor: %d\n",n7);
							}
								else if (n8>=n1&&n8>=n2&&n8>=n3&&n8>=n4&&n8>=n5&&n8>=n6&&n8>=n7&&n8>=n9&&n8>=n10)
								{printf("Numero Mayor: %d\n",n8);
								}
									else if (n9>=n1&&n9>=n2&&n9>=n3&&n9>=n4&&n9>=n5&&n9>=n6&&n9>=n7&&n9>=n8&&n9>=n10)
									{printf("Numero Mayor: %d\n",n9);
									}
										else if (n10>=n1&&n10>=n2&&n10>=n3&&n10>=n4&&n10>=n5&&n10>=n6&&n10>=n7&&n10>=n8&&n10>=n9)
										{printf("Numero Mayor: %d\n",n10);
										}
	}
	{
	if(n1<=n2&&n1<=n3&&n1<=n4&&n1<=n5&&n1<=n6&&n1<=n7&&n1<=n8&&n1<=n9&&n1<=n10)
	{printf("Numero Menor: %d",n1);
	}
		else if(n2<=n1&&n2<=n3&&n2<=n4&&n2<=n5&&n2<=n6&&n2<=n7&&n2<=n8&&n2<=n9&&n2<=n10)
		{printf("Numero Menor: %d",n2);
		}
			else if (n3<=n1&&n3<=n2&&n3<=n4&&n3<=n5&&n3<=n6&&n3<=n7&&n3<=n8&&n3<=n9&&n3<=n10)
			{printf("Numero Menor: %d",n3);
			}
				else if (n4<=n1&&n4<=n2&&n4<=n3&&n4<=n5&&n4<=n6&&n4<=n7&&n4<=n8&&n4<=n9&&n4<=n10)
				{printf("Numero Menor: %d",n4);
				}
					else if (n5<=n1&&n5<=n2&&n5<=n3&&n5<=n4&&n5<=n6&&n5<=n7&&n5<=n8&&n5<=n9&&n5<=n10)
					{printf("Numero Menor: %d",n5);
					}
						else if (n6<=n1&&n6<=n2&&n6<=n3&&n6<=n4&&n6<=n5&&n6<=n7&&n6<=n8&&n6<=n9&&n6<=n10)
						{printf("Numero Menor: %d",n6);
						}
							else if (n7<=n1&&n7<=n2&&n7<=n3&&n7<=n4&&n7<=n5&&n7<=n6&&n7<=n8&&n7<=n9&&n7<=n10)
							{printf("Numero Menor: %d",n7);
							}
								else if (n8<=n1&&n8<=n2&&n8<=n3&&n8<=n4&&n8<=n5&&n8<=n6&&n8<=n7&&n8<=n9&&n8<=n10)
								{printf("Numero Menor: %d",n8);
								}
									else if (n9<=n1&&n9<=n2&&n9<=n3&&n9<=n4&&n9<=n5&&n9<=n6&&n9<=n7&&n9<=n8&&n9<=n10)
									{printf("Numero Menor: %d",n9);
									}
										else if (n10<=n1&&n10<=n2&&n10<=n3&&n10<=n4&&n10<=n5&&n10<=n6&&n10<=n7&&n10<=n8&&n10<=n9)
										{printf("Numero Menor: %d",n10);
										}
	}	
}

