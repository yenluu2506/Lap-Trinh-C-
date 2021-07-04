#include <stdio.h>

void Nhapmang(int a[], int n){
	for (int i=0; i<n; i++){
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void Xuatmang(int a[], int n){
	for (int i=0; i<n; i++){
		printf("%5d", a[i]);
	}
}

int Max(int a[], int n){
	//int max=a[0];
	for(int i=1; i<n; i++){
		int max=a[0];
		if(max<a[i]){
			max = a[i];
		}
	}

}
int main(){
	int a[100];
	int n;
	int d= Max(a,n);
	printf("Nhap vao so luong phan tu: ");
	scanf("%d", &n);
	Nhapmang(a,n);
	printf("\nDay vua nhap la: ");
	Xuatmang(a,n);
	printf("\nGia tri lon nhat cua mang la: %d", d);
	//max(a,n);
	return 0;
}
