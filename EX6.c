#include <stdio.h>
//Isabella Castilho Palma
float vetor(float valores[], int n){
    float soma =0;
    for(int i = 0; i < n; i++){
        soma += valores[i];
         
    } 
    return soma;
}
int main(){
    int n;
   
    
    printf("Digite um tamanho para o vetor:");
    scanf("%d", &n);
    
     float valores[n];
    for(int i = 0; i<n; i++){
        printf("Digite os valores: ");
        scanf("%f", &valores[i]);
    }
    float Resultado = vetor(valores,n);
    
    float media = Resultado/n;
      
    
    printf("Soma: %.2f Media: %.2f", Resultado, media);
    
    return 0;
    
}