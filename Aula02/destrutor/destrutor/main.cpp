#include <iostream>

using namespace std;
struct classeA {
    int *p;
    ~classeA(){
        free(p);
    }
};
int main(){
    classeA objeto;
    objeto.p = (int*)malloc(sizeof(int)*9);
    printf("Vai acabar\n");
}
