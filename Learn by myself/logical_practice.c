#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    int a=20, b=10, c, d, e, f, g;
    printf(" %d \n", a);
    printf(" %d \n", b);
    printf(" %d \n", c = a-- -5);
    printf(" %d \n", d = a + --b);
    printf(" %d \n", e = (g = d) + 2);
    printf(" %d \n", f = (20 == 20) + 4);
    printf(" %d \n", g += ++a + b--);
    
    return 0;
}
