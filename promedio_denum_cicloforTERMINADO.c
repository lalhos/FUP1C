#include<stdio.h>

int numero;
int suma;
int i;
float promedio;


int main()
{
	printf("programa que nos de el promedio\n");
	suma = 0;
	for(i = 1; i <= 10; i++)
	{
		scanf("%d",&numero);
		suma= suma + numero;
		
	}
	promedio =(float) suma /10;
    printf("el resultado es %f\n",promedio);
    
    system("pause");
}
	
