#include <stdio.h>
#include <string.h>
#include <locale.h>
//Isabella Castilho Palma
typedef struct{ //define uma estrutura chamada Carro
    char modelo[50]; //declara um membro para armazenar o modelo do carro
    int ano; //declara um membro para armazenar o ano do carro
    double preco;  //declara um membro para armazenar o preço do carro
}Carro; //nome para a struct

void modificarPreco (Carro *c, double novoPreco){//uma Função para mudar o preço,onde recebe um ponteiro para um objeto carro e um novo preço
    c->preco = novoPreco; // atribui o novo preço ao campo "preco" do carro usando o operador "->" para acessar o membro através do ponteiro
}


void imprimirCarro(Carro *c){ //função para imprimir os dados do carro, onde recebe como parâmetro um ponteiro para um objeto Carro para acessar os dados 
    printf("Modelo: %s\n", c->modelo);
    printf("Ano: %d\n", c->ano);
    printf("Preço: R$ %.2lf\n", c->preco);
}
int main()
{
    setlocale(LC_ALL,"portuguese");
    
    Carro carro1;//declarando uma variável do tipo Carro
    strcpy(carro1.modelo, "Xyz"); // copia a string "Xyz" para o campo "modelo" de carro1
    carro1.ano = 2020; //atribuindo um valor para o ano
    carro1.preco = 90000.00; //atribuindo um valor para o preço
    
    printf("Dados antes da modificação:\n");
    imprimirCarro(&carro1);// chama a função imprimirCarro passando o endereço de carro1 para imprimir seus dados
    
    modificarPreco(&carro1, 115000.00); // Chama a função modificarPreco passando o endereço de carro1 e o novo preço
    
    printf("\nDados após a modificação do preço:\n");
    imprimirCarro(&carro1);// chama a função imprimirCarro passando o endereço de carro1 para imprimir seus dados modificados
    
    return 0;
}