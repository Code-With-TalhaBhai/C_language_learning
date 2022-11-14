#include<stdio.h>
void cube(int n);
void cube_pointer(int* n);
void swap(int a, int b);
void swap_pointer(int *a, int *b);
void printAddress(int n);
void doWork(int a,int b,int *sum,int *product,int *avg);


int main(){

    int age = 23;
    int *ptr = &age;

    // (&)====> Address Of Operator
    // (*)====> Value Of Operator

    int wage = *ptr;

    printf("%p\n",&age); // pointer type(%p)
    // printf("%u\n",&age); // unsigned int(%u) type(Not recommended)

    printf("%p first\n",ptr); // pointer address value 
    printf("%p\n",&ptr); // pointer itself address
    printf("%d\n",*ptr); // Int Value stored in it

    printf("%d\n",wage);




// Practice Set
    // ==========================> Find the Output
int *pptr;
int x;


pptr = &x; // pptr value is the address of x
*pptr = 0; // *pptr is the place(address of x) where 0 will be stored. 


printf("x = %d\n",x); // returns 0;
printf("*pptr = %d\n", *pptr); // returns 0;


*pptr += 5;
printf("x = %d\n",x); // returns 5;
printf("*pptr = %d\n", *pptr); // returns 5;

(*pptr)++;
printf("x = %d\n",x); // returns 6;
printf("*pptr = %d\n", *pptr); // returns 6;


//     ==============================> Print the value "i" from pointer to pointer

    float i = 100.00;
    float *ctr = &i;
    float **cctr = &ctr; // pointer-to-pointer


    printf("%p\n",cctr);
    printf("%p\n",ctr);
    printf("%f\n",*ctr);
    printf("%f\n",**cctr);  // final result



    // function calls

    // 1. Call by value(default)
    int num = 23;
    int xx = 88;
    int y = 43;

    int q = 234;
    int r = 324;

    int z = 4;

    // 1. Call by value(by-default function calling)
    cube(num); 
    printf("The value of n is %d\n",num); // Changing the value of num(variable) which is not possible by (call-by-value)

    // 2. Call by reference(by pointer)
    cube_pointer(&num);
    printf("The value of n is %d\n",num); // Changing the value of num(variable) which could be done by (call-by-reference) pointers




    // 1. Call by value(by-default function calling)
    swap(xx,y);
    printf("The value of a is %d, and the value of b is %d\n",xx,y); // Changing the value of xx,y(variable) which is not possible by (call-by-value)   

    // 2. Call by reference(by pointer)
    swap_pointer(&q,&r);
    printf("The value of a is %d, and the value of b is %d\n",q,r); // Changing the value of q,r(variable) which could be done by (call-by-reference) pointers


    // Will the address of output be same?
    printf("%p\n",&z); // 0X9878
    printAddress(z);


    // Write a program to print sum,product and average of two numbers
    int sum,product,avg;
    doWork(23,542,&sum,&product,&avg);
    printf("Sum = %d, Product = %d, Avg = %d\n",sum,product,avg);


    return 0;
}



// Call by value function

    // cube function
    void cube(int n){
        n = n * n * n;
        printf("The cube of n is %d\n",n);
    };

    // Swap the value of parameter a,b;
    void swap(int a, int b){
        int t = a;
        a = b;
        b = t;
        printf("The value of a is %d, and the value of b is %d\n",a,b);    
    }

// Call by reference(by pointer)

    // Cube function
    void cube_pointer(int* n){
        *n = (*n) * (*n);
        printf("The cube of n is %d\n",*n);
    };

    // Swap the value of parameter of parent function
    void swap_pointer(int *a, int *b){
        int t = *a;
        *a = *b;
        *b = t;
        printf("The value of a is %d, and the value of b is %d\n",*a,*b);    
    }





// Will the address of output be same?

void printAddress(int n){
    printf("%p\n",&n);
}


// Write a program to print sum,product and average of two numbers

    void doWork(int a,int b,int *sum,int *product,int *avg){

        *sum = a + b;
        *product = a * b;
        *avg = (a+b)/2;
    }