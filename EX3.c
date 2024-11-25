#include <stdio.h>
//Isabella Castilho Palma
int calcularResultado(int v[], int n); // assinatura da função

int main(){
    int vetor[5], i, resultado; //declarando as váriaveis 
    for(i = 0; i< 5; i++){ //loop que irá percorrer o array e preencher o vetor com o dobro de "i"
    }
    resultado = calcularResultado(vetor, 5); // chamando a função com os parâmentros vetor e 5(tamanho do array) atribuindo o retorno para resultado
    printf("O resultado é %d\n", resultado); // imprimindo o resultado da soma

    return 0;
}

int calcularResultado(int v[], int n){ //função que calcula o soma do vetor com "v" como um array e o "n" para definir o tamanho do array
    int i , soma = 0;
    
    for(i = 0; i < n; i++){ //loop que vai percorrer o vetor até o valor de "n"
        soma+=v[i]; // adiciona o valor de cada elemento do array e soma
    }
    return soma; //retorna a soma do vetor
}