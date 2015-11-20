#include<stdio.h>
int x;
int y;
int resultado;


 
int main()
{
	printf("programa que nos de cuantos partidos en cada ronda");
	printf("dame num equipos\n");
	scanf("%d", &x);
    printf("resultado de la primera ronda es");
    resultado =x/2;
    printf("%d\n",resultado);
    printf("resultado de la segunda ronda es");
    resultado =x/4;
    printf("%d\n",resultado);
    printf("resultado de la tercera ronda es");
    resultado =x/8;
    printf("%d\n",resultado);
    
}
