#include <stdio.h>
#include <stdlib.h>

int rand_lim(int limit) {

    int divisor = RAND_MAX/(limit+1);
    int retval;

    do { 
        retval = rand() / divisor;
    } while (retval > limit);

    return retval;
}

void trilha() {

    int soma = rand_lim(5) + 1;

    int casas = 10;

    printf("%d", soma);

    while (soma < casas) {

        int dado = rand_lim(5) + 1;

        soma += dado;

        printf(" %d", dado);

    }

    printf("\n");

}

int main() {

    int n = 0;

    printf("Insira um valor de n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        
        trilha();

    }
    

    return 0;

}