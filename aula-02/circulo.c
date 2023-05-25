/*

Programa que calcula a circunferência e área de um círculo dado sua área

Tarefa 02 do Curso de C da 3E
Data: 2023-05-25

*/

const double PI = 3.1415926; // Pi, declarado em escopo global

#include <stdio.h>

int main() {

    // Declara a variável "raio"
	int raio = 0.0;

    // Solicita um valor numérico para o raio
	printf("\nInsira o comprimento do raio do circulo: ");
	scanf("%d", &raio);
	
    // Calcula as variáveis "comprimento" e "area" em função do raio
	float comprimento = 2 * PI * raio, area = PI * raio * raio;

    // Imprime no terminal os valores calculados
	printf(
		"\nComprimento da circunferencia: %.3lf\nArea do circulo: %.3lf\n\n",
		comprimento,
		area
	);
	
	return 0;

}