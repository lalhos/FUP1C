#include<stdio.h> //edad de madurez
#include<stdlib.h>
int edad;

int main()
{
    printf("programa que mide la edad\n");
    printf("dame tu edad");
    scanf("%d",& edad);
    if(edad >0 && edad<=2)
    {
       printf("bebe aun");
    }
    if(edad >=3 && edad<=12)
    {
        printf("niño aun");
    }
    if(edad >=13 && edad<=18)
	{	
		printf("adolecente aun");
	   }   
	   if(edad >=19 && edad<=29)
	   {
	   	printf("joven aun");
		  } 
		  if(edad >=30 && edad<=59)
		  {
		  	printf("adulto aun");
			}  
			if(edad > 60)
			{
				printf("adulto mayor aun");
		    }
			system("pause");  
}
