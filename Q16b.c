#include<stdio.h>
int main(){
    int arr1[]={1,2,3,4,5,6,7,8,9,10};
    int *p,temp,i;
    p=&arr1[0];
    for (i=0;i<10;i++){
        temp=*p;
        printf("%d\n",temp);
        p++;
    }
}