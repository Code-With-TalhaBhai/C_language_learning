#include<stdio.h>

int main(){

    // Write a program to print number from 1 to n.
    int i,num;
    printf("Enter a number ");
    scanf("%d",&num);

    for(i=1; i<=num; i++){
        printf("Number is: %d\n",i);
    }

    i = 1;

    // int j=1;
    while(i<=num){
        printf("Number is while: %d\n",i);
        i++;
    }

    i = 1;

    do
    {
        printf("Number is do while %d\n",i);
        i++;
    } while (i<=num);


    i = 1;

    do
    {
        printf("Number is do while %d\n",i);
        i++;
    } while (i>=num);



    // Write a table to print table of input number
    int tab;
    int intab;
    printf("Enter number which table you want to print: ");
    scanf("%d",&intab);

    for(tab=1; tab<=10; tab++){
        printf("%d * %d = %d\n",intab,tab,tab*intab);
    }

    tab = 1;

    while (tab<=intab)
    {
        if(tab>10){
            break;
        }
        printf("%d * %d = %d\n",intab,tab,tab*intab);
        tab++;
    };
    

    // reverse table

    for(tab=10; tab>=1; tab--){
        printf("%d * %d = %d\n",intab,tab,tab*intab);
    }

    // Factorial
    int n1,fact;
    printf("Enter the number whose factorial you want: ");
    scanf("%d",&fact);

    n1=1;


// 1st method
//    while (fact>=1)
//    {
//         n1 *= fact; 
//         fact--;
//    }
   
//    printf("%d\n",n1);


// 2nd method
   while(fact>=0){
    if(fact == 1){
        printf("%d\n",n1);
        break;
    }
    n1 *= fact;
    fact--;
   }
   

   // Calculate the sum between 5 and 50 (5 and 50 included);


   int num1,sum = 0;

    for(num1=5; num1<=50; num1++){
        sum +=  num1;
    }
    
    printf("%d\n",sum);

    // Star pattern 
    // ******
    // ******
    // ******
    // ******


    for(int outer=1; outer<=4; outer++){
        for(int inner=1; inner<=6; inner++){
            printf("*");
        }
        printf("\n");
    }

    // Program to check prime numbers
    int InPrime;
    printf("Enter to check Prime Number: ");
    scanf("%d",&InPrime);


    for (int prime = 0; prime < 3; prime++)
    {
        if(InPrime%(prime*2+3) == 0 || InPrime%2 == 0 && InPrime != 2){
            printf("Its not a prime number\n");
            break;
        }
        if(prime == 2 || InPrime == 2){
            printf("Its a prime number\n");
            break;
        }
    };
    
    
    
    

    return 0;
}