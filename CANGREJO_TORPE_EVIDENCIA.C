#include<stdio.h>
#include<stdlib.h>
int metros;
int sol,luna;
int salir;
int retrocede;
int avanza;
int dias;


int main()
{
	printf("programa que nos muestre el dia en que sale el cangrejo torpe\n");
	printf("ingrese num de metros del hoyo\n");
	scanf("%d",&metros);
	printf("dame num de metros de subida\n");
	scanf("%d",&sol);
	printf("dame num de metros de caida\n");
	scanf("%d",&luna);
	
	if(sol>luna)
	{
		retrocede=0;
	    dias=0;
	    avanza=0;
	while(metros>=avanza)
	{
		avanza=avanza+sol-luna;
		salir=salir+1;
		if(avanza>=metros)
		{
			salir=salir-1;
		}
		
		printf("el cangrejo torpe sale el dia:%d dias\n",salir);
		}

     if(luna>sol) 
     {
     	printf("EL CANGREJO TORPE NUNCA SALDRA #&%@!!");
     	
	 }
	 system("pause");
	}
	
}
	
	
		
	
	
	
	

