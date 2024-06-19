/*
 ============================================================================
 Name        : prj_maratona.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main() {
    int cartas[5];
    int i;


    for (i = 0; i < 5; i++) {
        scanf("%d", &cartas[i]);
    }


    int crescente = 1;
    int decrescente = 1;

    for (i = 1; i < 5; i++) {
        if (cartas[i] > cartas[i - 1]) {
            decrescente = 0;
        } else if (cartas[i] < cartas[i - 1]) {
            crescente = 0; 
        }
    }
    


    if (crescente) {
        printf("C\n");
    } else if (decrescente) {
        printf("D\n");
    } else {
        printf("N\n");
    }

    return 0;
}

