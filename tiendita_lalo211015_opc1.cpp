#include<stdio.h>
#include<stdlib.h>

int numero;
int menu;
int ganancias;
int main()
{
    printf("bienvenido a la tienda de lalo\n");
    printf("selecciona opc 1 para la venta\n");
    printf("selecciona opc 2 para las ganancias\n");
    scanf("%d", &numero);
    ganancias = 500;
    switch (numero)
{

    case 1:
    {
    printf("menu: \n");
    printf("1.-cigarros\n");
    printf("2.-cerveza\n");
    printf("3.-papas\n");
    printf("4.-cacahuates\n");
    scanf("%d", &menu);
    switch(menu)
    {
    case 1:
    {
    printf("compraste unos cigarros\n");
    printf("costo es de $49");
    printf("cuantos quieres\n");
    }break;
    case 2:
    {
    printf("compraste una cerveza\n");
    printf("costo es de $29");
    }break;
    case 3:
    {
    printf("compraste unas papas\n");
    printf("costo es de $10");
    }break;
    case 4:
    {
    printf("compraste unos cacahuates\n");
    printf("costo es de $15");
    }break;
                     
                     }
                     }
case 2:{
ganancias = 500;
printf("tus ganancias son %d",ganancias);

}break;
}

system("pause");
}





                                                          
                                       
                     
