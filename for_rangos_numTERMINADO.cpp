#include<stdio.h>

int a;
int b;
int contador;

int main()
{
	printf("programa que nos muestre un rango\n");
	printf("escribe un primer numero\n");
	scanf("%d",&a);
	printf("dame un segundo numero\n");
	scanf("%d",&b);
	if(a< b)
	{
	
	for(contador=a;contador<=b;contador++)
	{
		printf("%d\n",contador);
	
    }
    
	}
	else
	{
		
	for(contador=a;contador>=b;contador--)
	{
		printf("%d\n",contador);
		
	}	
	
	}
	
	system("pause");
		
		
	
}
