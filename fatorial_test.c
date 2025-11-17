#include <stdio.h>
#include "fatorial.c"

int main() {

    
    if (fatorial(5) == 120)
        printf("Teste 1 OK\n");
    else {
        printf("Teste 1 FALHOU\n");
        return 1;
    }

    
    if (fatorial(0) == 1)
        printf("Teste 2 OK\n");
    else {
        printf("Teste 2 FALHOU\n");
        return 1;
    }

    
    if (fatorial(-3) == -1)
        printf("Teste 3 OK\n");
    else {
        printf("Teste 3 FALHOU\n");
        return 1;
    }

    printf("Todos os testes passaram!\n");
    return 0;
}
