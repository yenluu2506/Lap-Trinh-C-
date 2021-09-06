#include<stdio.h>
#include<math.h>
void nhapHaiso(int &a, int &b);
void xuatHaiso(int a, int b);
int tinhTong(int a, int b);
int tinhHieu(int a, int b);
int tinhTich(int a, int b);
int tinhThuong(int a, int b);
int tinhLuythua();
int tinhCan();
int main(){
	int a, b;
	nhapHaiso(a,b);
	xuatHaiso(a,b);
	tinhTong(a,b);
	tinhHieu(a,b);
	tinhTich(a,b);
	tinhThuong(a,b);
	tinhLuythua();
	tinhCan();
}
void nhapHaiso(int &a, int &b){
	printf("Nhap vao 2 so a va b: ");
	scanf("%d %d", &a, &b);
}
void xuatHaiso(int a, int b){
	printf("\nHai so da nhap la: ");
	printf("%d %d", a, b);
}
int tinhTong(int a, int b){
	printf("\nTong cua 2 so la: %d ", a+b);
	return a+b;
}
int tinhHieu(int a, int b){
	printf("\nHieu cua 2 so la: %d", a-b);
	return a-b;
}
int tinhTich(int a, int b){
	printf("\nTich cua 2 so la: %d", a*b);
	return a*b;
}
int tinhThuong(int a, int b){
	printf("\nThuong cua hai so la: %d", a/b);
	return a/b;
}
int tinhLuythua(){
	int c, d;
	int luythua=1;
	printf("\nNhap vao co so: ");
	scanf("%d", &c);
	printf("\nNhap vao mu so: ");
	scanf("%d", &d);
	for(int i=1; i<=d; i++){
		luythua=luythua*c;
	}
	printf("\nLuy thua cua so la: %d", luythua);
	return luythua;
}
int tinhCan(){
	int k;
	float can;
	printf("\nNhap vao 1 so k: ");
	scanf("%d", &k);
	can=sqrt(k);
	printf("\nCan cua k la: %.2f", can);
	return can;
}
