#include<stdio.h>
int main(){
	int arr[]={1,2,3,4,5,6,78,9,10};
	int length = sizeof(arr)/sizeof(arr[0]);
	printf("phan tu trong mang la :");
	for(int i =0;i<length;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
	printf("do dai cua mang la: %d\n",length);
		return 0;
	
}
