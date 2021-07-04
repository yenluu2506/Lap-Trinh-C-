#include <stdio.h>

void Nhapmang (float a[], int n){
	for (int i=0; i<n; i++){
		printf("a[%d]: ", i);
		scanf("%f", &a[i]);
	}
}
void Xuatmang (float a[], int n){
	for (int i=0; i<n; i++){
		printf("%7.2f", a[i]);
	}
}
int Sophantuam (float a[], int n ){
	int dem = 0;
	for (int i=0; i<n; i++)
		if (a[i]<0)
		dem ++;
		
	
	return dem;
}

int main (){
	float a[1000];
	int n;
	printf("Nhap vao so luong phan tu: ");
	scanf("%d", &n);
	Nhapmang(a,n);
	printf("\nMang da nhap la: ");
	Xuatmang(a,n);
	printf("\nSo luong phan tu am la: %d ", Sophantuam(a,n));
	//Sophantuam(a,n);
}
