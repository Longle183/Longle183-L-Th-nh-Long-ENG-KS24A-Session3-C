#include<stdio.h>

int main(){
	float canh, chieuCao, dienTich;
	printf("Nhap do dai canh tam giac: ");
	scanf("%f",&canh);
	printf("Nhap chieu cao tam giac: ");
	scanf("%f",&chieuCao);
	dienTich = 0.5 * canh * chieuCao;
	printf("Dien tich cua tam giac la: %.2f\n",dienTich);
	
	return 0;
}
