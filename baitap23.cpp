#include <conio.h>
#include <stdio.h>


int main()
{
    int a[100];
    int n;
    printf("Nhap vao so luong phan tu cua mang la: ");
    scanf("%d", &n);

    //nhap mang
    for(int i=0; i<n; i++)
    {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &a[i]);
    }

    //dao nguoc mang
    for(int i=0; i< n/2; i++)
    {
        int index = n - i - 1;
        int tmp = a[index];
        a[index] = a[i];
        a[i] = tmp;
    }

    //xuat mang
    for(int i=0; i<n; i++)
    {
        printf("%5d", a[i]);
    }
    printf("\n");

}
