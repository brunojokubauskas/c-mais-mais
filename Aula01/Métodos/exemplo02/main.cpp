#include <stdio.h>
struct classeA {
    void metodo(){
        printf("Ola mundo!\n");
    }
};
int main () {
    classeA x; //Declaração da variável...
    x.metodo();
}
