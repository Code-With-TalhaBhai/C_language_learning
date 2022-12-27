#include<stdio.h>
#include<string.h>
#include <ctype.h>



struct student {
    int roll;
    float cgpa;
    char name[100];
};



// TypesAlias with ("typedef") keyword
typedef struct address {
    int house_no;
    char block;
    char city[30];
    char state[30];
} ad;

// Function prototype
void struct_fn(struct student t1);
void struct_ptr(struct student *r1,int num);



int main(){

    // Write a program to store 3 students data
    struct student s1;
    struct student s2;
    struct student s3;

    s1.roll = 23;
    s1.cgpa = 3.7;
    strcpy(s1.name,"Talha"); // string cannot store directly in structures


    printf("%d\n",s1.roll);
    printf("%f\n",s1.cgpa);
    printf("%s\n",s1.name);


    printf("\n");

    s2.roll = 43;
    s2.cgpa = 2.7;
    strcpy(s2.name,"Khizer"); // string cannot store directly in structures


    printf("%d\n",s2.roll);
    printf("%f\n",s2.cgpa);
    printf("%s\n",s2.name);


    printf("\n");


    s3.roll = 63;
    s3.cgpa = 1.7;
    strcpy(s3.name,"Abraar"); // string cannot store directly in structures


    printf("%d\n",s3.roll);
    printf("%f\n",s3.cgpa);
    printf("%s\n",s3.name);


    // Arrays of Structures
    struct student st[5];
    st[0].roll = 32;
    st[1].roll = 62;
    st[2].roll = 5;
    st[3].roll = 3652;
    st[4].roll = 3752;

    st[0].cgpa = 345.4534;
    st[1].cgpa = 345.4531;
    st[2].cgpa = 345.4532;
    st[3].cgpa = 345.4533;
    st[4].cgpa = 345.4534;
    st[5].cgpa = 234.1;
    st[18].cgpa = 223.6453;


    strcpy(st[0].name,"ks");
    strcpy(st[1].name,"kfds;s");
    strcpy(st[2].name,"ks");
    strcpy(st[3].name,"ks");
    strcpy(st[4].name,"ks");

    printf("\n");


    printf("%d\n",st[0].roll);
    printf("%s\n",st[0].name);
    printf("%f\n",st[0].cgpa);
    printf("\n");
    printf("%d\n",st[1].roll);
    printf("%s\n",st[1].name);
    printf("%f\n",st[1].cgpa);
    printf("\n");
    printf("%d\n",st[2].roll);
    printf("%s\n",st[2].name);
    printf("%f\n",st[2].cgpa);
    printf("\n");


    printf("%f",st[5].cgpa);
    printf("\n");
    printf("%f",st[18].cgpa);

    printf("\n");
    printf("\n");


    // Assigning all values in single line
    struct student single = {234,34.2423,"Zeeshan"};
    printf("%d",single.roll);
    printf("%f",single.cgpa);
    printf("%s",single.name);

    printf("\n");


    struct student *ptr = &single;

    printf("%d\n",(*ptr).roll);
    printf("%f\n",ptr->cgpa); // Same as above ((*ptr).roll ==== ptr->roll)
    printf("%d",ptr->roll);
    printf("%s",ptr->name);

    printf("\n");

    ptr->roll = 6354;
    printf("%d\n",ptr->roll);
    printf("%d\n",single.roll);

    printf("function starts running \n");

    struct_fn(s1);

    printf("Main Roll Number: %d\n",s1.roll);



    struct student *fn = &s1;

    struct_ptr(fn,1122);
    printf("Pointer inside main %d\n",s1.roll);

    struct_ptr(&s1,15); // Both are same
    printf("Pointer inside main %d\n",s1.roll);


    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("Address Struct");
    printf("\n");
    printf("\n");


    ad h1;
    h1.house_no = 234;
    h1.block = 'B';
    strcpy(h1.city,"Lahore");
    strcpy(h1.state,"Pakistan");

    printf("%d\n",h1.house_no);
    printf("%c\n",h1.block);
    printf("%s\n",h1.city);
    printf("%s\n",h1.state);


    // Input in structs
    char ch;
    ad h2;
    printf("Enter House No: ");
    scanf("%d",&h2.house_no);
    // printf("Enter Block No: ");
    // // scanf("%c",&h2.block);
    // h2.block = getc(stdin);
    // printf("\n");
    printf("Enter City Name: ");
    scanf("%s",h2.city);
    printf("Enter State Name: ");
    scanf("%s",h2.state);


    // printf("The h2 struct is %d, %c, %s, and %s",h2.house_no,h2.block,h2.city,h2.state);
    printf("The h2 struct is %d, %s, and %s\n",h2.house_no,h2.city,h2.state);

    return 1;
}



void struct_fn(struct student f1){
    f1.roll = 234;
    printf("Function Inside Roll Number: %d\n",f1.roll);
}



void struct_ptr(struct student *f2,int num){
    f2->roll = num;
    printf("Pointer Inside Roll Number %d\n",f2->roll);
}