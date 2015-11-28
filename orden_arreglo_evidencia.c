#include<stdio.h>

int orden[20];
int mayor;
int menor; 
int numeros;

int main()
{
      system("color 0e");
	  printf("programa que nos muestre le orden de un arreglo de mayor a menor :\n");


      for(mayor=0; mayor<20; mayor++)
	 {
	 	printf("escribe los digitos a valorar:");
	 	scanf("%d\n",&orden[mayor]);
			  }
			  for(mayor=0; mayor<20; mayor++)
			  for(menor=mayor+1; menor<20; menor++)
			 
			 if(orden[mayor]<orden[menor])
			 {
			 
			 numeros=orden[mayor];
			 orden[mayor]=orden[menor];
			 orden[menor]=numeros;
			 }
			 
			 printf("el orden de los numeros de mayor a menor es:\n");
			 for(mayor=0; mayor<20; mayor++)
			 {
			 
			 printf("%d\n",orden[mayor]);
             }     			 
                       
                      system("pause");
}

