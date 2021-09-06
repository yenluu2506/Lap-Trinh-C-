#include <stdio.h>
void Nhap(int a[], int n){
	for(int i=1; i<=n; i++){
		printf("Nhap a[%d]= ", i);
		scanf("%d", &a[i]);
	}
}
void Xuat(int a[], int n){
	for(int i=1; i<=n; i++){
		printf("%d\t", a[i], i);
		if(i%5==0){
			printf("\n");
		}
	}
}
int main(){
	int a[100], n;
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
	}while(n<0);
	Nhap(a, n);
	printf("Day so vua nhap la: \n");
	Xuat(a, n);
}
