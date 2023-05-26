/*

Programa que mostra a sequência formada pela Conjectura de Collatz a partir de um número dado

Tarefa 03 do Curso de C da 3E
Data: 2023-05-25

*/

#include <stdio.h>

int main() {

    // Declara a variável "input"
	unsigned int input = 1;

    printf("╔═══════════════════════════════════════════════════╗\n");
    printf("║   _____                                _          ║\n");
    printf("║  |  ___|  _____   _      _       __ _ | |_  ____  ║\n");
    printf("║  | |     |  _  | | |    | |     / _` || __||_  /  ║\n");
    printf("║  | |___  | |_| | | |___ | |___ | (_| || |_  / /   ║\n");
    printf("║  |_____| |_____| |_____||_____| \\__,_| \\__//___|  ║\n"); // Essa linha ficou muito amaldiçoada
    printf("║                                                   ║\n");
    printf("║       Gerador de Sequências de Collatz em C       ║\n");
    printf("║                                                   ║\n");
    printf("╠═══════════════════════════════════════════════════╣\n");
    printf("║                                                   ║\n");
    printf("║ Voce conhece a Conjectura de Collatz?             ║\n");
    printf("║                                                   ║\n");
    printf("║    [Nao] -> Digite 0                              ║\n");
    printf("║    [Sim] -> Digite o numero inicial               ║\n");
    printf("║                                                   ║\n");
    printf("╚═══════════════════════════════════════════════════╝\n");

    printf("\nInput: ");

    // Solicita ao usuário um valor para a variável "input"
	scanf("%d", &input);

    // Executa o bloco se e o input é igual a zero
    if (input == 0) {

        printf("\n\"A conjectura de Collatz e' uma conjectura matematica \nque recebeu este nome em referencia ao matematico alemao \nLothar Collatz, que foi o primeiro a propo-la, em 1937.\n\n");

        printf("Esta conjectura aplica-se a qualquer numero natural inteiro \ne diz-nos para, se este numero for par, o dividir por 2, \ne se for impar, para multiplicar por 3 e adicionar 1.\n\n");

        printf("A conjectura apresenta uma regra dizendo que, \nqualquer número natural inteiro, quando aplicado a esta regra, \neventualmente sempre chegara a 4, que se converte em 2 \ne termina em 1.\"\n\n(Wikipedia)\n\n");

        printf("Vamos testar! Escolha um número: ");

        // Solicita ao usuário um valor para a variável "input"
	    scanf("%d", &input);

    }

    printf("\nA Sequencia de Collatz para o número %d é:\n%d", input, input);

    // Itera o bloco abaixo até que o valor da variável seja 1, finalizando a sequência
    while (input > 1) {

        // Se o valor da variável é ímpar, executa o bloco abaixo
        if (input % 2) {

            // Multiplica o valor da variável por 3 e soma 1
            input = input * 3 + 1;

        }

        // Do contrário, executa o bloco abaixo
        else {

            // Divide o valor da variável por 2
            input /= 2;
                
        }

        // Imprime o novo valor na lista do terminal
        printf(", %d", input);

    }

    // Imprime um ponto final
    printf(".\n\n");

}