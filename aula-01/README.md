# Aula 01

Para início de conversa: **Algoritmo** é uma sequência de instruções para resolver um problema. A partir de um algoritmo, você escreve um **Código**, que deve então ser compilado para gerar um **Programa**.

Há dois tipos de linguagem: interpretada e compilada. As linguagens interpretadas são executadas em tempo real pelo computador. Um exemplo é o Python. Uma linguagem compilada, por outro lado, é traduzida para linguagem de máquina na forma de um executável.

**C** é uma linguagem muito básica, a ponto de não ter recursos para armazenar string nativamente ao longo do código.

## Sintaxe Básica

```c
// Diretriz do pré-processador que inclui o módulo stdio.h
#include <stdio.h>

// Função principal do programa, executada diretamente ao iniciá-lo.
int main() {

	// Função importada de stdio.h que escreve no Terminal.
	printf("Olá, Mundo!");

  // Retorna o valor 0 quando a função termina de ser executada.
	return 0;

	// Tudo abaixo do comando return é ignorado

}
```

As **diretrizes** são comandos a serem executados antes da execução dos códigos.

`<stdio.h>` : Standard Input/Output

A função `main()` é necessária para o programa ser executado. É a primeira função lida pelo programa.

Similarmente, é necessário que as funções tenham valores de retorno para serem executadas.

## Palavras-chave e Símbolos

**Palavras-chave** são as instruções para o compilador. É através dela que o compilador interpretará o algoritmo construído.

**Símbolos**, por sua vez, também são instruções. No entanto, a diferença entre esses dois elementos é que palavras-chave representam estruturas, funções e tipos de dados, enquanto símbolos representam operações.

## A função `main()`

É a principal função do programa, executada diretamente ao iniciá-lo. Sintaticamente, no entanto, funciona como qualquer outra função.

## A biblioteca `stdio.h`

Contém duas funções importantes para receber e escrever texto no terminal:

- `printf()` : escreve (imprime) texto no terminal:
    - Precisa de um texto a ser enviado ao terminal;
    - Não cria uma linha nova por padrão;
    - Tecnicamente, envia dados para o canal `stout` (*standard output*)
- `scanf()` : recebe (escaneia) dados no terminal:
    - Precisa saber o tipo de variável;
    - Tecnicamente, recebe dados do canal `stdin` (*standard input*);

## Compilando um programa usando GCC

```bash
gcc programa.c -o programa.out
```

Para compilar, no meu mac, um programa escrito em C:

```bash
g++-12 -Wall Program.cc -o Program
```