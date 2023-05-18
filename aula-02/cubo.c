const double PI = 3.1415926; // É possível declarar em escopo global

#include <stdio.h>

int main() {

	float aresta = 0.0;
	printf("Insira o comprimento da aresta: ");
	scanf("%f", &aresta);
	
	float volume = aresta * aresta * aresta, area = 6 * aresta * aresta;
	printf(
		"Volume do cubo: %3.4lf\n Area de superficie do cubo: %lf",
		volume,
		area
	);
	
	return 0;

}