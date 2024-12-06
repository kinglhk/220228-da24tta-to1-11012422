#include<stdio.h>
#include<string.h>
struct CONNGUOI{
	char hoten[30], diachi[100],gioitinh[4];
	int tuoi;
	float thunhap;
};

void nhap(CONNGUOI *a);//Truyen tham bien
void xuat(CONNGUOI a);//Truyen tham tri

int main()
{
	CONNGUOI a, b;
		
	//Nhap thong tin
	nhap(&a);//Truyen dia chi tham so thuc
	
	//Xuat thong tin
	printf("\nThong tin vua nhap la: ");
	xuat(a);
	
	return 0;
}
void xuat(CONNGUOI a)
{
	printf("\nHo va ten: %s", a.hoten);
	printf("\tTuoi: %d", a.tuoi);
	printf("\nGioi tinh: %s", a.gioitinh);
	printf("\ndia chi: %s", a.diachi);
	printf("\nthu nhap: %.2f trieu", a.thunhap);
}
void nhap(CONNGUOI *a)
{
	printf("\nNhap ho ten: ");
	fflush(stdin);
	gets(a->hoten);
		
	printf("\nNhap so tuoi: ");
	scanf("%d", &a->tuoi);
	
	printf("\nNhap gioi tinh: ");
	fflush(stdin);
	gets(a->gioitinh);
	
	printf("\nNhap dia chi: ");
	fflush(stdin);
	gets(a->diachi);
	
	printf("\nnhap thu nhap: ");
	scanf("%f",&a->thunhap);
}
