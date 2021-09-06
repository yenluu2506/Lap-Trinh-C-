//Bai 4: Tinh S(n) = ½ + ¼ + … + 1/2n
#include<stdio.h>
#include<math.h>
int main(){
	int n;
	float s=0;
	printf("Nhap n: ");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		s=s+(1.0/(2*i));
	}
	printf("Tong s la: %.2f", s);
	return 0;
}
