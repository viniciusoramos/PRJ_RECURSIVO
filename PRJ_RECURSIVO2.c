#include <stdio.h>
#include <stdlib.h>

int fatorialrecursivo(int n){
    //caso base
    if (n == 0 || n == 1){
        return 1;
    }
    else {
        //Chamada recursiva 
        return n * fatorialrecursivo(n - 1);
    }

}
int main(){
    int numero = 4;
    printf("O fatorial de %d e %d", numero, fatorialrecursivo(numero));
    return 0;
}