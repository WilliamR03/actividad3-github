// main.c de ejemplo
#include <stdio.h>

void menu() {
    printf("\n=== MENU ===\n");
    printf("1) Saludo\n");
    printf("0) Salir\n");
    printf("Opcion: ");
}

int main() {
    int op;
    do {
        menu();
        if (scanf("%d", &op) != 1) { return 0; }
        switch(op) {
            case 1: printf("Hola, GitHub!\n"); break;
            case 0: printf("Adios!\n"); break;
            default: printf("Opcion invalida\n"); break;
        }
    } while(op != 0);
    return 0;
}