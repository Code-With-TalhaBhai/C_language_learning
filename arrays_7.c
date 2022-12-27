#include<stdio.h>
void arraryFnIndex(int arr[],int num);
void arrayFnPointers(int *arr,int num);
void arrayFnOdd(int arr[],int size);
void arrayReverse(int array[],int size);
void fibonacci_array(int n);
int findLarge(int arr[],int size);
void multiArray(int num1,int num2);




int main(){

    int marks[3];
    marks[0] = 234;
    marks[2] = 543;
    marks[1] = 8902;
    printf("%d\n%d\n%d\nmarks",marks[0],marks[1],marks[2]);

    // char str[][5] = {"First","Second","Third"};
    char str[3][10] = {"First","Second","Third"};
    // str[0] = "First";
    // str[1] = "Second";
    // str[2] = "Third";

    printf("\n");
    printf("%s %s %s\n",str[0],str[1],str[2]);


    int logs[3];
    logs[0] = 23344;
    logs[2] = 5343;
    logs[1] = 34902;
    logs[3] = 432;
    printf("%d\n%d\n%d\n%d\nlogs",logs[0],logs[1],logs[2],logs[3]);

    int metrices[] = {234,5435,634};
    printf("%d\n%d\n%d\n",metrices[0],metrices[1],metrices[2]);


    int checkInput[3];
    printf("Value is ");
    scanf("%d",&checkInput[0]);
    printf("Value is ");
    scanf("%d",&checkInput[1]);
    printf("Value is ");
    scanf("%d",&checkInput[2]);
    printf("%d\n%d\n%d\n",checkInput[0],checkInput[1],checkInput[2]);

    // Write a program to enter price of 3 items & print their final cost with gst of 18%.

    float prices[3];
    printf("Enter price of 1st item: ");
    scanf("%f",&prices[0]);
    printf("Enter price of 2nd item: ");
    scanf("%f",&prices[1]);
    printf("Enter price of 3rd item: ");
    scanf("%f",&prices[2]);
    printf("Price of 1st item inclued gst is %f\n Price of 2nd item inclued gst is %f\n Price of 3rd item inclued gst is %f\n",prices[0]+0.18*prices[0],prices[1]+0.18*prices[1],prices[2]+0.18*prices[2]);


    // Pointer arithmetic operations(addition or subtraction can be performed)
    int age = 24;
    int *ptr = &age;
    printf("%u\n",ptr);
    printf("%d\n",*ptr);
    ptr++;  // int increases 4 bytes
    printf("%u\n",ptr);
    printf("%d\n",*ptr); // Inside Value of pointer changes after change of memory address

    ptr--; // int decreses 4 bytes
    printf("%u\n",ptr);
    printf("%d\n",*ptr);



    float fl_age = 234.00;
    float *ftr = &fl_age;

    printf("%u\n",ftr);
    printf("%f\n",*ftr);
    ftr++; // float increases 4 bytes
    printf("%u\n",ftr);
    printf("%f\n",*ftr); // Inside Value of pointer changes after change of memory address


    char ch = '*';
    char *ctr = &ch;

    printf("character\n");
    printf("%u\n",ctr); // character increases 1 byte
    printf("%c\n",*ctr); // character increases 1 byte
    ctr++;
    printf("%u\n",ctr);
    printf("%c\n",*ctr); // Inside Value of pointer changes after change of memory address
    

    printf("Next Program\n");
    // Write a program to find maximum of two numbers using pointers
    int first = 12;
    int *fir = &first;

    int second = 18;
    int *sec = &second;

    int third = 234;
    int *thi = &third;
    
    // printf("first is %u, second is %u, and third is %u\n",fir,sec,sec-fir);
    printf("first is %u, second is %u, and third is %u\n and %u and %u equal %u\n",fir,sec,thi,sec-fir,thi-sec);


    // Next Program

    // Printing content of array with index
    int arr[3];
    for(int i=0; i<=2; i++){
        printf("Enter: ");
        scanf("%d",arr[i]);
    }

    // Printing content of array with pointers
    int num;
    printf("Enter how many elements you want to print in array: ");
    scanf("%d",&num);
    int array[num];

    int *arr_ptr = &array[0];

    for(int z=0; z<num; z++){
        printf("Enter Value %d: ",z+1);
        scanf("%d",arr_ptr+z);
    }

    for(int x=0; x<num; x++){
        printf("%d\n",*(arr_ptr+x));
    }


    // Array with Function
    int InArr[] = {32,43,51,234,532}; // 5 leng
    int myArr[] = {1,2,423,5,3247,3,9,11}; // 8 leng
    arraryFnIndex(InArr,5);
    arrayFnPointers(&InArr,5); 
    int size = sizeof(myArr)/sizeof(myArr[0]);
    arrayFnOdd(myArr,size);   

    size = sizeof(InArr)/sizeof(InArr[0]);
    arrayFnOdd(InArr,size);   


    // Write a function to reverse an array;
    // int samArr[] = {89,423,4,53,23,532,53,32};
    int samArr[] = {89,423,4,2324,432,532,53,32};
    size = sizeof(samArr)/sizeof(samArr[0]);
    arrayReverse(samArr,size);
    fibonacci_array(15);
    printf("This is the largest number in array : %d\n",findLarge(samArr,size));

    multiArray(3,5);

    return 0;
}

    // Array with Function Index
 void arraryFnIndex(int arr[],int num){
        for(int j=0; j<num; j++){
            printf("%d\t",arr[j]);
            if(j+1 == num){
                printf("\n");
            }
        }
    }

    // Array with Pointers
 void arrayFnPointers(int *arr,int num){
    for(int j=0; j<num; j++){
        printf("%d \t",*(arr+j));
    }
    printf("\n");
 }


 // Write a function to find out odd numbers in an array
 void arrayFnOdd(int arr[],int size){

    for(int i=0; i<size; i++){
        if(arr[i]%2 == 1){
            printf("%d is odd number in array\n",arr[i]);
        }
    }
}

//   void arrayReverse(int *array,int size){
  void arrayReverse(int array[],int size){
    printf("\nReverseArrayFunction\n");
    int tmp;

    for (int i = 0; i < (size/2); i++)
    {   
        tmp = array[i];
        array[i] = array[size-(i+1)];
        array[size-(i+1)] = tmp;
        // array[i] = array[(size-i)];
        // printf("%d Index \t Value %d; ",i,array[(size-i)]);
    }

    printf("\nPrinting Array\n");

    // {89,423,4,53,532,53,32}


    for(int j=0; j<size; j++){
        printf("%d\n",array[j]);
    }
}


// Write a function to print fibonacci array up to n.
 void fibonacci_array(int n){
    int fab[n];
    for(int i=0; i<n; i++){
        if(i == 0 || i == 1){
            fab[i] = i;
            printf("The number is %d\n",i);
        }
        else{
            fab[i] = fab[i-1] + fab[i-2];
        }
    }

    for (int i = 0; i < n; i++)
    {
       printf("The number is %d\n",fab[i]);
    }
}

// Write a program to find largest number in an array

    int findLarge(int arr[],int size){
        int tmp;
        for(int i=0; i<size; i++){
            if(arr[i]>tmp){
                tmp = arr[i];
            }
        }
        return tmp;
    }



// Creating a 2d array in which 1st store table of 2, and second store table of 3.

    void multiArray(int num1,int num2){
        printf("Starting Printing Array");

        int table2dArray[2][10];

        for(int i=0; i<10; i++){
            table2dArray[0][i] = num1*(i+1);
        }

        for(int j=0; j<10; j++){
            table2dArray[1][j] = num2*(j+1);
        }

        for(int k=0; k<10; k++){
            printf("%d \t",table2dArray[0][k]);
        }

        printf("\n");

        for(int z=0; z<10; z++){
            printf("%d \t",table2dArray[1][z]);
        }
    }
