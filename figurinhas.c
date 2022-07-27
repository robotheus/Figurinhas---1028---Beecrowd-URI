#include <stdio.h>

typedef struct {
    int p1;
    int p2;
} troca;

//o que é preciso calcular é o mdc
int montar_pilha(troca figurinhas){
    int resto;

    do {
        resto = figurinhas.p1 % figurinhas.p2;

        figurinhas.p1 = figurinhas.p2;
        figurinhas.p2 = resto;
    } while(resto != 0);

    return figurinhas.p1;
}

int main(){
    troca figurinhas;
    int n, pilha;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d %d", &figurinhas.p1, &figurinhas.p2);
        pilha = montar_pilha(figurinhas);

        printf("%d\n", pilha);
    }

    return 0;
}