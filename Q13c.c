#include<stdio.h>
int main(){
    int array1[10];
    int i,n,size=5;
    for (i=0;i<5;i++){
        printf("a[%d]: ",i);
        scanf(" %d",&array1[i]);
    }
    printf("Number of insertions: ");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("Enter element: ");
        scanf("%d",&array1[size]);
        size++;
    }
    for (i=0;i<size;i++){
        printf("%d\n",array1[i]);
    }
    return 0;
}