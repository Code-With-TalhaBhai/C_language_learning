#include<stdio.h>
#include <ctype.h>
void vowel_case(char arr[]);
void highest_occurence(char arr[]);
void blank_spaces(char arr[]);



int main(){

    // First Function starting
    printf("First function is running\n");
    char vowelCase_arr[300];
    printf("Enter the string: ");
    fgets(vowelCase_arr,300,stdin);
    vowel_case(vowelCase_arr);
    // First Function ending


    // Second Function starting

    // Second Function ending


    // Third Function starting
    printf("Enter the string you want your spaces to be removed: ");
    char space_arr[300];
    fgets(space_arr,300,stdin);
    blank_spaces(space_arr);

    // Third Function ending

    return 0;
}



// Q1. Write a function to convert all lowercase vowel letters to uppercase letters in string

    void vowel_case(char arr[]){
        int i = 0;
        while(arr[i] != '\0'){
            if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u'){
                arr[i] = toupper(arr[i]);
            }
            i++;
        }
        puts(arr);
    }


// Q2. Write a program to print the highest frequency(occurrence) character in a string.

    void highest_occurence(char arr[]){
        
    }


// Q3. Write a program to remove blank spaces in a string
    void blank_spaces(char arr[]){
        int i = 0;

        while(arr[i] != '\0'){
            if(arr[i] == ' ' && arr[i] == '\t'){
                arr[i] = '\t';
            }
            i++;
        }
        puts(arr);

    }