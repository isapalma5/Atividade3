#include <stdio.h>
//Isabella Castilho Palma
int vetor(int valores[], int n){
    int mult = 1;
    for(int i = 0; i< n; i++){
        mult *= valores[i];
    }
    return mult;
}

int main(){
    int n;
    printf("Digite o tamanho do vetor:");
    scanf("%d", &n);
    
  int valores[n];
  for(int i = 0; i<n; i++){
      printf("Digite o valor:");
      scanf("%d", &valores[i]);
  }
    int resultado = vetor(valores, n);
    printf("Resultado da multiplicação do vetor: %d", resultado);
    return 0;
}