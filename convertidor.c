#include <stdio.h>
float MB;
float bits;
float bytes;
float kilobytes;
float gigabytes;
float terabytes;

int main()
{
	printf("programa que convierte MB en bits,bytes,kilobytes,gigabytes y terabytes\n");
    printf("Dame una cantidad en MB: ");
	scanf("%f",&MB);
	bits=MB*8388608;
	bytes=MB*1048576;
	kilobytes=MB*1024;
	gigabytes=MB*0.000976563;
	terabytes=MB*9.53674e-7;
	
	printf("Bits=  %f\n",bits);
	printf("Bytes=  %f\n",bytes);
	printf("Kilobytes=  %f\n",kilobytes);
	printf("Gigabytes=  %f\n",gigabytes);
	printf("Terabytes=  %f\n",terabytes);
}
	
