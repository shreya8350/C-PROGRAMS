#include <stdio.h>
int main(){
    int sum=0,n,arr[20];
    printf("Enter the no of elements to be added:");
    scanf("%d",&n);
    printf("Enter the numbers to be added");
    for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
		sum=sum+arr[i];    
    }
    printf("The sum is:%d",sum);

}

