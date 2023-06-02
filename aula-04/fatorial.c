/*

Programa que recebe um número, arredonda e calcula o fatorial do número arredondado

Atividade da Aula 04 do Curso de C da 3E
Data: 2023-06-02

*/

#include <stdio.h>

double calculaFatorial(int n) {
	
	double fatorial = 1.0;

	while (n > 1) {
		fatorial *= n--;
	}

	return fatorial;

}

double calculaFatorialRecursiva(int n) {

	if (n <= 1) {
        return 1;
    } else {
        return n * calculaFatorialRecursiva(n - 1);
    }

}

int arredondar(float n) {

    int n_inteiro = n;

    if (n - n_inteiro < 0.5) {
        return n_inteiro;
    } else {
        return ++n_inteiro;
    }

}

int main() {

	float x_decimal = 0;
	printf("Insira o valor de x: ");
	scanf("%f", &x_decimal);

    int x = arredondar(x_decimal);

	double fatorial = calculaFatorial(x);

	printf("x! = %.0f", fatorial);
	
	return 0;

}