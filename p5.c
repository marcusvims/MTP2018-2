/* P5.c */
/* Marcus Vinícius Meireles Silva */
/* 11811EBI006 */

#include <stdio.h>

typedef
	unsigned long long int
		Bytes8;
typedef
	struct LCG { Bytes8 a, c, m, rand_max, atual; }
		LCG;
		
void semente(LCG * r, Bytes8 seed) {
// constantes do POSIX [de]rand48, glibc [de]rand48[_r]
// ULL transforma a constante ’int’ em ’unsigned long long int’
	r->a = 0x5DEECE66DULL;
	r->c = 11ULL;
	r->m = (1ULL << 48);
	r->rand_max = r->m - 1;
	r->atual = seed;
}

Bytes8 lcg_rand(LCG * r) {
	r->atual = (r->a * r->atual + r->c) % r->m;
	return r->atual;
}

double lcg_rand_01(LCG * r) {
	return ((double) lcg_rand(r))/(r->rand_max);
}

void gera_numeros(float * vetor, int tam, float min, float max, LCG * r) {
int i;
for(i = 0; i < tam; i++)
	vetor[i] = (max-min)*lcg_rand_01(r) + min;
}
float produto(float *inicio_vetor, float *fim_vetor)
{
	if (inicio_vetor != fim_vetor + 1) 
		return (*inicio_vetor * produto(inicio_vetor + 1, fim_vetor));
	return 1;
}
float soma(float *inicio_vetor, float *fim_vetor){
	if(inicio_vetor != fim_vetor + 1)
		return(*inicio_vetor + soma(inicio_vetor+1, fim_vetor));
}

int main(){
	LCG random; 
	semente(&random,123456);
	int numero;
	float vetor[50];
	gera_numeros(vetor, 50, 0.5, 1.5, &random);
	printf("Escolha uma das opcoes a partir dos números aleatório gerados:\n1-Somatorio \n2-Produtorio\n");
	scanf("%i", &numero);
	getchar();
	if(numero == 1)
		printf("\nsoma: %f", soma(&vetor[0], &vetor[50]));
	else if(numero == 2)
		printf ("\nproduto: %f \n\n", produto (&vetor[0], &vetor[49]));
	return 0;
}
