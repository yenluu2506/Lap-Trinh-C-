//Bai 6: Tinh S(n) = 1/1�2 + 1/2�3 +�+ 1/n x (n + 1)
#include<stdio.h>
#include<math.h>
int main(){
	int n;
	float s=0;
	printf("Nhap n: ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		s=s+(1.0/(i*(i+1)));
	}
	printf("Tong s la: %.2f", s);
	return 0;
}
