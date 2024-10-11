#include<stdio.h>
int main(){
int n;
printf("enter the size of the array:\n");
scanf("%d",&n);
int arr[n];
printf("enter the elements of the size:\n");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int count[n];int j=0;
for(int i=1;i<n-1;i++){
    if((arr[i]>arr[i-1])&&arr[i]>arr[i+1]){
        count[j++]=arr[i];
    }
}
printf("the result is:");
for(int i=0;i<j;i++){
    printf("%d\t",count[i]);
}
}

