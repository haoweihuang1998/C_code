#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int a=30, b=20, c=10;
    printf(" %d \n", a > b || a < c);
    printf(" %d \n", a > b && a < c);
    printf(" %d \n", !(a > b));

    //system("PAUSE");//
    return 0; 
}
