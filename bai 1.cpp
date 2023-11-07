#include <stdio.h>

int main(){
	float square_side , width , length , radius;
	
	printf("Nhap do dai hinh vuong : ");
	scanf("%f" , &square_side);
	
	printf("Nhap chieu rong , chieu dai hinh chu nhat : ");
	scanf("%f %f", &width , &length);
	
	printf("Nhap ban kinh hinh tron : ");
	scanf("%f" , &radius);
	
	const float PI = 3.14;
	
	float square_perimeter = square_side * 4;
	float square_area = square_side * square_side;
	
	float rectangle_perimeter = (width + length) * 2;
	float rectangle_area = width * length;
	
	float circle_perimeter = radius * 2 * PI;
	float circle_area = radius * radius * PI;
	
	printf("Chu vi va dien tich hinh vuong la : %f %f \n", square_perimeter , square_area);
	printf("Chu vi va dien tich hinh chu nhat la : %f %f \n", rectangle_perimeter, rectangle_area);
	printf("Chu vi va dien tich hinh tron la : %f %f \n", circle_perimeter , circle_area);
}
