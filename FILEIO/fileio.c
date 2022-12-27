#include<stdio.h>



int main(){
    FILE *fptr;
    FILE *fptr_1;
    FILE *nptr;
    FILE *aptr;
    FILE *wptr;

    wptr = fopen("write.txt","w"); // Write mode
    fptr = fopen("new1.txt","r"); // Read mode
    fptr_1 = fopen("new.txt","r");
    nptr = fopen("num.txt","r");
    aptr = fopen("append.txt","a"); // Append Mode to append data with existing data

    // If file does not exit pointer store NULL in it. 

    while(fptr == NULL){
    if(fptr == NULL){
        printf("File does not exist\n");
    }
    fptr = fopen("new1.txt","w"); // Write mode -> Creating blank new file whether its exists or not. (If it exists deletes it and create new file)
    };

    printf("Char File printing starting\n");
    char ch;
    fscanf(fptr_1,"%c",&ch);  // Getting single input character from file
    printf("%c",ch); // prints single character from the file
    fscanf(fptr_1,"%c",&ch);  // Getting single input character from file
    printf("%c",ch); // prints single character from the file
    fscanf(fptr_1,"%c",&ch);  // Getting single input character from file
    printf("%c",ch); // prints single character from the file
    fscanf(fptr_1,"%c",&ch);  // Getting single input character from file
    printf("%c",ch); // prints single character from the file
    fscanf(fptr_1,"%c",&ch);  // Getting single input character from file
    printf("%c",ch); // prints single character from the file
    fscanf(fptr_1,"%c",&ch);  // Getting single input character from file
    printf("%c",ch); // prints single character from the file

    printf("\n");

    int num;
    printf("Int File printing staring\n");

    fscanf(nptr,"%d",&num);
    printf("%d ",num);

    fscanf(nptr,"%d",&num);
    printf("%d ",num);

    fscanf(nptr,"%d",&num);
    printf("%d ",num);

    fscanf(nptr,"%d",&num);
    printf("%d ",num);

    fscanf(nptr,"%d",&num);
    printf("%d ",num);


    printf("\nAppending program starting\n");


    fprintf(aptr,"%c",' '); // Appending text with (fprintf) not printf
    fprintf(aptr,"%c",'D'); // Appending text with (fprintf) not printf
    fprintf(aptr,"%c",'E');
    fprintf(aptr,"%c",'V');
    fprintf(aptr,"%c",'E');
    fprintf(aptr,"%c",'L');
    fprintf(aptr,"%c",'O');
    fprintf(aptr,"%c",'P');
    fprintf(aptr,"%c",'E');
    fprintf(aptr,"%c",'R');

    fprintf(fptr,"%c",'N');
    fprintf(fptr,"%c",'e');
    fprintf(fptr,"%c",'k');

    // fgetc and fputc is similar to fscanf and fprintf, but only work for characters
    printf("\n fegetc and fputc starting \n");

    printf("%c",fgetc(fptr_1));
    printf("%c",fgetc(fptr_1));
    printf("%c",fgetc(fptr_1));
    printf("%c",fgetc(fptr_1));
    printf("%c",fgetc(fptr_1));
    printf("%c",fgetc(fptr_1));


    fputc(' ',wptr);
    fputc('C',wptr);
    fputc('O',wptr);
    fputc('D',wptr);
    fputc('E',wptr);
    fputc('R',wptr);
    fputc('S',wptr);

    printf("\nFull file reading starting\n");
    // The advantage of (fgetc) is, it returns (EOF);

    // Reading whole file
    char chf;
    chf = fgetc(fptr);
    while(chf != EOF){
        printf("%c",chf);
        chf = fgetc(fptr);
    }
    printf("\n");


    printf("\nInteger reading program starting\n");
    

    fclose(fptr);
    fclose(fptr_1);
    fclose(nptr);
    fclose(wptr);
    return 0;
}