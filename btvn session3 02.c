#include<stdio.h>

int main(){
	float celsius, fahrenheit;
	printf("Nhap nhiet do celsius :  ");
	scanf("%f",&celsius);
	fahrenheit = celsius * 9 / 5 + 32;
	printf("%.2f do celsius tuong duong voi %.2f do fahrenheit\n",celsius, fahrenheit);
	
	return 0;
}
