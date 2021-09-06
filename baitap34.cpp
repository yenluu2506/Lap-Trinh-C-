#include<stdio.h>
#include<stdlib.h>

void Nhapdt(int *n,int *&a)
{
    printf("\nNhap bac cua da thuc n = ");
    scanf("%d",n);
    a= new int[*n+1];
    for(int i=0;i<=*n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
}

void Xuatdt(int n,int *a)
{
    printf("\n\nDa thuc la \n");
    for(int i=n;i>=1;i--)
    printf("%d*x^%d + ",a[i],i);
    printf("%d",a[0]);
}

int tinhgt(int n,int *a,int d)
{
    int s=0,p=1,i;
    for(i=0;i<=n;i++)
    {
        p=p*d;
        s=s+a[i]*p;
    }
    return s;
}
int menu()
{
    int chon;
    printf("\n1. Nhap da thuc");
    printf("\n2. Xuat da thuc");
    printf("\n3. Tinh gia tri da thuc");
    printf("\n4. Nhap 2 dathuc va tinh tong");
    printf("\n5. Thoat");
    printf("\n\nMoi ban chon  : ");
    scanf("%d",&chon);
    return chon;
}

void tongdt(int n,int *a,int m,int *b,int &k,int *&c)
{
    int i;
    k=m>n?m:n;
    c=new int [k+1];
    for(i=0;i<=k;i++)
    if(i<=n && i<=m ) c[i]=a[i]+b[i];
    else c[i]=i>n?b[i]:a[i];
}

int main()
{
    int n,*a,chon,d;
    do
    {
        chon=menu();
        switch (chon)
        {
            case 1:  Nhapdt(&n,a); break;
            case 2:  Xuatdt(n,a); break;
            case 3:
                    printf("Nhap gia tri d =");
                    scanf("%d",&d);
                    printf("\nGia tri da thuc la %d",tinhgt(n,a,d));
                    break;
            case 4:
                    int m,*b,k,*c;
                    Nhapdt(&m,b);
                    tongdt(n,a,m,b,k,c);
                    printf("\nDa thuc tong la \n");
                    Xuatdt(k,c);
                    break;
             }       
        
    }while (chon !=5);
    return 1;
}
