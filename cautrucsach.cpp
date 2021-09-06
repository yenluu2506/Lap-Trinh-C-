#include <stdio.h>
#include <string.h>

struct Book{
	char TenSach[50];
	char TacGia[50];
	int NamXuatBan;
};

//H�m nh?p v�o m?t d�y n cu?n s�ch th?a m�n
//Xu?t ra m�n h�nh th�ng tin n cu?n s�ch v?i d? c�c tru?ng
void Nhap(Book &a){
	fflush(stdin);
	printf("Nhap ten sach: ");
	gets(a.TenSach);
	printf("Nhap ten tac gia: ");
	gets(a.TacGia);
	printf("Nhap nam xuat ban: ");
	scanf("%d", &a.NamXuatBan);
}

void Xuat(Book a){
	printf("Ten sach: %s\n", a.TenSach);
	printf("Tac gia: %s\n", a.TacGia);
	printf("Nam xuat ban: %d\n", a.NamXuatBan);
}

void NhapSach(Book a[], int n){
	for(int i=1; i<=n; i++){
		printf("Nhap thong tin sach %d: \n", i);
		Nhap(a[i]);
	}
}
void XuatSach(Book a[], int n){
	for(int i=1; i<=n; i++){
		printf("\n________________________________\n");
		printf("Thong tin sach %d la: \n", i);
		Xuat(a[i]);
		printf("________________________________\n");
	}
}

//Nh?p v�o t�n m?t t�c gi? d?m xem t�c gi? c?a bao nhi�u cu?n
int DemSoSach(Book a[], int n){
	int dem=0;
	char ten[50];
	fflush(stdin);
	printf("\nNhap ten tac gia can tim: ");
	gets(ten);
	for(int i=1; i<=n; i++){
		if(strcmp(ten, a[i].TacGia)==0)
			dem++;
	}
	return dem;
}

//Th?ng k� theo nam xu?t b?n

int main(){
	struct Book a[100];
	int n;
	do{
		printf("Nhap so sach: ");
		scanf("%d", &n);
	}while(n<=0 || n>100);
	NhapSach(a, n);
	XuatSach(a, n);
	printf("\nSo sach co cung tac gia la: %d\n", DemSoSach(a, n));
}
