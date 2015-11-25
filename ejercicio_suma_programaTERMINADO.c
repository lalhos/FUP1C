#include<stdio.h>
int n1;
int n2;
int resultado;

int main()
{
	printf("programa que nos da la suma de dos numeros\n");
	printf("da un primer numero\n");
	scanf("%d", &n1);
	printf("da un segundo numero\n");
	scanf("%d", &n2);
	resultado = n1+n2;
	printf("%d", resultado);
	
	system("pause");
}
