#include<stdio.h>

int main(){
	const float PI = 3.14;
	float banKinh, chuVi, dienTich;
	print("Nhap ban kinh hinh tron: ");
	scanf("%f", &banKinh);
	chuVi = 2 * PI * banKinh;
	dienTich = PI * banKinh * banKinh;
	printf("Chu vi cua hinh tron la %.2f\n",chuVi);
	printf("Dien tich cua hinh tron la %.2f\n",dienTich);
	
	return 0;
}
