#include <stdio.h>
struct classeA {
    void metodo(){
        printf("Ola mundo!\n");
    }
};
int main () {
    classeA x; //Declara��o da vari�vel...
    x.metodo();
}
