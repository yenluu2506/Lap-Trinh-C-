#include <stdio.h>
#include <math.h>

void Nhapdt ( float A[], int n){
	for (int  i=n; i>=0; i--){
		printf(" a*x^%d: ", i);
		scanf("%f", &A[i]);
	}
}

void Xuatdt (float A[], int n){
	for (int i=n; i>0; i--){
		printf("%.1f*x^%d + ", A[i], i);
		printf("%.1f", A[0]);
	}
}

float Tinhdt (float A[], int n, float &x){
	float s=0;
	for (int i=n; i>=0; i--)
		s = s+A[i]*pow(x,i);
	//return s;
}

int main (){
	float A[1000], kq,x;
	int n;
	printf("Nhap vao so bac cua da thuc: ");
	scanf("%d", &n);
	Nhapdt(A,n);
	printf("\nDa thuc da nhap la: ");
	Xuatdt(A,n);
	printf("\nNhap vao gia tri cua x: ");
	scanf("%d",&x);
	kq=Tinhdt(A,n,x);
	printf("\nGia tri cua da thuc tai x la: %.2f ",kq);
	//Tinhdt(A,n,x);
}
