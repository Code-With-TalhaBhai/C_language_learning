#include<stdio.h>


int main(){
    FILE *odd;
    odd = fopen("odd.txt","w");
    // Write a program that prints all odd numbers from 1 to n in a file
    int n,i;
    printf("Enter N number: ");
    scanf("%d",&n);

    i = 1;
    while(i<=n){
        if(i%2 == 1){
            fprintf(odd,"%d\n",i);
        }
        i++;
    }


    // Write a program which takes numbers from file and replace them with their sum
    FILE *rep;
    FILE *wep;
    rep = fopen("rep.txt","r");

    int m,j;
    fscanf(rep,"%d",&m);
    printf("%d\n",m);
    fscanf(rep,"%d",&j);
    printf("%d\n",j);
    fclose(rep);


    int sum = m + j;
    wep = fopen("rep.txt","w");
    fprintf(rep,"%d",sum);

    fclose(wep);
    return 0;
}