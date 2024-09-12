#include <stdio.h>

int fibonacci(int n);

int main() {
    int digitado;
    scanf("%d", &digitado);
    if(fibonacci(digitado)==1){
        printf("Numero digitado pertence a fibonacci");
    }else{
    printf("Numero digitao nao pertence a fibonacci");
    }
    return 0;
}

int fibonacci(int digitado) {
    int resultado, antigo1 = 1, antigo2 = 0;
    if(digitado==0){
        return 1;
    }
    for (int x=1; x<=digitado+1;x++) {
        if (x==1) {
            resultado = antigo1;
        } else {
            resultado = antigo1 + antigo2;
            antigo2 = antigo1;
            antigo1 = resultado;
        }
        if(digitado==resultado){
            return 1;
        }
    }
    return 0;
}