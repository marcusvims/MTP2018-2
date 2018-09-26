/* P2.c */
/* Marcus Vinícius Meireles Silva*/
/* 11811EBI006*/
#include<stdio.h>
void trocar (char vet[])
{
	int i, h=0, n= 0, t= 0;
	for (i=0;vet[i]!='\0';i++)
		n=n+1;
	t=n;
	n=n-1;
	for (i=0;i<n; i++)
	{
		h= vet[i];
		vet[i] = vet[n];
		vet[n] = h;
		n=n-1;
	}
	vet[t]='\0';
}
void binario(int vet)
{
	int i,z,numero[256],n=0,r;
	r=vet;
	for(i=0;n<1;i++)
	{
		numero[i] = r%2;
		r=r/2;
		if(r==1 || r==0)
		{
			numero[i+1]=r;
			z=i+1;
			n++;
		}
	}
	printf("O numero na base binaria vale: ");
	for(i=z;i>=0;i--)
	{
		printf(" %i", numero[i]);
	}
}
int potencia (int resul1, int resul2)
{
	int i, r=1;
	for (i=0; i<resul2; i++)
		r=r*resul1;
	return r;
}
int decimal (char vet[])
{
	trocar(vet);
	int somatorio=0, i;
	for (i=0;vet[i]!='\0';i++)
		if (vet[i]=='1')
			somatorio= somatorio + vet[i]*potencia(2, i);
	return somatorio/49;
}
int main()
{
	char vet[256];
	int x;
	printf("\nEscolha a conversao que deseja fazer:\n1. binario para decimal\n2. binario para hexadecimal \n3. hexadecimal para decimal \n4. hexadecimal para binario\n5.decimal para binario\n6. decimal para hexadecimal\n7. octal para decimal\n8. decimal para octal");
			if(x==1)
			{
				pritnf("\nDigite um numero binario para convertar em decimal: ");
				scanf("%s", &vet);
				printf("\nO valor desse numero na base decimal vale: %i",decimal(vet));
			}
			if(x==2)
			{
				print("\nDigite um numero binario para hexadecimal: ");
				scanf("%s", &vet);
				printf("\nO valor desse numero na base hexadecimal vale: %x",decimal(vet));
			}
			if(x==3)
			{
				int (vet);
				printf("\nDigite um numero hexadecimal para decimal: ");
				scanf("%d", &vet);
				printf("\nO valor desse numero na base decimal vale: %d", vet);
			}
			if(x==4)
			{
				int (vet);
				printf("\nDigite um numerohexadecimal para binario: ");
				scanf("%d", &vet);
				binario(x);
			}
			if(x==5)
			{
				int (vet);
				printf("\nDigite um decimal para binario: ");
				scanf("%d", &vet);
				binario(x);
			}
			if(x==6)
			{
				int (vet);
				printf("\nDigite um decimal para hexadecimal: ");
				scanf("%d", &vet);
				printf("\nO valor desse numero na base hexadecimal vale: %x", vet);
			}
			if(x==7)
			{
				int (vet);
				printf("Digite um octal para decimal: ");
				scanf("%d", &vet);
				printf("\nO valor desse numero na base decimal vale: %d", vet);
			}
			if(x==8)
			{
				int (vet);
				printf("Digite um decimal para octal: ");
				scanf("%d", &vet);
				printf("\nO valor desse numero na base octal vale: %o", vet);
			}
	return 0;
}
