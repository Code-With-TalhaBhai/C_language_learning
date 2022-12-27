#include<stdio.h>
#include<string.h>
/*
Make a system that can store information of all
students, teachers & staff of your college in the form
of structures
*/

struct students {
    int st_id;
    char name[100];
    char *subjects[10];
    int attendance;
    float cgpa;
};

struct teachers {
    int teacher_id;
    char name[50];
    char subject[50];
    float salary;
    int attendance;
};


struct school_system{
    struct teachers teachers[5];
    char *subjects[12];
    struct students students[5];
};

void student_data(int id,struct school_system st1);

// Language Arts
// Mathematics
// Science
// Health
// Handwriting
// Physical Education
// Accounting
// Law
// Economy



int main(){

    struct school_system sst_1;
    char subjects[12][30] = {"Computer Science","Physics","Chemistry","Math","Economics","Functional English","Information & Communication","Law","Business","Accounting","Finance","Marketing"};
    char teachers[35][30] = {"Ashfaq","Ahmed","Nasir","Qurtulain","Naveeda","Shahbaz","Ayaz","Asif","Mahver"};
    char students[55][30] = {"Ali","Ahmed","Saad","Farukh","Talha","Abrar","Khizer","Bajwa","Tanveer","Nasir","Kazmi","Ghalib","Iqbal","Shaheen","Afridi","Harris","Rauf","Hafeez","Shoib","Sania","Wasim","Waqar","Younis","Misbah","Yassir","Akmal","Nouman"};

    // For Subjects
    // for (int i = 0; i < (sizeof(subjects)/sizeof(subjects[0])); i++)
    // {
    //     strcpy(sst_1.subjects[i] , subjects[i]);
    //     printf("%s\n",sst_1.subjects[i]);
    // }

    // For teachers
    printf("Memory check: %s\n",subjects[11]);
    printf("Memory check: %s\n",subjects[12]);
    printf("Memory check: %s\n",subjects[13]);

    for (int i = 0; i < (sizeof(teachers)/sizeof(teachers[0])); i++)
    {
        strcpy(sst_1.teachers[i].name , teachers[i]);
        // printf("%s\n",sst_1.teachers[i].name);
    }

    // For students
    for (int i = 0; i < (sizeof(students)/sizeof(students[0])); i++)
    {
        strcpy(sst_1.students[i].name , students[i]);
        // printf("%s\n",sst_1.students[i].name);
    }


    



    // sst_1.students[0].st_id = 1;
    // sst_1.students[0].attendance = 89;
    // strcpy(sst_1.students[0].name,"Talha");
    // sst_1.students[0].cgpa = 2.34;
    // printf("Student Data\n");
    // for(int i=0; i<(sizeof(subjects)/sizeof(subjects[0])); i++){
    //     sst_1.subjects[i] = subjects[i];
    // }
    // for(int i=0; i<5; i++){
    //     sst_1.students[0].subjects[i] = subjects[i]; 
    //     printf("%s\n",sst_1.students[0].subjects[i]);
    // }

    // printf("id: %d\n",sst_1.students[0].st_id );
    // printf("Percentage: %d %%\n",sst_1.students[0].attendance );
    // printf("Name: %s\n",sst_1.students[0].name);
    // printf("cgpa: %f\n",sst_1.students[0].cgpa );
    


    // printf("teacher data starting\n");
    // sst_1.teachers[0].teacher_id = 101;
    // sst_1.teachers[0].attendance = 92;
    // strcpy(sst_1.teachers[0].name , "Orya Maqbool");
    // sst_1.teachers[0].salary = 234.32;
    // strcpy(sst_1.teachers[0].subject , "Physics");

    // printf("Teacher id: %d\n",sst_1.teachers[0].teacher_id);
    // printf("Attendance: %d\n%%",sst_1.teachers[0].attendance);
    // printf("Name: %s\n",sst_1.teachers[0].name);
    // printf("Salary: %f\n",sst_1.teachers[0].salary);
    // printf("Subject: %s\n",sst_1.subjects[1]);


    student_data(23,sst_1);


    return 0;
}


/*
    Write a program to that enters student name, which will return its bio,
     subjects and teachers data.
*/


void student_data(int id,struct school_system st1){
    printf("\n");
    printf("Student function starting\n");
    printf("%s\n",st1.students->name);
    printf("%d\n",id);
}