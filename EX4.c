#include <stdio.h>
//Isabella Castilho Palma
float calculaMedia(float n1,float n2,float n3, float n4){
    float soma, media;
    soma= n1+n2+n3+n4;
    media = soma/4;
        if(media>= 7){
         printf("Aprovado!\n");
        }
        else{
         printf("Reprovado!\n");
        }
    return media;
}

int main(){

  float n1,n2,n3,n4;

      printf("Digite a 1° nota: ");
      scanf("%f", &n1);
      printf("Digite a 2° nota: ");
      scanf("%f", &n2);
      printf("Digite a 3° nota: ");
      scanf("%f", &n3);
      printf("Digite a 4° nota: ");
      scanf("%f", &n4);
     float  Resultado = calculaMedia(n1,n2,n3,n4);
   printf("Media %.2f", Resultado);
   return 0;
}