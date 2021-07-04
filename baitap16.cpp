//tong so le trong mang
#include <stdio.h>
void Nhap(int a[], int n){
	for (int i=0; i<n; i++){
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void Xuat(int a[], int n){
	for (int i=0; i<n; i++){
		printf("%5d", a[i]);
	}
}

int Tongsole(int a[], int n){
	int s =0;
	for(int i = 0; i < n; i++){
		if (a[i]%2==1)
		s += a[i];
	}
	return s;
}

int main(){
    int a[1000];
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    Nhap(a, n);
    printf("\nDay vua nhap la: ");
	Xuat(a,n);
    printf("\nTong cua day so la: %d ", Tongsole(a,n));
    return 0;
}
