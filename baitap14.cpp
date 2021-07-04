//tong cac gia tri trong mang
#include <stdio.h>
void nhap(int a[], int n){
    for (int i = 0; i < n; i++){
        printf("Nhap vao phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
void Xuatmang(int a[], int n){
	for (int i=0; i<n; i++){
		printf("%5d", a[i]);
	}
}
int Tong(int a[], int n){
	int s =0;
	for(int i = 0; i < n; i++){
		s += a[i];
	}
	return s;
}
int main(){
    int a[1000];
    int n;
    printf("\nNhap n = ");
    scanf("%d", &n);
    nhap(a, n);
    printf("\nDay vua nhap la: ");
	Xuatmang(a,n);
    printf("\nTong cua day so la: %d ", Tong(a,n));
    return 0;
} 
