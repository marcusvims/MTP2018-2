/* P6.c */
/* Marcus Vinícius Meireles Silva */
/* 11811EBI006 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto
{
	double y;
	double x;
};
struct ponto *fazer (int N)
{
	struct ponto *p = (struct ponto*) malloc(N*sizeof(struct ponto));
	int i;
	printf ("\nEsses sao os pontos gerados: \n");
	for (i=0; i<N; i++)
	{
		(*p).x = cos(i*2.0*M_PI/(N-1));
		(*p).y = sin(i*2.0*M_PI/(N-1));
		printf ("(%.3lf, %.3lf) \n", (*p).x, (*p).y);
	}
	return p;
}
int main ()
{
	struct ponto *p;
	int N;
	printf ("Digite a quantidade de pontos que deseja: ");
	scanf ("%d", &N);
	getchar();
	p = fazer(N);
	free(p);
	return 0;
}
