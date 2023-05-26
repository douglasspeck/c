# Aula 03: Fluxo de Controle

## O que é fluxo de controle?

**Fluxo de Controle** é a ordem dos eventos do nosso código.

Os eventos ocorrem de forma linear, um depois do outro, seguindo o algoritmo que criamos.

## Estruturas de Controle

São estruturas que mudam a ordem dos eventos, tornando o código não-linear.

### Estrutura Condicional

São estruturas que vão (ou não) executar códigos de acordo com uma condição.

Em **C**, as estruturas condicionais são `if` e `else`.

```c
if (x > 0) {
	// Se x é maior que zero, executa esse código
}

else if (x == 0) {
	// Do contrário, se x é igual a zero, executa esse código
}

else {
	// Do contrário, executa esse código
}
```

### Estrutura Iterativa

São estruturas que vão repetir múltiplas vezes um pedaço de código de acordo com uma condição.

Em **C**, as estruturas condicionais são `while` e `for`.

### Estrutura Condicional Múltipla

São estruturas que vão executar códigos diferentes baseado em múltiplas condicionais (em geral, múltiplos valores de uma variável).

Em **C**,  a estrutura condicional múltipla é `switch`.

## Expressões Lógicas

São proposições que só podem assumir os valores VERDADEIRO (`true`) ou FALSO (`false`). Esse tipo de proposição é interpretado pelo computador como um valor booleano (`1` ou `0`)

Em **C** não existe *datatype* booleano, então usamos `int`.

- 1 → `true`
- 0 → `false`
- Qualquer valor definido → `true`

### Lógica em C

| Operação | Matemática | C |
| --- | --- | --- |
| E | A ∧ B | a && b |
| OU | A ∨ B | a || b |
| NÃO | ¬A | !a |
| Igual | a = b | a == b |
| Diferente | a ≠ b | a != b |
| Maior que | a > b | a > b |
| Menor que | a < b | a < b |
| Maior ou igual que | a ≥ b | a >= b |
| Menor ou igual que | a ≤ b | a <= b |

```c
#include <stdio.h>

int main() {

	// Queremos executar uma tarefa 5 vezes
	// Precisamos declarar quantas vezes vamos repetir e quandas vezes já repetiram
	int repeticoes = 5, contador = 0;

	// Enquanto o contador for menor que o número de repetições, faça isso
	while (contador < repeticoes) {
		printf("Repetiu com WHILE! %d de %d\n", contador, repeticoes);
		contador++; // Atualiza o contador
	}

	// Enquanto a variável i for menor que o número de repetições, faça isso
	for (int i = 0; i < repeticoes; i++) { 
		printf("Repetiu com FOR! %d de %d\n", i, repeticoes);
	}

	return 0;

}
```