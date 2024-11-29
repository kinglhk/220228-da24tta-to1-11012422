#define row 10
#define col 10
#include <stdio.h>

void nhapmang(int a[][col], int n, int m);
void xuatmang(int a[][col], int n, int m);
int sum(int a[][col], int n, int m);
int sumdongk(int a[][col], int n, int m);
int sumcotk(int a[][col], int n, int m);
int ktrsa(int a[][col], int n, int m);
int ktrsnt(int n);
int ktrcsnt(int a[][col], int n, int m);
int sapxep(int a[][col], int n, int m);


int main()
{
	int a[row][col], n, m;
	do
	{
		printf("nhap so dong: ");scanf("%d",&n);
		printf("nhap so cot: ");scanf("%d",&m);		

	}while(n<=0 || n>row || m<=0 || m>col);
	
	nhapmang(a, n, m);
	xuatmang(a, n, m);
	sum(a, n, m);
	sumdongk(a, n, m);
	sumcotk(a, n, m);
	ktrsa(a, n, m);
	ktrcsnt(a, n, m);
	
	
	return 0;
}
int sapxep(int a[][col], int n, int m)
{
	int k, j, x, temp;
	printf("\nnhap so dong can sap xep: ");scanf("%d",&k);
	if (k<=0||k>n)
	{
		do
		{
			printf("\nvui long nhap lai so dong: ");scanf("%d",&k);
		}while(k<=0||k>n);
	}
	for(int i = 0; i < n; i++)
	{
		if(i==k-1)
        for(int j = 0; j < m; j++)
			for(j=0;j<n-1;j++)
				for(x=j+1;x<n;x++)
					if(a[i][j]<a[i][x])
					{
						temp=a[i][j];
						a[i][j]=a[i][x];
						a[i][x]=temp;
					}
	}
	printf("\ndong %d sau khi sap xep lai: ",k);
	return 0;
}
int ktrcsnt(int a[][col], int n, int m)
{
	int dem=0;
	int k;
	printf("\nnhap so cot can kiem tra: ");scanf("%d",&k);
	if (k<=0||k>n)
	{
		do
		{
			printf("\nvui long nhap lai so cot: ");scanf("%d",&k);
		}while(k<=0||k>n);
	}
	for(int i = 0; i < n; i++)
	{
        for(int j = 0; j < m; j++)
		{
			if(j==k-1)
			{
			
				if(ktrsnt(a[i][j])==1)
				dem++;
			}	
	   }
	}
	if(dem==0)
		printf("\ncot k co ton tai so nguyen");
		else
		printf("\ndong k khong ton tai so nguyen");
	return dem;
}
int ktrsnt(int n)
{
	int i, dem=0;
	for(i=1;i<=n;i++)
	{
		if(n%1==0)
			dem++;
	}
	if(dem==2)
		return 1;
	return 0;
}
int ktrsa(int a[][col], int n, int m)
{
	int dem=0;
	int k;
	printf("\nnhap so dong can kiem tra: ");scanf("%d",&k);
	if (k<=0||k>n)
	{
		do
		{
			printf("\nvui long nhap lai so dong: ");scanf("%d",&k);
		}while(k<=0||k>n);
	}
	for(int i = 0; i < n; i++)
	{
        for(int j = 0; j < m; j++)
		{
			if(i==k-1)
				dem++;
	   }
	}
	if(k<0)
		printf("\ndong k co ton tai so am");
		else
		printf("\ndong k khong ton tai so am");
	return dem;
}
int sumcotk(int a[][col], int n, int m)
{
	int sum=0;
	int k;
	printf("\nnhap so cot can tinh: ");scanf("%d",&k);
	if (k<=0||k>n)
	{
		do
		{
			printf("\nvui long nhap lai so cot: ");scanf("%d",&k);
		}while(k<=0||k>n);
	}
	for(int i = 0; i < n; i++)
	{
        for(int j = 0; j < m; j++)
		{
			if(j==k-1)
				sum=sum+a[i][j];
        }
	}
	printf("\ntong cot %d la %d", k, sum);
	return sum;
}
int sumdongk(int a[][col], int n, int m)
{
	int sum=0;
	int k;
	printf("\nnhap so dong can tinh: ");scanf("%d",&k);
	if (k<=0||k>n)
	{
		do
		{
			printf("\nvui long nhap lai so dong: ");scanf("%d",&k);
		}while(k<=0||k>n);
	}
	for(int i = 0; i < n; i++)
	{
        for(int j = 0; j < m; j++)
		{
			if(i==k-1)
				sum=sum+a[i][j];
        }
	}
	printf("\ntong dong %d la %d", k, sum);
	return sum;
}
int sum(int a[][col], int n, int m)
{
	int sum=0;
	for(int i = 0; i < n; i++)
	{
        for(int j = 0; j < m; j++)
		{
			sum=sum+a[i][j];
        }
	}
	printf("tong cac dong cot la: %d",sum);
	return sum;
}
void xuatmang(int a[][col], int n, int m)
{
	printf("mang da nhap: \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{	 
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
}
void nhapmang(int a[row][col], int n, int m)
{
	printf("nhap cac phan tu cho mang: \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("a[%d][%d]= ", i, j);scanf("%d", &a[i][j]);
		}
		printf("\n");
	}
}


