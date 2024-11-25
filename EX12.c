#include <stdio.h>
//Isabella Castilho Palma
 int ordemInv(int vetor[10] ){
     for(int i = 9; i >= 0; i--){
         printf("%d", vetor[i]);
     }
 }
 
 int main(){
     int vetor[10];
     
     for(int i = 0; i< 10; i++){
         printf("Digite os valores do vetor: ");
         scanf("%d", &vetor[i]);
     }
     ordemInv(vetor);
     
    
    return 0;
 }