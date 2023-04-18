#include <stdio.h>
#include <stdbool.h>

struct Personagem {
    char nome[50];
    int ataque;
    int defesa;
    int vida;
    //Crie um m�todo que determina se o personagem morreu ou n�o ap�s receber o golpe.
    bool sobreviveu(int danoRecebido){
        int danoReal  = danoRecebido - defesa;
        if(danoReal < 0){
            danoReal = 0;
        }

        return (vida - danoReal) > 0;
    }
};

int main(){
    struct Personagem personagem;

    int dano;

    scanf("%s", personagem.nome);
    scanf("%d", &personagem.ataque);
    scanf("%d", &personagem.defesa);
    scanf("%d", &personagem.vida);

    scanf("%d", &dano);

    if(personagem.sobreviveu(dano)){
        printf("%s sobreviveu!!!", personagem.nome);
    }else{
        printf("%s morreu :(", personagem.nome);
    }
    return 0;
}
