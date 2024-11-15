#include<stdio.h>
int main()
{
	int Dt, Sl;
	float Dg, Cp;
	printf("\nSo luong hang nhap vao:"); scanf("%d",&Sl);
	printf("\nDon gia cua mat hang:"); scanf("%f",&Dg);
	printf("\nChi phi van chuyen hang:"); scanf("%f",&Cp);
	Dt = Sl*Dg-Cp;
	printf("\nDoanh thu trong ngay: %d",Dt);
	return 0;
}
