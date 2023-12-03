#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char str1[50];
    int len,i,j,check=0;
    printf("Enter string: ");
    gets(str1);
    len=strlen(str1);
    for (i=0;i<len;i++){
        if (str1[i]!=str1[len-i-1]){
            check=1;
            break;
        }
    }
    if (check==1){
        printf("The string \"%s\" is not a palindrome",str1);
    }
    else{
        printf("The string \"%s\" is a palindrome",str1);
    }
    return 0;
}