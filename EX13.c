#include <stdio.h>

float calcularMedia(float num1, float num2, float num3){
    float soma = 0;
    float media = 0;
     soma = num1 + num2 + num3;
     media = soma/3;
         return media;
}

int main(){
    float num1, num2, num3;
    printf("Digite as 3 notas: ");
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);
    
   float Resultado = calcularMedia(num1,num2,num3);
   printf("Media: %.2f", Resultado);
   return 0;
}