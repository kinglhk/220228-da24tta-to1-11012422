#include<stdio.h>
int main()
{
	int a; float b; char c;
	printf("nhap so nguyen: ");
	scanf("%d",&a);
	printf("nhap so thuc: ");
	scanf("%f",&b);
	printf("nhap ky tu: ");
	fflush(stdin);
	scanf("%c",&c);
	printf("ket qua: %d\t%f\t%c", a,b,c);
	return 0;
}
