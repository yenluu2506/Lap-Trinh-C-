#include <stdio.h>
#include <math.h>

void Nhap(float P[], int &n ){
	printf("Nhap so bac cua da thuc: ");
	scanf("%d", &n);
	for(int i=n; i>=0; i--){
		printf("a*x^%d: ", i);
		scanf("%f", &P[i]);
	}
}

void In(float P[], int n){
	printf("\nDa thuc da nhap la: ");
	for(int i=n; i>0; i--)
	printf("%.1f*x^%d + ", P[i], i);
	printf("%.1f", P[0]);
}

float TinhDaThuc(float P[], int n, float &x){
	float S=0;
	printf("\nNhap x: ");
	scanf("%f", &x);
	for(int i=n; i>=0; i--)
	S = S + P[i]*pow(x,i);
	return S;
}

/*void tongdathuc(int n,int *a,int m,int *b,int &k,int *&c)
{
    int i;
    k=m>n?m:n;
    c=new int [k+1];
    for(i=0;i<=k;i++)
    if(i<=n && i<=m ) c[i]=a[i]+b[i];
    else c[i]=i>n?b[i]:a[i];
}*/

int main(){
	float P[100], Q[100], kq1, kq2, x1, x2;
	int m, n;
	Nhap (P,n);
	Nhap (Q,m);
	In (P,n);
	In (Q,m);
	kq1 = TinhDaThuc(P,n,x1);
	printf("\nx1 = %.2f", x1);
	kq2 = TinhDaThuc(Q,m,x2);
	printf("\nx2 = %.2f", x2);
	printf("\nGia tri cua P tai x1 la: %.2f", kq1);
	printf("\nGia tri cua Q tai x2 la: %.2f", kq2);
}
