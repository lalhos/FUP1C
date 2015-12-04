#include<stdio.h>

char nombre[50];

char nombre[] = "jose eduardo sanchez moreno";
int main()
{
    printf("introduce tu nombre completo:\n");
    printf("\n\n");
		
	
    /*scanf("%s",nombre);*/
	gets (nombre);
	printf("\n\n %s",nombre);
	printf("\n");
      system("pause");	
}
