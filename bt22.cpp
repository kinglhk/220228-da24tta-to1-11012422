#include <stdio.h>
#include <stdlib.h>
void nhap(int a[],int n);
void xuat(int a[], int n);
int tonggt(int a[], int n);
int gtln(int a[], int n);
int dgtln(int a[], int n);
int main()
{
	int *p,n;
	//nhap n
	do
	{
		printf("\nnhap so nguyen n: ");scanf("%d",&n);
	}while(n<0||n>50);
	//cap phat
	p=(int*)malloc(n*sizeof(int));
	//nhap n gia tri
	nhap(p,n);
	xuat(p,n);
	printf("\ntong cac gia tri: %d",tonggt(p,n));
	printf("\nGia tri lon nhat: %d",gtln(p,n));
	printf("\nso lan xuat hien cua gia tri lon nhat: %d",dgtln(p,n));
	return 0;
}
int dgtln(int a[], int n)
{
	int dem=0, max=0;
	for(int i=0;i<n;i++)
	{
		if(max<a[i])
			max+=a[i];
		if(max==a[i])
			dem++;
	}
	return dem;
}
int gtln(int a[], int n)
{
	int max=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	return max;
}
int tonggt(int a[], int n)
{
	int tong=0;
	for(int i=0;i<n;i++)
	{
		tong=tong+a[i];
	}
	return tong;
}
void xuat(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%2d",a[i]);
	}
}
void nhap(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\ngia tri: ",i+1);
		scanf("%d",&a[i]);
	}
}
