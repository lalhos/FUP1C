#include<stdio.h>

int multi1[10];
int multi2[10];
int res1[10];
int a;
int b;

int main()
{
	printf("PROGRAMA QUE NOS MUESTRE LA MULTIPLICACION DE 10 ELEMENTOS POR 10 ELEMENTOS:\n");
	for(a=0; a<10; a++)
	{
		printf("DIGITA LOS NUMEROS A MOSTRAR, SOLO 10: %d",a);
		scanf("%d",&multi1[a]);
		
	}
	for(b=0; b<10; b++)
	{
		printf("INGRESA AHORA LOS SIQUIENTES NUMEROS, SOLO 10:\n");
		scanf("%d",&multi2[b]);
		
	}
	printf("EL RESULTADO DE LAS OPERACIONES ES:\n\n");
	for(a=0; a<10; a++)
	{
		for(b=0; b<10; b++)
		{
			res1[b]=multi1[a]*multi2[b];
			printf("%d\n",res1[b]);
			
		}
	}

	printf("\n\n");
	printf("EL PROGRAMA NOS MUESTRA 100 RESULTADOS");
	system("pause");
}
