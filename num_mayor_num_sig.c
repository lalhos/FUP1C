#include<stdio.h>


int numero[5];
int mayor;
int siguiente;
int i;



int main()
{
      printf("ingresa 5 numeros a valorar :\n");
	  scanf("%d\n",&numero[i]);
	  
	  for(i=0; i<5; i++)
	  {
	       scanf("%d\n",numero[5]);
	       
	  }
	  mayor =numero[0];
	  siguiente=mayor;
	  
	  for(i=1; i<5; i++)
	  {
	  	if(numero[i]>mayor)
	  	{
	  		mayor =numero[i];
		}
		  if(numero[i]<siguiente)
		  {
		  	siguiente=numero[i];
		  	
		  }
	  }
                printf("el numero mayor es: %d\n",mayor);
                printf("el numsiguiente es: %d\n",siguiente);
                
                system("pause");
                
}
