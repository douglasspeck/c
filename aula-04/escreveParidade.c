/*

Programa que determina e imprime a paridade de um número dado

Atividade da Aula 04 do Curso de C da 3E
Data: 2023-06-02

*/

#include <stdio.h>

// Função que determina e imprime a paridade de um inteiro n
void escreveParidade(int n) {
	
	if (n % 2) {
		printf("O numero %d e impar!\n", n);
	} else {
		printf("O numero %d e par!\n", n);
	}

}

int main() {

    // Recebe um número via input padrão
	int numero = 0;
	printf("Insira um numero: ");
	scanf("%d", &numero);

    // Aplica a função ao número selecionado
	escreveParidade(numero);
	
	return 0;

}