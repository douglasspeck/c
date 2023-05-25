# Aula 02: Datatypes

## Processo de criação de uma variável

Uma variável é, em termos gerais, um valor ao qual atribuímos um nome.

A princípio, confiaremos no compilador. Isso só irá mudar quando trabalharmos com **ponteiros**.

### Informalmente

1. Emprestamos um pedaço da memória do computador;
2. Especificamos que tipo de informação vai ser guardada;
3. Damos um nome à informação guardada;
4. Colocamos a informação no pedaço de memória que pegamos emprestado;

### Formalmente

1. **Alocamos** memória do computador;
2. Especificamos o **datatype** da variável;
3. Damos um nome ou **identificador** à variável;
4. Damos um valor à variável ou **inicializamos** ela.

## Datatypes

Para o computador, é necessário diferenciar os tipos de variáveis, que são influenciadas por seus **modificadores** que mudam seu tamanho e o alcance dos valores que elas pode representar.

### Números inteiros (`int`)

Esse *datatype* armazena números inteiros.

Geralmente são utilizados como contadores, índices, etc.

Seu armazenamento máximo é de 32 bits, isto é, pode armazenar até 32 dígitos binários.

- `unsigned int` : representam apenas números positivos. Assim, dobra a quantidade de bits disponíveis.
- `long` : tem o dobro do tamanho de um `int` comum.
- `short` : tem a metade do tamanho de um `int` comum.

### Números racionais (`float`)

Esse **datatype** funciona como um número em notação científica, então, quanto maior o número, menor a precisão.

Podem ser utilizados para representar números muito grandes, muito pequenos ou constantes reais como π.

- `double` : tem um alcance e uma precisão drasticamente maiores do que as de um float comum.
- `long double` : tem um alcance igual ou maior que double, porém varia de acordo com o dispositivo.

#### Operações entre números

- **Adição** `a + b`;
- **Subtração:** `a - b`;
- **Multiplicação:** `a * b`;
- **Divisão:** `a / b`;
- **Módulo:** `a % b`;

### Caracteres (`char`)

Esse datatype armazena caracteres, a partir da tabela ASCII.

Uma variável `char` armazena apenas um caractere.

**Observação: C** não possui um *datatype* `string`.

### Variáveis constantes

Variáveis com o modificador `const` não podem ser modificadas ao longo do código, isto é, o primeiro valor atribuído a elas é permanente.

## Identificadores

Identificadores são os nomes dados a variáveis e funções.

### Boas práticas de programação:

1. Deixar os identificadores bem claros e específicos (mesmo que fiquem longos);
2. Usar *underline* no lugar de barras de espaço (obrigatório);
3. Usar `snake_case` e não `camelCase`;
4. Deixar os identificadores de variáveis em letras minúsculas e os de constantes em maiúsculas;

## Inicialização de variáveis

Uma variável é inicializada quando um valor é atribuído a ela pela primeira vez no programa.

Isto é: a variável existe antes mesmo de ser inicializada!

## Utilizando variáveis em C

O comando scanf solicita um formato específico de valor, que deve ser especificado na função:

```c
const double PI = 3.1415926; // É possível declarar em escopo global

#include <stdio.h>

int main() {

	float aresta = 0.0;
	printf("Insira o comprimento da aresta: ");
	scanf(”%f”, &aresta);
	
	float volume = aresta * aresta * aresta, area = 6 * aresta * aresta;
	printf(
		"Volume do cubo: %3.4lf\n Area de superficie do cubo: %lf",
		volume,
		area
	);
	
	return 0;

}
```

### Especificadores de Formato

| Especificador | Utilização |
| --- | --- |
| %c | um único caractere |
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