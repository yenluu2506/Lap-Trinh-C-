#include <stdio.h>
void Nhapmang(float a[], int n){
	for (int i=0; i<n; i++){
		printf("a[%d]:", i);
		scanf("%f", &a[i]);
	}
}
void Xuatmang(float a[], int n){
	for (int i=0; i<n; i++){
		printf("%7.2f", a[i]);
	}
}
int Sophantuduong(float a[], int n){
	int dem = 0;
	for (int i=0; i<n; i++){
		if (a[i] > 0){
			dem++;
		}
	}
}

int main (){
	float a[1000];
	int n;
	printf("\nNhap vao so luong phan tu n: ");
	scanf("%d", &n);
	Nhapmang(a,n);
	printf("\nMang vua nhap la: ");
	Xuatmang(a,n);
	printf("\nSo phan tu duong la: %d", Sophantuduong(a,n));
}
