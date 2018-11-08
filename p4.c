/*P4.c*/
/*Marcus Vinícius Meireles Silva*/
/*11811EBI006*/

#include<stdio.h>

double f(float m, float n)
{
	if(m==0)
		return n+1;
	else if(m>0 && n==0)
		f(m-1,1);
	else if (m>0 && n>0)
		f(m-1,f(m, n-1));			
}

int main()
{
float m, n;
scanf ("%f + %f", &m,&n);
printf("%.2lf + %.2lf = %.2lf", m,n , f(m,n));
return 0;
}
