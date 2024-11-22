#define SIZE 100
#include <stdio.h>
void nhapMang(int a[], int n);
void xuatMang(int a[], int n);
int tongMang(int a[], int n);
int tongduong(int a[], int n);
int tongvtl(int a[], int n);
int dempta(int a[], int n);
int demptl(int a[], int n);
int ktrsnt(int n);
int demsnt(int a[], int n);
int sntdt(int a[], int n);
int csdl(int a[], int n);
int ttsa(int a[], int n);
int ttx(int a[], int n, int x);

int main()
{
	int A[SIZE];
	int n, X, kq;
	
	do
	{
		printf("\nNhap vao so phan tu: ");
		scanf("%d", &n);
	}while(n<=0||n>100);
	
	//n hop le
	//goi ham cau a
	nhapMang(A,n);
	
	//Goi ham cau b
	printf("\nMang vua nhap la: ");
	xuatMang(A,n);
	
	//Goi ham cau c
	kq = tongMang(A,n);
	printf("\nTong cac gia trong mang la %d", kq);
	
	printf("\ntong cac so duong: %d", tongduong(A,n));
	
	printf("\ntong pha tu tai vi tri le: %d", tongvtl(A,n));
	
	printf("\ndem so phan tu am trong mang: %d", dempta(A,n));
		
	printf("\ndem so phan tu le trong mang: %d", demptl(A,n));
	
	printf("\ndem so phan tu la so nguyen to trong mang: %d", demsnt(A,n));
	
	printf("\nso nguyen to dau tien trong mang la: %d", sntdt(A,n));
	
	csdl(A,n);
	printf("\n");
	if (ttsa(A,n)==1)
		printf("co ton tai so am trong mang");
	else
		printf("khong ton tai so am trong mang");
	printf("\n");
	printf("\nnhap mot so X: "); scanf("%d",&X);
	if (ttx(A,n,X)==1)
		printf("\nco ton tai X trong mang");
	else
		printf("\nkhong ton tai X trong mang");
	
	return 0;
}
int ttx(int a[], int n, int x)
{
	for (int i=0; i<n; i++)
	{
		if (a[i]==x)
			return 1;
	}
	return 0;
}
int ttsa(int a[], int n)
{
	for (int i=0; i<n; i++)
	{
		if (a[i]<0)
			return 1;
	}
	return 0;
}
int csdl(int a[], int n)
{
	printf("\nCac so duong le: ");
	int i;
	for (i=0;i<=n-1;i++)
	{
		if(a[i]%2!=0&&a[i]>0)
			printf ("%2d",a[i]);		
	}	
	return 0;	
}
int sntdt(int a[], int n)
{
	for (int i=0;i<n;i++)
	{
		if(ktrsnt(a[i])==1)
			return a[i];
	}
	return 0;
}
int demsnt(int a[], int n)
{ 
	int dem=0;
	int i;
	for(i=0;i<n;i++)
	{
		if(ktrsnt(a[i])==1)
			dem++;
	}
	return dem;
}
int ktrsnt(int n)
{
	if (n<2)
		return 0;
	int dem=0;
	for (int i=1; i<=n; i++)
	{
		if (n%i==0)
			dem++;
	}
	if (dem==2)
		return 1;
	return 0;
}
int demptl(int a[], int n)
{
	int dem=0;
	int i;
	for(i=0;i<=n-1;i++)
	{
		if(a[i]%2!=0)
			dem++;
	}
	return dem;
}
int dempta(int a[], int n)
{
	int dem=0;
	int i;
	for(i=0;i<=n-1;i++)
	{
		if(a[i]<0)
			dem++;
	}
	return dem;
}
int tongvtl(int a[], int n)
{
	int tong=0;
	int i;
	for(i=0;i<=n-1;i++)
	{
		if(i%2!=0)
			tong+=a[i];
	}
	return tong;
}
int tongduong(int a[], int n)
{
	int tong=0;
	int i;
	for(i=0;i<=n-1;i++)
	{
		if(a[i]>0)
			tong+=a[i];
	}
	return tong;
}
int tongMang(int a[], int n)
{
	int tong = 0;
	int i=0;
	do
	{
		tong = tong + a[i];
		i++;
	}while(i<=n-1);
	return tong;
}

void xuatMang(int a[], int n)
{
	int i;
	for(i=0; i<=n-1; i++)
	{
		printf("%8d", a[i]);
	}
}
void nhapMang(int a[], int n)
{
	int i;
	
	i = 0;
	while(i<=n-1)
	{
		printf("\nphan tu a[%d]: ", i);
		scanf("%d", &a[i]); //a+i
		i++;
	}
}
