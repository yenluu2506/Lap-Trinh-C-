//Bai 8: Tinh S(n) = ½ + ¾ + 5/6 + … + 2n + 1/ 2n + 2
#include<stdio.h>
#include<math.h>
int main(){
	int n;
	float s=0;
	printf("Nhap n: ");
	scanf("%d", &n);
	for(int i=0; i<=n; i++){
		s=s+(float(2*i+1)/(2*i+2));
	}
	printf("Tong s la: %.2f", s);
	return 0;
}
