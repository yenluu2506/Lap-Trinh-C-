#include<stdio.h>
#include<math.h>

void nhapdt(float A[], int n){
	for(int i=n;i>=0;i--){
		printf("a*x^%d: ",i);
		scanf("%f",&A[i]);
	}
}

void xuatdt(float A[], int n){
	for(int i=n;i>0;i--)
		printf("%.1f*x^%d + ",A[i],i);
		printf("%.1f",A[0]);	
}

float tinhgt(float A[], int n, float x){
	float s=0;
	for(int i=n;i>=0;i--)
	    s=s+A[i]*pow(x,i);
	return s;    
}

float tongdt(float A[], int n, float x, float kq1, float kq2){
			return kq1+kq2;	
}

float tichdt(float A[], int n, float x, float kq1, float kq2){
			return kq1*kq2;	
}

float hieudt(float A[], int n, float x, float kq1, float kq2){
	float hieu;
	if(kq1>kq2)
	    hieu=kq1-kq2;
	else
	    hieu=kq2-kq1;
	return hieu;   	
}

float thuongdt(float A[], int n, float x, float kq1, float kq2){
	float thuong;
	    if(kq1 != 0 && kq2 != 0)
	           thuong=kq1/kq2;
			return thuong;	
}

float daoham(float A[], int n, float x){
	float s=0,p=1;
	for(int i=n;i>=0;i--){
	s=s+i*A[i]*p;
	p=p*x;	
	}
	return s;
}

int main(){
	float A[100],kq1,kq2,x,dh1,dh2;
	int n;
	printf("Nhap so bac da thuc A: ");
	scanf("%d",&n);
	nhapdt(A,n);
	printf("\nDa thuc vua nhap la: ");
	xuatdt(A,n);
	printf("\nNhap x: ");
	scanf("%f",&x);
	kq1=tinhgt(A,n,x);
	printf("\nGia tri A tai x la: %.2f",kq1);
	dh1=daoham(A,n,x);
	printf("\nGia tri dao ham da thuc A tai x la: %.2f",dh1);
	
	printf("\nNhap so bac da thuc B: ");
	scanf("%d",&n);
	nhapdt(A,n);
	printf("\nDa thuc vua nhap la: ");
	xuatdt(A,n);
	printf("\nNhap x: ");
	scanf("%f",&x);
	kq2=tinhgt(A,n,x);
	printf("\nGia tri B tai x la: %.2f",kq2);
	dh2=daoham(A,n,x);
	printf("\nGia tri dao ham da thuc B tai x la: %.2f",dh2);	
	printf("\nGia tri tong da thuc la: %.2f",tongdt(A,n,x,kq1,kq2));
	printf("\nGia tri tich da thuc la: %.2f",tichdt(A,n,x,kq1,kq2));
    printf("\nGia tri hieu da thuc la: %.2f",hieudt(A,n,x,kq1,kq2));
    printf("\nGia tri thuong da thuc la: %.2f",thuongdt(A,n,x,kq1,kq2));	
}
