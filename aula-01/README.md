# Aula 01: Símbolos e I/O

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

## Comentários

Ah, você sabe como funciona: comentários são trechos do código que são ignorados pelo compilador e servem para **documentação**. Em C, o início de uma linha de comentário é indicado por `//`  e um comentário multi-linhas fica `/* assim */` .

Comente seu código, irmão!

## Palavras-chave e Símbolos

**Palavras-chave** são as instruções para o compilador. É através dela que o compilador interpretará o algoritmo construído. C é uma linguagem considerada pequena, contendo apenas 32 palavras-chave:

| auto | do | goto | signed | unsigned |
| --- | --- | --- | --- | --- |
| break | double | if | sizeof | void |
| case | else | ibt | statuc | volatile |
| char | enum | long | struct | while |
| const | extern | register | switch |  |
| continue | float | return | typedef |  |
| default | for | short | union |  |

**Símbolos**, por sua vez, também são instruções. No entanto, a diferença entre esses dois elementos é que palavras-chave representam estruturas, funções e tipos de dados, enquanto símbolos representam operações.

## Identificadores

Identificadores são os nomes atribuídos a funções e variáveis em C. Como o próprio nome sugere, eles dão identidade a uma informação.

É recomendado usar identificadores específicos, que deixem explícito o que são e como funcionam os elementos.

### A função `main()`

É a principal função do programa, executada diretamente ao iniciá-lo. Sintaticamente, no entanto, funciona como qualquer outra função.

## Constantes

São valores que não podem ser modificados pelo programa e que são atribuídos diretamente pelo programador (*hard-coded*).

Elas podem ser definidas (nomeadas) ou apenas escritas diretamente?

```c
#include <stdio.h>

// Neste caso, PI é uma constante
#define PI 3.14159

int main() {

	// Mas "Olá, mundo!" também é
	printf("Olá, mundo!");
	
}
```

## Diretivas do pré-processador

São instruções que você passa ao **compilador**, antes de enviar comendos ao programa em si.

### A biblioteca `stdio.h`

Contém duas funções importantes para receber e escrever texto no terminal:

- `printf()` : escreve (imprime) texto formatado no terminal:
    - Precisa de um texto a ser enviado ao terminal;
    - Não cria uma linha nova por padrão;
    - Tecnicamente, envia dados para o canal `stout` (*standard output*)
- `scanf()` : recebe (escaneia) dados formatados no terminal:
    - Precisa saber o tipo de variável;
    - Tecnicamente, recebe dados do canal `stdin` (*standard input*);

Para identificar variáveis dentro do texto das funções, usamos alguns atalhos, chamados **Especificadores de Formato**:

| %c | um único caractere |
| --- | --- |
| %s | uma string |
| %hi | short (com sinal) |
| %hu | short (sem sinal) |
| %Lf | long double |
| %n | sem impressão |
| %d | um inteiro decimal (assume a base 10) |
| %i | um decimal inteiro (detecta a base automaticamente) |
| %o | um inteiro octal (base 8) |
| %x | um inteiro hexadecimal (base 16) |
| %p | um endereço (ou pointer) |
| %f | um número de ponto flutuante para floats |
| %u | int decimal sem sinal |
| %e | um número de ponto flutuante em notação científica |
| %E | um número de ponto flutuante em notação científica |
| %% | o símbolo % |

## Compilando um programa usando GCC

```powershell
gcc programa.c -o programa.out
```

Para compilar, no meu mac, um programa escrito em C:

```bash
g++-12 -Wall Program.cc -o Program
```