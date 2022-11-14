#include<stdio.h>


int main(){

int *ptr;
int x;


ptr = &x; // ptr value is the address of x
*ptr = 0; // *ptr is the place(address of x) where 0 will be stored. 


printf("x = %d\n",x); // returns 0;
printf("*ptr =%d\n", *ptr); // returns 0;


*ptr += 5;
printf("x = %d\n",x); // returns 5;
printf("*ptr =%d\n", *ptr); // returns 5;

(*ptr)++;
printf("x = %d\n",x); // returns 6;
printf("*ptr =%d\n", *ptr); // returns 6;

return 0;
}