#include<stdio.h>

int main(){

// Write a program to check whether it's a captial or small alphabet;
    char ch;
    printf("Enter any alphabet: ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z'){
        printf("Its a small alphabet\n");
    }
    else if(ch>'A' && ch<='Z'){
        printf("Its capital alphabet\n");
    }
    else{
        printf("Its not an alphabet\n");
    }


    // Write a program to check whether int is natural number or not.

    int num;
    printf("Enter any number: ");
    scanf("%d",&num);

    if(num>=1){
        printf("It's a natural number\n");
    }
    else
    {
        printf("It's not a natural number\n");
    }
    

    return 0;
}