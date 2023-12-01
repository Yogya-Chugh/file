#include<stdio.h>
int main(){
    int array1[5];
    int i;
    for (i=0;i<5;i++){
        printf("a[%d]: ",i);
        scanf(" %c",&array1[i]);
    }
    return 0;
}