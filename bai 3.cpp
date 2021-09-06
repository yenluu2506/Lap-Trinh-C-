//Bai 3: Tinh S(n) = 1 + ½ + 1/3 + … + 1/n
#include<stdio.h>
#include<math.h>
int main(){
	int n;
	float s=0;
	printf("Nhap n: ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		s=s+(1.0/i);
	}
	printf("\nTong s la: %.2f", s);
}
