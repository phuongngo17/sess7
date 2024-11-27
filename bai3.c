#include<stdio.h>
int main(){
	int arr[5]={10,15,20,25,30};
	int count = 0; bien de kiem tra co so chan hay k 
	printf("cac phan tu chan :\n");
	for(int i = 0 ; i < 5 ; i++){
		if(arr[i] % 2 == 0){
			printf("%d",arr[i]);
			count = 1 ; // kiem tra it nhat co 1 so chan 
		}
	}
	if(!count){
		printf("mang k co so chan \n");
	}

		return 0;
}
