#include <stdio.h>
#include <math.h>

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
bool Kiemtrasonguyento(int n){
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
    
}
/*void Dem(int a[], int n){
	int dem=0;
	for (int i=0; i<n; i++){
		if(Kiemtrasonguyento(a[i])){
			dem++;
		}
	}
}*/
int Dem(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (Kiemtrasonguyento(a[i]))
        {
            dem++;
        }
    }
    return dem;
}
void Daysnt(int a[], int n){
	for(int i=0; i<n; i++){
		if(Kiemtrasonguyento(a[i])){
			printf("%5d", a[i]);
		}
	}
}
int main (){
	int a[1000];
	int n;
	printf("Nhap vao so luong phan tu: ");
	scanf("%d", &n);
	Nhapmang(a,n);
	printf("\nMang da nhap vao la: ");
	Xuatmang (a,n);
	printf("\nSo luong so nguyen to la: %d", Dem(a,n));
	//Dem(n);
	printf("\nDay so nguyen to la: ");
	Daysnt(a,n);
}
