#include<stdio.h>
void get_student_input(char *name,char *class,float *cgpa);
void add_student_data(FILE *ptr,char name[],char class[],float cgpa);


// Write a program that stores student bio data in a table structure
int main(){
        FILE *rptr; // reading file
        FILE *sptr; // writing file
        FILE *aptr; // appending file
        rptr = fopen("student.txt","r");

    char choice;
    printf("Would you like to append 'A' or 'W' new file: ");
    scanf("%c",&choice);

    // getting input for file
        char name[60];
        char class[25];
        float cgpa;

    printf("\nInput program starting\n");
    get_student_input(&name,&class,&cgpa);

    if(choice == 'W'){
    // Write a program to add student data in a file
    sptr = fopen("student.txt","w");
    fprintf(sptr,"Name\t\tClass\t\tCgpa\n");
        printf("Student program starting\n");
        add_student_data(sptr,name,class,cgpa);
        fclose(sptr);
    }
    else if(choice == 'A'){
        aptr = fopen("student.txt","a");
        if(rptr == NULL){
            fprintf(aptr,"Name\t\tClass\t\tCgpa\n\n");
        }

    // Appending data to existing file
        printf("Student Appending program starting\n");
        add_student_data(aptr,name,class,cgpa);
        fclose(aptr);
    }
    else{
        printf("Press either 'W' or 'A' ");
    }

    return 0;
}


void get_student_input(char *name,char *class,float *cgpa){
    printf("Enter student name: ");
    scanf("%s",name);

    printf("Enter student class: ");
    scanf("%s",class);

    printf("Enter student cgpa: ");
    scanf("%f",cgpa);

}



void add_student_data(FILE *ptr,char name[],char class[],float cgpa){
    fprintf(ptr,"%s\t%s\t%f\n",name,class,cgpa);
}



