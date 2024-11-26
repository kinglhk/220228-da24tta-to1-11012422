#include <stdio.h>
#define SIZE 1000
void nhapmang(float A[], int n);
void xuatmang(float A[], int n);
int tongPT(float A[], int n);
int tbcvtl(float A[], int n);
int demptd(float A[], int n);
int sapxep(float A[], int n);
int inravtl(float A[], int n);


int main()
{
	float A[SIZE];
	int n;
	
	do
	{
		printf("\nNhap vao so phan tu:");
		scanf("%d", &n);
	}while(n<=0||n>SIZE);
	
	
	
	//n hop le
	//goi ham cau a
	nhapmang(A,n);
	
	//Goi ham cau b
	printf("\nMang vua nhap la: ");
	xuatmang(A,n);
	
	//Goi ham cau c
	tongPT(A,n);
	
	//Goi ham cau d
	tbcvtl(A,n);
	
	//Goi ham cau e
	demptd(A,n);
	
	//Goi ham cau f
	sapxep(A,n);
	
	
	
	return 0;
}
int inravtl(float A[], int n)
{
	int i;
	for(i=0;i<=n-1;i++)
	{
		
	}
}
int sapxep(float A[], int n)
{
	int i,j;
	float M;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		if (A[i]>A[j])
		{
			M=A[j];
			A[j]=A[i];
			A[i]=M;
		}
	}
	printf("\ncac phan tu tang dan trong mang la: ");
	for(i=0;i<n;i++)
		printf("\t%.2f",A[i]);
}
int demptd(float A[], int n)
{
	int dem=0;
	for (int i=0;i<n-1;i++)
	{
		if(A[i]>0)
			dem++;
	}
	printf("\nCo %d phan tu duong trong mang",dem);
}
int tbcvtl(float A[], int n)
{
	int dem=0;
	float tong=0;
	for (int i=0;i<=n-1;i++)
	{
		if (i%2!=0)
		{
			tong = tong + A[i];
			dem++;
		}
	}tong=tong/dem;
	printf("\nTrung binh cong tai vi tri le: %.2f",tong);
	return tong;
}
int tongPT(float A[], int n)
{
	float tong = 0;
	for (int i=0;i<=n-1;i++)
	{
		tong= tong + A[i];	
	}
	printf("\nTong cac phan tu: %.2f",tong);
	return tong;
}
void xuatmang(float A[], int n)
{
	int i;
	for (i=0;i<=n-1;i++)
	{
		printf("%5.2f",A[i]);
	}
}
void nhapmang(float A[], int n)
{
	int i;
	
	i = 0;
	while(i<=n-1)
	{
		printf("\nphan tu A[%d]: ",i);
		scanf("%6f", &A[i]);
		i++;
	}
}
