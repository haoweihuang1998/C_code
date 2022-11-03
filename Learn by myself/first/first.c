#include <stdio.h>
#include <stdlib.h>
#define MSG1 " 圓半徑 :"
#define MSG2 " 圓周長 :"
#define MSG3 " 圓面積 :"
#define PI 3.14159
int radius = 100 ;
float get_area(void);
int main(int argc,char*argv[]){
    float perimeter;
    printf("%s%d\n\n" ,MSG1,radius);
    perimeter=2*PI*radius;
    printf("%s%.2f\n\n" ,MSG2,perimeter);
    printf("%s%.2f\n\n" ,MSG3,get_area());
    system("PAUSE");                  /*暫停來查看結果*/
    return 0;                         /*結束程式執行*/
}
float get_area(void)
{
    float area;
    area=PI*radius*radius;
    return (area);
}
