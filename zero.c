#include <stdio.h>
#include<stdlib.h>
int main() {
    int N;

    printf("Chefe pode informar o número:\n");
    scanf("%d", &N);
    int sum = 0;
    int numero = 0;

    for (int i = 0; i < N; ++i) {
        int X;
        scanf("%d", &X);

        if (X == 0) {
            sum -= numero;
            numero = 0;
        } else {
            sum += X;
            numero = X;
        }
    }

    printf("%d\n", sum);
    return 0;
}