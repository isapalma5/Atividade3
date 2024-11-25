#include <stdio.h>
//Isabella Castilho Palma
int vetor(int valores[], int n, int* posicao){
    int maior= valores[0];
    *posicao = 0;
    for(int i; i<n; i++){
        if(valores[i]> maior){
             maior= valores[i]; 
            *posicao = i;
        }
    }
    return maior;
}

int main(){
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
   
    int posicao = 0, valores[n];
    
    for(int i; i < n; i++){
        printf("Digite o valor: ");
        scanf("%d", &valores[i]);
    }
   
     int Resultado = vetor(valores, n, &posicao);
    printf("Maior valor: %d \n Posicao: %d", Resultado, posicao);
    return 0;
}