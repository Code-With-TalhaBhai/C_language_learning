#include<stdio.h>
#include<math.h>


int main(){
    int a = 32;
    int b = a;
    int c = a + b;

    int d = 1, e;
    // double power = pow(a,b);

    // a = b = c = d = e = 234;
    int x,y,z;
    x=y=z=234;

    int i,g = 32;

    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,x,y,z,i,g);

    printf("Power is %f\n",pow(3,3));


    printf("%d\n",(a+b+c)/3);

    int inp;
    printf("Enter digit");
    scanf("%d",&inp);
    printf("%d",inp);

    if(inp){
    printf("You pressed digit\n");
    }
    else{
    printf("You pressed character %d\n",inp);
    }


    int num1,num2;
    printf("Enter First Num");
    scanf("%d",&num1);


    printf("Enter Second Num");
    scanf("%d",&num2);

    printf("Num1 is greater %d",num1>num2);


    return 0;
}