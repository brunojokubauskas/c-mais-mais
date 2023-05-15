#include <iostream>

using namespace std;
struct A `{
    int X;
    A (){
        //Construtor,,,
        x = 0;
        printf("Construiu um objeto\n");
        //Todo X com o OBJETO A vai inicializar com 0.
    }
};
int main(){
    A objeto;
    printf("%d\n", objeto.x);
    //Vai ter um valor pré definido...


}
