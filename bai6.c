#include<stdio.h>
int sumArray(int arr[],int n){
	if(n <= 0){
		return 0;
	}
	return arr[n-1] +sumArray(arr,n-1);
}
int main(){
	int n;
	printf("nhap so phan tu cua mang :");
	scanf("%d",&n);
	if(n <= 0){
		printf("so phan tu khong hop le.");
		return 1;
	}
	int arr[n];
	for(int i = 0;i < n;i++){
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	int result = sumArray(arr,n);
	printf("tong la : %d",result);
	return 0;
}

