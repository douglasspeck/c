# Aula 04: Funções, Escopo e Recursão

> O parágrafo do código é a função
*(Ira Pohl, Universidade de Santa Cruz)*
> 

Uma **função** é uma série de instruções que podem ser chamadas e executadas repetidamente no código. De maneira geral, sempre que for repetir uma tarefa múltiplas vezes, é possível transformar a tarefa em uma função, que será chamada várias vezes.

### Retornando valores com `return`

A **********palavra-chave********** mais importante no contexto das funções é o `return`, que define que valor a a função vai devolver para o programa.

Um exemplo é a função `main()`, que, por padrão, retorna o valor 0. Quando o valor retornado por essa função é diferente de 0,

**********Nota:********** pesquisar sobre a biblioteca `<perror.h>`, que alerta sobre os erros do código.

### Uma variável vazia: o *datatype* `void`

Além dos tipos de variáveis já estudados, há um tipo especial: o datatype `void`. O mesmo não retorna nenhum valor e é especialmente útil na declaração de funções que não têm valor de retorno.

```c
/*

Programa que determina e imprime a paridade de um número dado

Atividade da Aula 04 do Curso de C da 3E
Data: 2023-06-02

*/

#include <stdio.h>

void escreveParidade(int n) {
	
	if (n % 2) {
		printf("O numero %d e impar!\n", n);
	} else {
		printf("O numero %d e par!\n", n);
	}

}

int main() {

	int numero = 0;
	printf("Insira um numero: ");
	scanf("%d", &numero);

	escreveParidade(numero);
	
	return 0;

}
```

### Tipos de função

Existem duas classificações de funções.

#### Iteração

É um método mais rápido e econômico em memória. É mais linear, útil para tarefas mais diretas e repetitivas.

#### Recursão

É um método mais lento e custoso em memória. Utiliza ************backtracking************ para considerar múltiplas ramificações do mesmo problema.

<aside>
💡 É uma boa prática colocar os casos triviais para serem testados antes nas condicionais. Por exemplo: no caso de uma função para calcular a fatorial, é preferível testar primeiro se a variável é menor ou igual a 1.
</aside>