#include <stdio.h>
//khai bao prototype
void inGT(int n);
void inSC(int n);
int gtCH(int n);
void gtSNT(int n);
int ktsnt(int n);
int gtTG(int n);
int gtTSL(int n);
int gtTSNT(int n);
int gtTBTSL(int n);
int gtTBTSNT(int n);
int main()
{
	//khau bao bien
	int n;
	//nhap bien
	do
	{
		printf("\nnhap gia tri n: "); scanf("%d",&n);
	}
	while (n<1||n>100);
	inGT(n);
	inSC(n);
	gtCH(n);
	gtSNT(n);
	gtTG(n);
	gtTSL(n);
	gtTSNT(n);
	gtTBTSL(n);
	gtTBTSNT(n);
	return 0;
}
void inGT(int n)
{
	//in ra mang hinh tu 1 den n
	int a;
	printf("cac gia tri:");
	for (a=1;a<=n;a++)
	{
		printf(" %d",a);
	}
	printf("\n");
}
void inSC(int n)
{
	int b;
	printf("cac so chan: ");
	//in ra mang hinh so chan tu 1 den n
	for (b=2;b<=n;b +=2)
	{
		printf(" %d",b);
	}
	printf("\n");
}
int gtCH(int n)
{
	int c;
	printf("cac so chia het cho 5: ");
	for (c=1;c<=n;c++)
	{
		if (c % 5 ==0)
		{
			printf(" %d",c);
		}
	}
	return 0;
}

int ktsnt(int n)
{
	//kiem tra n<2 thi return 0
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

void gtSNT(int n)
{
	int d;
	printf("\ngia tri so nguyen to:");	
	for (d=1;d<=n;d++){
		if(ktsnt(d)==1)
			printf(" %d",d);
	}
}
int gtTG(int n)
{
	int e, sum=0;
	for(e=1;e<=n;e++)
	{
		sum+=e;
	}
	printf("\nTong cac gia tri: %d",sum);
	return 0;
}
int gtTSL(int n)
{
	int f, sum=0;
	for(f=1;f<=n;f++)
	{
		if(f % 2 != 0)
		{
			sum+=f;
		}
	}
	
	printf("\ntong cac so le: %d",sum);
	return 0;
}
int gtTSNT(int n)
{
    int g, sum=0;
    for (g=0;g<=n;g++)
    {
		if(ktsnt(g)==1)
		{
		sum+=g;
        }
    }
    printf("\ntong cac so nguyen to: %d",g);
    return 0;
}
int gtTBTSL(int n)
{
	int h, dem=0,sum=0, kq;
	for (h=1;h<=n;h+=2)
	{
		if(h%2!=0)
		{
			sum+=h;
			dem++;	
    	}
    	kq=(float)sum / dem;
	}
	printf("\ntrung binh tong cac so le: %d",kq);
	return 0;
}
int gtTBTSNT(int n)
{
	 int i, sum=0,dem=0, kq;
    for (i=0;i<=n;i++)
    {
		if(ktsnt(i)==1)
		{
		sum+=i;
		dem++;
        }
        kq=(float)sum / dem;
	}
    printf("\ntrung binh tong cac so nguyen to: %d",kq);
    return 0;
}


