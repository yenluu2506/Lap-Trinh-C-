#include <stdio.h>
#include <conio.h>

//ham nhap mang
void Nhapmang(int a[], int n){
	//printf ("Nhap vao so luong phan tu: ");
	//scanf("%d", &n);
	for(int i=0; i<n; i++){
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

//ham xuat mang
void Xuatmang(int a[], int n){
	for(int i=0; i<n; i++){
	printf("%5d", a[i]);
	}
}

//tim gia tri lon nhat cua mang
void Max (int a[], int n){
	int max;
	for(int i=0; i<n; i++){
		if(max<a[i]){
			max = a[i];
		}
	}
	printf("\nGia tri lon nhat la: %d ", max);
}

//tim gia tri nho nhat cua mang
void min (int a[], int n){
	int min;
	for(int i=0; i<n; i++){
		if(min>a[i]){
			min = a[i];
		}
	}
	printf("\nGia tri nho nhat la: %d ", min);
}

//tinh tong cua mang
void Tong(int a[], int n){
	int tong=0;
	for(int i=0; i<n; i++){
		tong +=a[i];
	}
	printf("\nTong cua day la: %d ", tong);
}

//tinh trung binh cong cua day so
void TBC(int a[], int n){
	float s=0;
	float dem=0;
	for(int i=0; i<n; i++){
		dem++;
		s+=a[i];
	}
	printf("\nTrung binh cong cua day so la: %.2f", s/dem);
}

//tinh trung binh nhan cua day so
void TBN(int a[], int n){
	float s=1;
	float dem=0;
	for(int i=0; i<n; i++){
		dem++;
		s*=a[i];
	}
	printf("\nTrung binh nhan cua day so la: %.2f", s/dem);
}

//sap xep mang theo thu tu tang dan
void Tangdan(int a[], int n){
	for(int i =0; i<n; i++){
		int tam;
		for (int j=i+1; j<n; j++){
			if (a[i]>a[j]){
				tam = a[i];
				a[i] = a[j];
				a[j] = tam;
			}
		}
		printf("%5d", a[i]);
	}
}

//sap xep mang theo thu tu giam dan
void Giamdan(int a[], int n){
	for(int i =0; i<n; i++){
		int tam;
		for (int j=i+1; j<n; j++){
			if (a[i]<a[j]){
				tam = a[i];
				a[i] = a[j];
				a[j] = tam;
			}
		}
		printf("%5d", a[i]);
	}
}

//tim 1 phan tu x cho truoc 
int timvitri (int a[],int n){ 
	int x;
	printf("\nNhap vao gia tri x: ");
	scanf("%d", &x);
	for (int i=0;i<n;i++){
		if ( a[i]==x);
		return i;
	}
	//if (timvitri (a,n)){
	 	printf ("\nVi tri cua ptu co gtri %d dau tien la a[%d]. " /*timvitri (a,n)*/);
	//}
	//else{
	 	//printf ("\Khong co phan tu tuong ung.");
	//}
	//return -1;
}

//day dao nguoc cua day ban dau
void Daonguoc(int a[], int n){
	int i;
	for(int i=n-1; i>=0; i--){
		
        /*int index = n - i - 1;
        int tmp = a[index];
        a[index] = a[i];
        a[i] = tmp;*/
        printf("%5d", a[i]);
	}
	//printf("%5d", a[i]);
}

/*void HoanVi(int &a, int &b)
{
	int tam = a;
	a = b;
	b = tam;
}

void DaoMang(int a[], int n){
	for(int i = 0, j = n - 1; i < j; i++, j--)
	{
		HoanVi(a[i], a[j]);
	}
}*/
int main(){
	int a[1000];
	int n;
	printf ("\nNhap vao so luong phan tu: ");
	scanf("%d", &n);
	Nhapmang(a,n);
	printf("\nDay vua nhap vao la: ");
	Xuatmang(a,n);
	Max(a,n);
	min(a,n);
	Tong(a,n);
	TBC (a,n);
	TBN(a,n);
	printf("\nMang duoc xep theo thu tu tang dan la: ");
	Tangdan(a,n);
	printf("\nMang duoc xep theo thu tu giam dan la: ");
	Giamdan(a,n);
	/*if (timvitri (a,n)){
	 	printf ("\nVi tri cua ptu co gtri %d dau tien la a[%d]. ", timvitri (a,n));
	}
	else{
	 	printf ("\Khong co phan tu tuong ung.");
	}*/
	//printf ("\nVi tri cua ptu co gtri %d dau tien la a[%d]. ");
	//timvitri(a,n);
	//printf("\nDay dao nguoc la: ");
	//Daonguoc(a,n);
	printf("\nMang dao nguoc: ");
	Daonguoc(a,n);
	//DaoMang(a, n);
	Xuatmang(a,n);
	//printf("\nMang dao nguoc: ");
	//xuat(a, n);
}

