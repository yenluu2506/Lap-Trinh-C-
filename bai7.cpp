//Bai 7: Tinh S(n) = ½ + 2/3 + ¾ + …. + n / n + 1
#include<stdio.h>
#include<math.h>
int main(){
	int n;
	float s=0;
	printf("Nhap n: ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		s=s+(float(i)/(i+1));
	}
	printf("Tong s la: %.2f", s);
	return 0;
}
