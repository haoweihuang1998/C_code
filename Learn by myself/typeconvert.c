#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int i=5, j, k=3;
    float x=5.5, y;
    j = i/k;
    y = i/k;
    printf(" %d \n", j);
    printf(" %d \n", i/k);
    printf(" %f \n", y);
    printf(" %f \n", (float)i/k);
    y = x/k;
    printf(" %f \n", y);
    printf(" %f \n", x/k);
    printf(" %f \n", (float)x/k);
    j = x/k;
    printf(" %d \n", j);
    printf(" %f \n", j);
    printf(" %f \n", x/k);

    return 0;
}