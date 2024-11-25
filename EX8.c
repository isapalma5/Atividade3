#include <stdio.h>
//Isabella Castilho Palma
void exibirPares(int numero){
     printf("Numeros pares:\n");
    for(int i = 1; i < numero; i++){
        if(i % 2 ==0){
            printf("\n %d", i);
        }
    }
}

int main(){
    int numero;
    printf("Digite um numero:");
    scanf("%d", &numero);
    exibirPares(numero);

    
return 0;
    
}