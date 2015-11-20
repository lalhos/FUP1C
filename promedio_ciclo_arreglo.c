#include<stdio.h>

int suma;
int numero;
int i;
int arreglo[10];

float prome;

int main()
{
	
	system("color 0e");
	arreglo[i]=1;
	
    arreglo[0];
	arreglo[1];
	arreglo[2];
	arreglo[3];
	arreglo[4];
	arreglo[5];
	arreglo[6];
	arreglo[7];
	arreglo[8];
	arreglo[9];
	

	printf("programa que nos de el promedio de 10 calificaciones :\n");
	printf("\n");
	printf("digita las 10 calificaciones:\n");
	suma = 0;

	for(i = 1; i <= 10; i++)
	{
			arreglo[i]=1;
	
	}
	for(i = 1; i <= 10; i++)
	{
		scanf("%d",&numero);
		suma= suma + numero;
	    arreglo[i]=1;
	}
	
	prome =(float) suma /10;
    printf("el promedio final es: >>>>>>>%f\n",prome);
    printf("\n");
    printf("ERES UN CHAMPIONS :)\n");


    system("pause");
	
}


