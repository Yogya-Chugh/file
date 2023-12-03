#include<stdio.h>
int main(){
    int array1[5];
    float sum=0,num=0;
    int i;
    for (i=0;i<5;i++){
        printf("a[%d]: ",i);
        scanf(" %d",&array1[i]);
        fflush(stdin);
    }
    for (i=0;i<5;i++){
        sum+=array1[i];
        num++;
    }
    printf("Average = %.2f",(sum/num));
    return 0;
}