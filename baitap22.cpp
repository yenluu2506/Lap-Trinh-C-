# include <stdio.h>
# include <conio.h>
 void nhap_mang (int A[100],int n);
 int tim_vi_tri (int A[100],int n, int x);
 void nhap_mang (int A[100],int n)
 { int i;
	 for ( i=0;i<n;i++)
	{ printf ("\n Nhap A[%d]: ",i);
	  scanf ("%d",&A[i]);
	 }
  }

  int tim_vi_tri (int A[100],int n, int x)
  { int i;

	 for (i=0;i<n;i++)
	 if ( A[i]==x);
		return i;
		return -1;
  }
  int main ()
  { int x,n,i,A[100];
	 printf ("\n Nhap n: ");
	 scanf (" %d",&n);
	 printf ("\n Nhap x: ");
	 scanf (" %d",&x);
	 nhap_mang (A,n);
	 if ( tim_vi_tri (A,n,x))
	 printf ("\n vi tri oF ptu co gtri % d dau tien la A[%d] ", x,tim_vi_tri (A,n,x));
	 else
	 printf ("\n ko co ");
	 getch();
  }

