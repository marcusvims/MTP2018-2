/* P3.c */
/* Marcus Vin�cius Meireles Silva*/
/* 11811EBI006*/
#include<stdio.h>
 
 int main ()
 {
 	char vet [256];
 	int numero[200],i,v=0,x,final;
 	printf("DIgite alguns caracteres e numero: ");
 	scanf("%s", vet);
 	for(i=0;vet[i]!='\0';i++)
 	{
 		if (vet[i]>='0' && vet[i]<='9')
 		{
 			x= vet[i]-48;
			final = x + v; 
			v = final*10;
		}
	}
	printf("O numero mostrado e: %d", final);
getch ();
return 0;
}
