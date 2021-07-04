#include<stdio.h>
int main(){
	int A[100],n,i,d=0;
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		printf("nhap a[%d] = ",i);
		scanf("%d",&A[i]);
		if(A[i] < 0){
			d++;
		}
	}
	printf("So phan tu am trong day la: %d", d);
}	
