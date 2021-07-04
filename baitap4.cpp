#include<stdio.h>

void Nhapmang(int a[], int n){
	for (int i=0; i<n; i++){
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}
void Xuatmang (int a[], int n){
	for (int i=0; i<n; i++){
	printf("%5d", a[i]);
	} 
}
void Sapxepgiamdan(int a[], int n){
	int tam;
	for(int i=0; i<n; i++){
		for (int j=i+1; j<n; j++){
			if (a[i]<a[j]){
				tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
		}
	printf("%5d", a[i]);
	}
}
int main(){
	int a[1000];
	int n;
	printf("Nhap so phan tu trong mang: ");
	scanf("%d", &n);
	Nhapmang(a,n);
	printf("\nTruoc sap xep la: ");
	Xuatmang(a,n);
	printf("\nSap xep giam dan la: ");
	Sapxepgiamdan(a,n);
}
