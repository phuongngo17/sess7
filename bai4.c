#include<stdio.h>
int main(){
	int n;
	printf("yeu cau nguoi dung nhap vao so phan tu cua mang: \n");
	scanf("%d",&n);
	
	int arr[n];
	printf("nhap vao cac phan tu cua mang: \n");
	for(int i=0; i<n;i++){
	    printf("phan tu thu %d:\n",i+1);
	    scanf("%d",&arr[i]);
	}
	printf("cac phan tu trong mang: \n");
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	return 0;
}
