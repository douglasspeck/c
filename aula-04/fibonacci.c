/*

Programa que calcula o n-ésimo termo da sequência de Fibonacci para n dado

Tarefa 04 do Curso de C da 3E
Data: 2023-06-03

*/

#include <stdio.h>

// Função que calcula o número de casas decimais de um número natural
unsigned int casasDecimais(unsigned long n) {

    // Inicialmente, não há casas decimais contadas
    unsigned int casas_decimais = 0;
    unsigned long potencia = 1;

    // Vamos testar para cada potência de 10 se o número é maior
    while (n >= potencia) {

        // Se for maior, o bloco é executado e o número de casas decimais aumenta
        casas_decimais++;
        potencia *= 10;

    }

    // Fallback para o zero. Esse cara é foda.
    if (casas_decimais == 0) {casas_decimais = 1;}

    return casas_decimais;

}

// Função que itera n espaços no terminal
void espaco(unsigned int n) {

    for (unsigned int i = 0; i < n; i++) {

        printf(" ");

    }

}

// Função que itera n linhas (ASCII box-drawing) no terminal
void linha(unsigned int n) {

    for (unsigned int i = 0; i < n; i++) {

        printf("═");

    }

}

// Função que calcula o enesimo termo da Sequência de Fibonacci
// Se o segundo parâmetro for verdadeiro, imprime a sequência até o termo
// Se o segundo parâmetro for falso, imprime apenas o termo
void fibonacci(unsigned int n, unsigned short sequencia) {

    // Aloca memória para os termos anteriores, que serão iterados
    unsigned long n_termo = 1;
    unsigned int ultimo_termo = 0;
    unsigned int penultimo_termo = 1;

    // Determina quantos caracteres de largura a coluna da esquerda terá,
    // baseado na maior célula, que contém n
    unsigned int largura_esq = casasDecimais(n);

    // Algoritmo de Fibonacci para calcular o enésimo termo
    for (unsigned int i = 1; i <= n; i++) {

        if (i == 1) {
            n_termo = 0;
        } else {
            n_termo = ultimo_termo + penultimo_termo;
            penultimo_termo = ultimo_termo;
            ultimo_termo = n_termo;
        }

    }
    
    // Determina quantos caracteres de largura a coluna da direita terá,
    // baseado na maior célula, que contém o enésimo termo
    unsigned int largura_dir = casasDecimais(n_termo);

    // Define a largura mínima da coluna da direita (7),
    // para conter o texto do cabeçalho
    if (largura_dir < 7) {largura_dir = 7;}

    // Essa monstruosidade abaixo imprime uma ASCII Box que se expande de acordo com os dados

    // Linha acima do cabeçalho
    printf("\n╔═");
    linha(largura_esq);
    printf("═╦═");
    linha(largura_dir);
    printf("═╗");

    // Cabeçalho
    printf("\n║ n");
    espaco(largura_esq - 1);
    printf(" ║ n-termo");
    espaco(largura_dir - 7);
    printf(" ║");

    // Linha abaixo do cabeçalho
    printf("\n╠═");
    linha(largura_esq);
    printf("═╬═");
    linha(largura_dir);
    printf("═╣");
    
    // Reseta os valores para reiterar a sequência
    ultimo_termo = 0;
    penultimo_termo = 1;

    // Aplica o algoritmo de Fibonacci novamente
    for (unsigned int i = 1; i <= n; i++) {

        if (i == 1) {
            n_termo = 0;
        } else {
            n_termo = ultimo_termo + penultimo_termo;
            penultimo_termo = ultimo_termo;
            ultimo_termo = n_termo;
        }

        // Dessa vez, no entanto, imprime os valores em linhas que se expandem conforme a necessidade
        // Os valores somente são impressos se o segundo parâmetro da função for verdadeiro OU
        // se for o enésimo termo
        if (sequencia > 0 || i == n) {
            printf("\n║ %u", i);
            espaco(largura_esq - casasDecimais(i));
            printf(" ║ %lu", n_termo);
            espaco(largura_dir - casasDecimais(n_termo));
            printf(" ║");
        }

    }

    // Imprime a última linha da ASCII Box
    printf("\n╚═");
    linha(largura_esq);
    printf("═╩═");
    linha(largura_dir);
    printf("═╝");

}

// Gera um menu de escolha para definir se o usuário quer apenas o enésimo termo ou a sequência até ele
void escolheFuncao() {

    unsigned int n = 1;
    unsigned short sequencia = 0;

    printf("\n");
    printf("╔═════════════════════════════════════════════════╗\n");
    printf("║                                                 ║\n");
    printf("║ O que deseja obter?                             ║\n");
    printf("║                                                 ║\n");
    printf("║    [n-esimo termo]    -> Digite 0               ║\n");
    printf("║    [Sequencia ate n]  -> Digite 1               ║\n");
    printf("║                                                 ║\n");
    printf("╚═════════════════════════════════════════════════╝\n");
    printf("\nInput: ");

    scanf("%hu", &sequencia);

    printf("\nInsira um valor de n: ");
    scanf("%u", &n);

    // O compilador não consegue computar a partir de n = 49, então criei esse fallback
    if (n > 48) {
        fibonacci(48, sequencia);
        printf("\n\nO limite atual é de n = 48.\nQuando eu souber contornar isso, atualizarei o programa :)\n");
    } else {
        fibonacci(n, sequencia);
    }

    
}

// Imprime um parágrafo explicando a Sequência e chama o menu de escolha
void introducao() {

    printf("\nNa matematica, a sucessao de Fibonacci (ou sequencia de Fibonacci), e uma sequencia de numeros inteiros,\ncomecando normalmente por 0 e 1, na qual cada termo subsequente corresponde a soma dos dois anteriores.\nA sequencia recebeu o nome do matematico italiano Leonardo de Pisa ou Leonardo Fibonacci, mais conhecido\npor apenas Fibonacci, que descreveu, no ano de 1202, o crescimento de uma populacao de coelhos, a partir desta.\n(Wikipedia)\n");

    escolheFuncao();

}

int main() {

    // Declara a variável "input"
	unsigned short input = 1;

    printf("\n");
    printf("╔═════════════════════════════════════════════════╗\n");
    printf("║         _____      _                            ║\n");
    printf("║        |  ___|    | |              ____         ║\n");
    printf("║        | |__   _  | |_   ___      |  __|        ║\n");
    printf("║        |  __| | | |   | |   |  _  | |__         ║\n");
    printf("║        |_|    |_| |___| |___| |_| |____|        ║\n");
    printf("║                                                 ║\n");
    printf("║           Sequencia de Fibonacci em C           ║\n");
    printf("║                                                 ║\n");
    printf("╠═════════════════════════════════════════════════╣\n");
    printf("║                                                 ║\n");
    printf("║ Voce conhece a Sequencia de Fibonacci?          ║\n");
    printf("║                                                 ║\n");
    printf("║    [Nao] -> Digite 0                            ║\n");
    printf("║    [Sim] -> Digite 1                            ║\n");
    printf("║                                                 ║\n");
    printf("╚═════════════════════════════════════════════════╝\n");

    printf("\nInput: ");

    // Solicita ao usuário um valor para a variável "input"
	scanf("%hu", &input);

    // Se 0, chama a Introdução;
    // Se 1, abre o menu de escolhas;
    // Do contrário, imprime uma mensagem de erro e chama a Introdução;
    switch (input) {
        case 0 : introducao(); break;
        case 1 : escolheFuncao(); break;
        default : printf("\nVoce digitou uma opcao invalida, entao assumo que nao conheca\n"); introducao(); break;
    }

    // Espacinho pra ficar bonito
    printf("\n\n");

    return 0;

}