#include <stdio.h>
//Isabella Castilho Palma
int menorNumero(int num1, int num2, int num3){
    if(num1< num2 && num1< num3){
        printf("%d menor numero", num1);
    }
    
    else if(num2< num1 && num2< num3){
        printf("%d menor numero", num2);
    }
    
    else{
        printf("%d menor numero", num3);
    }
}

int main(){
    int num1, num2, num3;
    
    printf("Digite 3 numeros:");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    
    menorNumero(num1,num2,num3);
    
}