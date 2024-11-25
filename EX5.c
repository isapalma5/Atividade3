#include <stdio.h>
//Isabella Castilho Palma
int Impares(int n1){
    for(int i = 0; i<= n1; i++){
        if(i % 2 != 0 && i % 7 != 0){
        printf("%d-", i);
        }
        
    
}
}

int main (){
    int n1;
    printf("Digite um  numero: ");
    scanf("%d", &n1);
    
    int resultado = Impares(n1);
    
    ("Numeros impares de 1 até %d: %d", n1, resultado);
    
    return 0;
}