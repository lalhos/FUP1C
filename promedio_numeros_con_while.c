#include<stdio.h>

int valor;
int i = 1;
int suma;
float division;

int main()
{
	printf("programa que calcule el promedio de 10 numeros");
	suma = 0;
	while(i<=10)
	{
		printf("dame un numero");
		scanf("%d",&valor);
		suma = suma + valor;
		i= i+1;
	}
	division =(float) suma / 10;
	printf("el promedio de los 10 numeros es %f\n", division);
	
	system("pause");
}
