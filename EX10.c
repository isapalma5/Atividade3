#include <stdio.h>
//Isabella Castilho Palma
void maiorNumero(int num1, int num2){
    if(num1 == num2){
        printf("Numeros iguais!");
    }
    else if (num1 > num2){
        printf("%d é maior!", num1);
    }
    
    else{
        printf("%d é maior!", num2);
    }
}
int main(){
    int num1,num2;
    
    printf("Digite dois numeros: ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    maiorNumero(num1, num2);
    return 0;
}