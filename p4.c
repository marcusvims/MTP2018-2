/*P4.c*/
/*Marcus Vinícius Meireles Silva*/
/*11811EBI006*/

#include<stdio.h>

int  f(int m, int n)
{
	if(m==0)
 return n=n+1;
	else if(m>0 && n==0)
	return	f(m-1,1);
	else if (m>0 && n>0)
return f(m-1,f(m, n-1));			
}

int main()
{
	int m, n;
	printf("Digite m: ");
	scanf("%i", &m);
	printf("\nDigite n: ");
	scanf("%i", &n);
	printf("%i", f(m, n));
	return 0;
}
