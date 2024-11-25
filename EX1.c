#include <stdio.h>
//Isabella Castilho Palma
typedef struct {// Define uma estrutura chamada "pessoa".
    double peso;//Declara um membro para armazenar o peso da pessoa.
    int idade; //Declara um membro para armazenar o idade da pessoa.
    double altura; //Declara um membro para armazenar o altura da pessoa.
}pessoa; // Nome para a struct
void imprimePessoa(pessoa p){ //Função para imprimir os dados de uma pessoa a partir da struct
    printf("Peso:%lf.  Idade:%d. Alturas: %lf. \n\n", p.peso, p.idade, p.altura);
}
 
void lerDadosPessoas(pessoa pessoas[], int tamanho) {// Função para permitir que o usuário digite os dados de cada pessoa no array
    for (int i = 0; i < tamanho; i++) {
        printf("Digite os dados para a pessoa %d:\n", i + 1);
        printf("Peso: ");
        scanf("%lf", &pessoas[i].peso);
        printf("Idade: ");
        scanf("%d", &pessoas[i].idade);
        printf("Altura: ");
        scanf("%lf", &pessoas[i].altura);
    }
}
int main()
{
pessoa pessoas[5], p1;// Declarando um array "pessoas" de 5 elementos do tipo pessoa e uma variável "p1" do tipo pessoa
    
    //pessoas[0].peso = 80.6; //atribuindo um valor para o peso da 1°pessoa do array
    //pessoas[0].idade = 40; //atribuindo um valor para a idade da 1°pessoa do array
    //pessoas[0].altura = 1.70; //atribuindo um valor para a altura da 1°pessoa do array
    
    lerDadosPessoas(pessoas, 5); // Chama a função lerDadosPessoas para o usuário digite todos os dados do array
    
    p1 = pessoas[0]; //atribuindo os dados da 1° pessoa array para a p1; 
    
    if(p1.idade > 20)//condição onde se idade de p1 for maior que 20
        p1.idade++;//incrementa um;
        
    pessoas[1] = pessoas[0]; //atribuindo os dados da 1° pessoa para a 2°pessoa do array; 
    printf("P1: ");
    imprimePessoa(p1); // Chama a função imprimePessoa para imprimir os dados de "p1"
    printf("1° pessoa do array: ");
    imprimePessoa(pessoas[0]); // Imprime os dados da primeira pessoa no array.
    printf("2° pessoa do array: ");
    imprimePessoa(pessoas[1]); //Imprime os dados da segunda pessoa no array.
    printf("3° pessoa do array: ");
    imprimePessoa(pessoas[2]) //Imprime os dados da terceira pessoa no array.
    printf("4° pessoa do array: ");
    imprimePessoa(pessoas[3]); //Imprime os dados da quarta pessoa no array.
    printf("5° pessoa do array: ");    
    imprimePessoa(pessoas[4]); //Imprime os dados da quinta pessoa no array.
    return 0;
}