/*

Programa que recebe um número, arredonda e calcula o fatorial do número arredondado

Atividade da Aula 04 do Curso de C da 3E
Data: 2023-06-02

*/

#include <stdio.h>


// Função que recebe um inteiro e calcula seu fatorial
double calculaFatorial(int n) {
	
	double fatorial = 1.0;

    // Itera o inteiro, multiplicando os valores obtidos
	while (n > 1) {
		fatorial *= n--;
	}

    // Retorna o produto das iterações
	return fatorial;

}

// Função que recebe um inteiro e calcula seu fatorial, porém de maneira recursiva
double calculaFatorialRecursiva(int n) {

	if (n <= 1) {
        return 1;
    } else {
        // Multiplica o valor atual pela função aplicada ao valor imediatamente anterior
        return n * calculaFatorialRecursiva(n - 1);
    }

}

// Função que arredonda um float, retornando sua parte inteira
// ou sua parte inteira mais um, de acordo com sua parte decimal
int arredondar(float n) {

    // Por padrão, o compilador sempre arredonda o float para baixo (função piso)
    int n_inteiro = n;

    if (n - n_inteiro < 0.5) {
        return n_inteiro;
    } else {
        return ++n_inteiro;
    }

}

int main() {

    // Recebe um valor float
	float x_decimal = 0;
	printf("Insira o valor de x: ");
	scanf("%f", &x_decimal);

    // Arredonda o valor recebido
    int x = arredondar(x_decimal);

    // Calcula o fatorial da parte inteira
	double fatorial = calculaFatorial(x);

    // Imprime o valor no terminal
	printf("x! = %.0f", fatorial);
	
	return 0;

}