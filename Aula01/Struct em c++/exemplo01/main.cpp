#include <stdio.h>
struct pessoa {
    char nome[50];
    int idade;
};
int main(){
    //Cada pessoa vai conter esses dois atributos..
    pessoa x, y, z;
    printf("Digite o nome da pessoa:\n");
    scanf("%s", x.nome);
    printf("Digite a idade da pessoa:\n");
    scanf("%d", &x.idade);
    printf("Digite o nome da pessoa Y: ");
    scanf("%s", y.nome);
    printf("Digite a idade da pessoa Y: ");
    scanf("%d", &y.idade);
    printf("Digite o nome da pessoa Z: ");
    scanf("%s",  z.nome);
    printf("Digite o nome da idade z:");
    scanf("%d", &z.idade);
    //A maior idade considadera vai ser a do X...
    int maior = x.idade;
    if(maior< y.idade){
        maior = y.idade;
    }
    if(maior < z.idade){
        maior = z.idade;
    }

    if(maior == x.idade){
        printf("%s\n", x.nome);
    }

    if(maior == y.idade){
        printf("%s\n", y.nome);
    }

    if(maior == z.idade){
        printf("%s\n", z.nome);
    }


};
