#include<stdio.h>

int digito;
int suma=0;
int contador=0;
int lugar=0;
int ayuda[10];
int numeros[10];
int conta2=0;
int nmayor=0;
int mayor=0;
int numero=0;



int main()
{
	printf("programa que nos muestre la moda de 10 num:\n");
	for(contador=0;contador<10;contador++)
     {
        printf("escribe los diez digitos:\n",contador+1);
	 	scanf("%d\n",&numeros[contador]);
	 }	
	for(contador=0; contador<10; contador++)
	 {
	 	printf("%d",numeros[contador]);
   	 	ayuda[contador]=0;
 	}
	 for(contador=0; contador<10; contador++)
	 {
         ayuda[contador]=0; 
	 
     }
     for(contador=0; contador<10; contador++)
     {
                     numero=numeros[contador];
                     lugar=contador;
      for(conta2=contador; conta2<10; conta2++)
      {
             if(numeros[conta2]==numero) ayuda[lugar]++;          
      }
      }                
     mayor=ayuda[0];
     nmayor=0;
     
     for(contador=0; contador<10; contador++)
     {
          if(ayuda[contador]>mayor)
           {
                    nmayor=contador;
                    mayor=ayuda[contador];              
      }
     }
          printf("La moda es:%d \n",numeros[nmayor]);

   system("pause");
}


