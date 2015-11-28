#include<stdio.h>

int calificacion;

int main()
{
    printf("programa que dice si aprobo o no\n");
    printf("introduce tu calificacion ");
    scanf("%d", &calificacion);
    printf("tu calificacion es: %d\n", calificacion);
    if(calificacion >= 7)
    {  
         printf("aprobacion\n");           
    }    
    else
	{ 
         printf("reprobado\n");
	}	
   
   
   system("pause");	
	
}
