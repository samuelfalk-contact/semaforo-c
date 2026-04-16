#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void limparTela() {
    system("clear");
}

void mostrarEstado(
    char *O, char *N, char *L, char *S,
    char *PO, char *PN, char *PL, char *PS
) {

    printf("\nSEMAFOROS DE VEICULOS\n");
    printf("O: %s\n", O);
    printf("N: %s\n", N);
    printf("L: %s\n", L);
    printf("S: %s\n", S);

    printf("\nSEMAFOROS DE PEDESTRES\n");
    printf("PO: %s\n", PO);
    printf("PN: %s\n", PN);
    printf("PL: %s\n", PL);
    printf("PS: %s\n", PS);
}

void contagem(int tempo) {

    for(int i = tempo; i > 0; i--) {

        printf("\rTempo restante: %d segundos   ", i);
        fflush(stdout);

        sleep(1);
    }

    printf("\n");
}

int main() {

    while(1) {

        limparTela();
        printf("\n=== FASE HORIZONTAL ===\n");

        mostrarEstado(
            "VERDE","VERMELHO","VERDE","VERMELHO",
            "VERMELHO","VERDE","VERMELHO","VERMELHO"
        );

        contagem(40);

        limparTela();
        printf("\n=== AMARELO HORIZONTAL ===\n");

        mostrarEstado(
            "AMARELO","VERMELHO","AMARELO","VERMELHO",
            "VERMELHO","VERMELHO","VERMELHO","VERMELHO"
        );

        contagem(3);

        limparTela();
        printf("\n=== VERMELHO DE LIMPEZA ===\n");

        mostrarEstado(
            "VERMELHO","VERMELHO","VERMELHO","VERMELHO",
            "VERMELHO","VERMELHO","VERMELHO","VERMELHO"
        );

        contagem(2);

        limparTela();
        printf("\n=== FASE VERTICAL ===\n");

        mostrarEstado(
            "VERMELHO","VERDE","VERMELHO","VERDE",
            "VERDE","VERMELHO","VERMELHO","VERMELHO"
        );

        contagem(35);

        limparTela();
        printf("\n=== AMARELO VERTICAL ===\n");

        mostrarEstado(
            "VERMELHO","AMARELO","VERMELHO","AMARELO",
            "VERMELHO","VERMELHO","VERMELHO","VERMELHO"
        );

        contagem(3);

        limparTela();
        printf("\n=== VERMELHO DE LIMPEZA ===\n");

        mostrarEstado(
            "VERMELHO","VERMELHO","VERMELHO","VERMELHO",
            "VERMELHO","VERMELHO","VERMELHO","VERMELHO"
        );

        contagem(2);

        limparTela();
        printf("\n=== FASE PEDESTRES ===\n");

        mostrarEstado(
            "VERMELHO","VERMELHO","VERMELHO","VERMELHO",
            "VERDE","VERDE","VERDE","VERDE"
        );

        contagem(60);

    }

}
