//Bai 10: Tinh T(x, n) = x^n
#include<stdio.h>
#include<math.h>
int main(){
	int n, x, t;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("Nhap x: ");
	scanf("%d", &x);
	t=pow(x,n);
	printf("T la: %d",t);
	return 0;
}
