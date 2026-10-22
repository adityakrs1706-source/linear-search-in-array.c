#include<stdio.h>
int main(){
    int n,key,found=0;
    printf("enter size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } printf("enter key value");
    scanf("%d",&key);
     for(int i=0;i<n;i++){
        if(arr[i]==key){
            printf("key found at %d index\n",&i);
            found=1;
            break;
        }
    } if(found==0){
        printf("key not found\n");
    } 
    return 0;
    
}