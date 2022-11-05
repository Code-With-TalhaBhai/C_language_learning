#include<stdio.h>

int main(){
    int age;
    float rad;

    printf("Hello world\n");
    printf("What is your age? ");
    scanf("%d",&age);

    printf("What is the radius of circle");
    scanf("%f",&rad);



    printf("Your age is %d \n",age);
    printf("The radius of circle is %f \n",3.14*rad*rad);

    return 0;
}