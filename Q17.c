#include<stdio.h>
int main(){
    int array1[10]={1,2,3,4,5,6,7,8,9,10};
    int *i,n;
    i=&array1[0];
    for (n=0;n<10;n++){
        printf("%d\n",*i);
        i++;
    }
}