#include<stdio.h>
int main(){
	int arr[5]={10,5,20,49,8};
	int max =arr[0];
	int min = arr[0];
	for(int i=1 ; i<5; i++){
		if(arr[i]>max){
			max =arr[i];
		}
		if(arr[i]<min){
			min =arr[i];
		}
	}
	printf("phan tu lon nhat trong mang: %d \n",max);
	printf("phan tu nho nhat trong mang: %d",min);
	return 0;
	
}
