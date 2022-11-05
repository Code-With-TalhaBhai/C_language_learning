#include<stdio.h>
#include<math.h>

void urdu();
void english();
int sum(int X,int Y);


int main(){
    char inp;
    int num1,num2;
    int power = pow(2,4);
    printf("%d",power);
    printf("Enter U for Urdu or E for English: ");
    scanf("%c",&inp);


    if(inp == 'U'){
        urdu();
    }
    else if(inp == 'E'){
        english();
    }
    else{
        printf("Please enter any valid value");
    }

    printf("Enter number 1: ");
    scanf("%d",&num1);

    printf("Enter number 2: ");
    scanf("%d",&num2);

    printf("%d\n",sum(num1,num2));

    return 0;
}


void urdu(){
    printf("Assalum-o-Alaikum\n");
}


void english(){
    printf("Hello\n");
};


int sum(int a, int b){
    return a+b;
}