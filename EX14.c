#include <stdio.h>
// Isabella Castilho Palma
int calcularResultado( int soma,int vetor[]){
   int resultado = soma + (vetor[0] * 5) + (vetor[9] * 2);
    return resultado;
    
}
int main(){
    int vetor[10] = {1,2,3,4,5,6,7,8,9,0};
    int soma;
    for(int i = 0; i<10; i ++){
        soma += vetor[i];
    }
    int resultado = calcularResultado(soma, vetor);
    
    printf("Resultado:%d ", resultado);
    return 0;
}