#include<stdio.h>

int main(){
    char s[10]="Well done!";
    int arr[2] = {1, 2};
    char S[20];

    int p;
    if(s[0]=='W'){
        if(s[1]=='e'){
            if(s[2]=='l'){
                printf("Well done!");
            }

            else printf("Bug\n");
        }
        else printf("Bug1\n");
    }

    else printf("Bug2\n");

}
