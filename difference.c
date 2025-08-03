#include <stdio.h>
int main(){
	int difference=0,n,arr[20];
	printf("Enter the no of elements whose difference is to be found:");
	scanf("%d",&n);
	printf("Enter the elements");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		difference=arr[i]-difference;
	}
	printf("The difference is:%d",difference);
}
