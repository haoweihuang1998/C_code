#include <stdio.h>
#include <stdlib.h>
#define MSG1 " ��b�| :"
#define MSG2 " ��P�� :"
#define MSG3 " �ꭱ�n :"
#define PI 3.14159
int radius = 100 ;
float get_area(void);
int main(int argc,char*argv[]){
    float perimeter;
    printf("%s%d\n\n" ,MSG1,radius);
    perimeter=2*PI*radius;
    printf("%s%.2f\n\n" ,MSG2,perimeter);
    printf("%s%.2f\n\n" ,MSG3,get_area());
    system("PAUSE");                  /*�Ȱ��Ӭd�ݵ��G*/
    return 0;                         /*�����{������*/
}
float get_area(void)
{
    float area;
    area=PI*radius*radius;
    return (area);
}
