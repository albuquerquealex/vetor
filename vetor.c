#include <stdio.h>

int main() {
	int vetor[10];
	int i;

	for (i = 0; i < 10; i++) {
		printf("Digite um número: ");
		scanf("%d", &vetor[i]);
		vetor[i] *= 2; 
	}

	printf("Resultados:\n");
	for (i = 0; i < 10; i++) {
		printf("Posição %d: %d\n", i, vetor[i]);
	}

	return 0;
}

