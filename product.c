#include <stdio.h>
int main(){
	int arr[30],n,product=1;
	printf("Enter the number of how many elements product is to be found:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		product=product*arr[i];
	}
	
	printf("The product is: %d ",product);
	return 0;
}

