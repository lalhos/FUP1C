#include<stdio.h>
int n1;
int n2;
int resultado;
float division;

int main()
{
	printf("programa que nos de suma y division de dos numeros\n");
	printf("da un primer numero\n");
	scanf("%d", &n1);
	printf("da un segundo numero\n");
	scanf("%d", &n2);
	resultado = n1+n2;
	printf("%d", resultado);
	division =(float)n1/n2;
	printf("el resultado de la division es: %f", division);
	
	
	system("pause");
}
