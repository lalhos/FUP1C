#include<stdio.h>
 
int ropa;
int main()
{
       printf("lavanderia de ropa\n");
       printf("kilos de ropa");
       scanf("%d", &ropa);
       if(ropa >0 && ropa<=10)
       {
                printf("agua min");
       }
       if(ropa >=11 && ropa<=15)
       {
                printf("agua medio");
       }
       if(ropa >=16 && ropa<=20)
       {
                printf("agua maximo");
       }
       if(ropa > 20)
       {
                printf("no se lava");
       }
               
               system("pause");
}                                                    
