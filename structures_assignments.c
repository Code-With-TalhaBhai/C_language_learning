#include<stdio.h>
#include<string.h>
struct vector
{
    int x;
    int y;
};

struct complex{
    int real;
    char imaginary[5];
    char complex_number[15]; // Addition of real and imaginary number(result)
};


typedef struct bank_account {
    char name[100];
    int account_no;
} bank_acc;

struct complex get_complex_fn();
void print_complex_fn(struct complex cl);


void vector_input(struct vector *v1, struct vector *v2);

int main(){

    struct vector v1;
    struct vector v2;

    bank_acc c1 = {"Talha",10000};
    bank_acc c2 = {"Bilal",140532};

    printf("The name of customer is %s and amount in its bank account is $%d\n",c1.name,c1.account_no);
    printf("The name of customer is %s and amount in its bank account is $%d\n",c2.name,c2.account_no);

    printf("\n");


    // int x,y;
    printf("Vector program starting");
    printf("Enter the x-co-ordintates of v1: ");
    scanf("%d",&v1.x);
    printf("Enter the y-co-ordintates of v1: ");
    scanf("%d",&v1.y);

    printf("\n");
    

    printf("Enter the x-co-ordinates of v2: ");
    scanf("%d",&v2.x);
    printf("Enter the y-co-ordinates of v2: ");
    scanf("%d",&v2.y);

    struct vector *vec1 = &v1;
    struct vector *vec2 = &v2;

    vector_input(&v1,&v2);
    vector_input(vec1,vec2);
    

    // Create a structure to store complex numbers
    printf("Complex program started\n");
    
    struct complex clx_1;
    clx_1 = get_complex_fn();

    print_complex_fn(clx_1);


    // printf("real number is %d and %c",clx_1.real,clx_1.imaginary);


    return 0;
};


// Write a program to calculate the sum of vectors

void vector_input(struct vector *v1, struct vector *v2){
        // int x_coordinates = v1->x + v2->x;
        // int y_coordinates = v1->y + v2->y;

        int x_coordinates = (*v1).x + (*v2).x; // Above and below, both are same
        int y_coordinates = (*v1).y + (*v2).y;
        printf("The x-coordinate is %d, and y-coordinate is %d\n",x_coordinates,y_coordinates);
};



struct complex get_complex_fn(){
    struct complex complex_1;
    complex_1.real = 23;
    // complex_1.imaginary = 'xy';
    char tmp[15];
    strcpy(complex_1.imaginary,"xy"); // copy string to struct imaginary
    sprintf(tmp,"%d",complex_1.real); // converting int(complex_1.real) to string(tmp)
    strcpy(complex_1.complex_number,strcat(tmp,complex_1.imaginary));
    return complex_1;    
}


void print_complex_fn(struct complex cl){
    printf("The real part is %d and imaginary part is %s \n",cl.real,cl.imaginary);
    printf("The complex number is \" %s \" \n",cl.complex_number);
}


/* Write a program to store the marks of 30 students in class.
    What will you use?

    a. array of 30 floats
    b. structure
*/
