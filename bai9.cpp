//Bai 9: Tinh T(n) = 1 x 2 x 3…x N
#include<stdio.h>
#include<math.h>
int main(){
	int n;
	float s=1;
	printf("Nhap n: ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		s=s*i;
	}
	printf("Tong s la: %.2f", s);
	return 0;
}
