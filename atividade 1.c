#include <stdio.h>
#include <stdlib.h>
main() {
	int n, i, valor, par=0, impar=0;
	printf("Informe o tamanho do vetor: ");
	scanf("%d",&n);
	int *vetor = (int *) malloc(n*sizeof(int));
	if (vetor == NULL) {
		printf("Memoria Indisponivel\n\n");
		exit(0);
	}
	printf("Informe os valores do vetor\n");
	for(i=0; i<n; i++) {
		printf("Posicao do vetor[%d]: ",i);
		scanf("%d",&vetor[i]);
	}
	printf("Conteudo do vetor:\n");
	for(i=0; i<n; i++) {
		printf("%d  ",vetor[i]);
		if (vetor[i] !=0 ) {
			if (vetor[i]%2 == 0) par++;
			else impar++;
		}
	}
	printf("\nQuantidade de pares = %d",par);
	printf("\nQuantidade de impares = %d\n\n",impar);
	free(vetor);
	system("pause");
}
