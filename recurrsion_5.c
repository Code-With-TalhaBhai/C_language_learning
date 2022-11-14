#include<stdio.h>
void recursion(int n);
int sum(int n);
int sum1(int n);
int factorial(int n);
int fabonacci(int n);
int power(int num,int pwr);


int main(){
    recursion(2);
    printf("%d\n",sum(15));
    printf("%d\n",sum1(15));
    printf("%d\n",factorial(7));
    printf("%d\n",fabonacci(15));
    printf("%d\n",power(2,4));
    // fabonacci(5);
    return 0;
}

void recursion(int number){

    if(number == 0){
        return;
    }

    printf("Hello world\n");
    recursion(number-1);
}


// Write a program to sum 30 natural numbers

int all;
int sum(int n){

    all = all + n;

    if(n <= 0){
        return all;
    }

    return sum(n-1);

}

int sum1(int n){
    if(n == 1){
        return 1;
    }
    int sumN = sum1(n-1);
    int last = n + sumN;
    return last;
}


// Factorial of n.

int factorial(int n){
    if(n==1){
        return 1;
    }

    int fact = factorial(n-1);
    // int check = n * fact;

    return n*fact;
};


// Fabonacci sequence(Google it) of n.

int fabonacci(int n){
    if(n == 0){
        return 0;
    };

    if (n == 1){
        return 1;
    };

    int fabN1 = fabonacci(n-1);
    int fabN2 = fabonacci(n-2);

    // int fab = fabonacci(n-1) + fabonacci(n-2);  
    int fab = fabN1 + fabN2;
    // printf("fab of %d is %d\n",n,fab);

    return fab;
};


// power function by recurrsion

// custom power function
int power(int num,int pwr){

    // 1st method
    if(pwr == 1){
        return num * 1;
    }
    // 2nd method
    // if(pwr == 0){
    //     return 1;
    // }

    int multiple = power(num,pwr-1);
    printf("The power of %d is %d\n",pwr,multiple);

    return multiple * num;
}
