#include <stdio.h>
#include <string.h>
void printString(char arr[]);
int printContentAndLength(char arr[]);
void takeInput(char str[]);
void passwordSalt();
void slice(char arr[],int m,int n);
void countVowels(char arr[]);



int main()
{
    char firstName[] = "Muhammad Talha";
    char secondName[] = "Khalid";

    printf("Q1\n");
    printString(firstName);
    printString(secondName);

    // Printing string without loop
    // printf("Q2\n");
    // char fullname[50]; // Max characters that can be stored is 50
    // printf("What's your full name: ");
    // scanf("%s", fullname);
    // printf("Your full name is: %s\n", fullname);


    // Gets and Puts. Printf and Scanf don't work perfectly with strings, it can only take and print characters without spaces.
    printf("Q3\n");
    char fName[60];
    printf("Enter your full Name: ");
    fgets(fName,60,stdin);
    printf("Your full name is: ");
    puts(fName);

    // String using Pointers. The advantage of using pointers with strings is you can REINITIALIZE string easily, but you cannot REINITIALIZE it with using character_arrays
    char *str = "Hello And Good Bye";
    printf("%s\n",str);
    str = "No, Welcome";
    printf("%s\n",str);

    // Q4:   Write a program to print string and its length
    char str_arr[160];
    printf("Write the program to print string and count its length: ");
    fgets(str_arr,150,stdin);

    printf("%d\n",printContentAndLength(str_arr));
    


    // Important Strings Function

    // 1. strlen() ---> Used to get length of character
    printf("String functions are running \n");
    printf("The output of strlen() function is %ld\n",strlen(str_arr)-1); // -1 is added, because FGETS putted null character(\0) at the end of string


    // 2. strcat() ---> Used to concatenate two strings and stored in first variable
    printf("\nStrcat() function in running\n");
    strcat(fName,str_arr);
    puts(fName);
    puts(str_arr);


    // 3. strcpy() ---> It copies one string to another
    printf("\nstrcpy() function is running \n");
    strcpy(fName,str_arr);

    puts(fName);


    // 4. strcmp() ---> Used to compare two strings
    printf("strcmp() is working \n");
    printf("The comparison of two strings are %d \n",strcmp("baoe","baoi"));
    // String Function Ended


    // Q5. Write a program to take input from '%c'
    printf("Character input function starting \n");
    char stri[200];
    takeInput(stri);
    
    // Q6. Find the salted form of a password entered by user if the salt "123" & added at the end
    printf("Salted Program starting \n");
    passwordSalt();


    // Q7. Write a function to get slice of function from m to n index.
    printf("Slice function starting \n");
    int m,n;
    char slice_arr[250];
    printf("Please enter your string: ");
    fgets(slice_arr,250,stdin);

    printf("Enter which string index you want to start: ");
    scanf("%d",&m);
    printf("Enter which string index you want to end: ");
    scanf("%d",&n);
    slice(slice_arr,m,n);


    //  Q8. Write a function to count all vowels in the string
    printf("Vowel Counting function start");
    char vowel_arr[300];
    printf("Please enter your sentence: ");
    fgets(vowel_arr,300,stdin);
    countVowels(vowel_arr);

    return 0;
}

// Q1:   Write a program to print characters of array using loop;

void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}


// Q4:  Write a program to print string and its length

int printContentAndLength(char arr[]){
    puts(arr);

    int count = 0;
    for(int i=0; arr[i] != '\0'; i++){
        count++;
    }
    return count-1;
}


// Q5. Write a program to take input from '%c'

    void takeInput(char str[]){
        char ch;
        printf("Enter the string you want to print: ");
        int i = 0;

        while(ch != '\n'){
            scanf("%c",&ch);
            str[i] = ch;   
            i++; 
        }

        str[i] = '\0';
        
        puts(str);

    }


    void passwordSalt(){
        printf("Enter the password you want to add: ");
        char password[50];
        char salted_password[50];
        char salt[] = "123";
        scanf("%s",password);
        strcpy(salted_password,password);
        strcat(salted_password,salt);


        printf("The updated password is %s\n",salted_password);
        printf("\n");
        
        int i = 0;

        char final_password[50];

        while (salted_password[i] == password[i]){
            final_password[i] = salted_password[i];
            i++;
        }

        final_password[i] = '\0';
        printf("The final password is : ");
        puts(final_password);
    }


    void slice(char arr[],int m,int n){
        while (m <= n)
        {
           printf("%c",arr[m]);
           m++;
        }
        printf("\n");
    }


    void countVowels(char arr[]){
        int i = 0;
        int count = 0;

        while(arr[i] != '\0'){
            if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u'){
                count++;
            }
            i++;
        }

        printf("Total number of vowel characters inside strings are %d\n",count);
    } 