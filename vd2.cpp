#include <stdio.h>
int main()
{
	//khai bao bien
	char mssv[10], fullname[30], lop[20];
	int ns;
	float diem;
	//nhap
	printf("\n nhap ma so sinh vien:"); fflush(stdin); scanf("%s",mssv);
	printf("\n nhap ho va ten:"); fflush(stdin); gets(fullname);
	printf("\n nhap lop:"); fflush(stdin); scanf("%s",lop);
	printf("\n nhap nam sinh:"); scanf("%d",&ns);
	printf("\n nhap diem xet tuyen:"); scanf("%f",&diem);

	//xuat
	printf("\n");
	printf("\nthong tin sinh vien");
	printf("\n ma so sinh vien: %s",mssv);
	printf("\n ho va ten: %s",fullname);
	printf("\n nam sinh: %d",ns);
	printf("\n diem xet tuyen: %f",diem);
	return 0;
}
