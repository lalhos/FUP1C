#include<stdio.h>


char letras[30];
char nuevocar;
char carorigen;
int i;

int main()
{
	
	printf("programa que que hace cambio de letras:\n");
	printf("introduce la palabra\n");
	scanf("%s",letras);
	
	printf("escribe la letra que desea modificar: ");
	scanf(" %c",&carorigen);
	
	printf("ingresa la nueva letra a leer: ");
	scanf(" %c",&nuevocar);
	for(i=0; i<30; i++)
	{
	
		if(letras[i]== carorigen)
		{
			letras[i]=nuevocar;
		}
	}
    
	printf("el nuevo nombre es: %s\n",letras);
	system("pause");
	return 0;
}
