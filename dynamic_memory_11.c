#include<stdio.h>
#include<stdlib.h> // must use this library to manage dynamic memory

// dynamic memory functions
//  1. malloc --> Memory Allocation
//  2. calloc --> Continouse Allocation
//  3. free (We use it to free memory allocated by malloc and calloc)
//  4. realloc --> Re-Allocation (Reallocate (increase or decrease) memory using the same pointer and size)


int main(){

    // malloc
    int *ptr;
    ptr = (int *)malloc(5*sizeof(int));

    ptr[0] = 23;
    ptr[1] = 234;
    ptr[2] = 63;
    ptr[3] = 2754;
    ptr[4] = 433;

    printf("%d\n",ptr[0]);
    printf("%d\n",ptr[1]);
    printf("%d\n",ptr[2]);
    printf("%d\n",ptr[3]);
    printf("%d\n",ptr[4]);
    

    // calloc
    float *cptr;
    cptr = (float *)calloc(5,(sizeof(float)));
    cptr[0] = 23.32;
    printf("%f\n",cptr[0]);
    printf("%f\n",cptr[1]);
    printf("%f\n",cptr[2]);


    int *n,num;
    printf("How many blocks you want to: ");
    scanf("%d",&num);
    n = (int *)calloc(num,(sizeof(int)));

    for (int i = 0; i < num; i++)
    {
        printf("%d\n",n[i]);
    }
    
    free(n); // free up space in it

    n = (float *)calloc(num,sizeof(float));

    for(int i = 0; i < num; i++){
        printf("%f\n",n[i]);
    }

    printf("Reallocation started\n");

    n = realloc(n,5);

    for(int i = 0; i < 5; i++){
        printf("%f\n",n[i]);
    }


    // Allocate memory for 500 integers using calloc & then store first 500 natural number in that space
    printf("Integer program starting");
    int *integers;
    integers = (int *)(calloc(500,sizeof(int)));

    for (int i = 0; i < 500; i++)
    {
        integers[i] = i+1;
    }

    for(int i=0; i<500; i++){
        printf("Natural numbers are %d\n",integers[i]);
    }
    

    return 0;
}

/*
Q1:  What is dangling pointers?
Ans:  A dangling pointer is a pointer which has stored the address of variable
      which has terminted or deleted. It's a common bug in the program to acess
      variable address which is deleted or free.      

*/

/*
Q2: Which is better malloc or calloc?

Ans:    malloc: Malloc stands for (Memory Allocation). It creates a single memory block,
        It takes one argument, It is fast and has high time efficiney, It is used to indicate
        memory allocation.

        calloc: Calloc stands for (Continouse Allocation). It creates multiple continouse memory blocks,
        It takes two arguments(how many elements, size of element), It is slower than malloc and has low
        time efficiency. It is used to indicate continouse memory allocation.
*/


/*
Q3: What is memory leak in 'C'?

Ans:   Memory leak in 'C' means we created too much memory in heap, and forget to
    delete it or (free) it, and it's impossible for RAM to manage it. 

    For example: We created a infinte loop which never ends and takes infinite
                 memory causes the memory leak.


*/