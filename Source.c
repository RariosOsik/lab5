#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES 
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#define M_PI 3.14159265358979323846

int main()
{
	setlocale(LC_ALL, ".UTF8");
	zad1();
	zad2();
}

int zad1() 
{
	float gr, agl;
	printf("Введите значение угла в градусах для вычисления синуса: \n");
	scanf("%f", &gr);
	agl = gr * M_PI / 180;
	printf("%.6f", sin(agl));
	return 0;
}

int zad2() 
{
	double p = 3.0;
	double x = 4.0;
	double a, b, y;
	a = sqrt(p * x);
	b = p * pow(x, 2) + sqrt(a);
	y = pow(b, 3) * pow(b, 2) + a * x;
	printf("Исходные данные\n");
	printf("p = %.1f\n", p);
	printf("x = %.1f\n", x);
	printf("Результат:\n");
	printf("a = %.4f\n", a);
	printf("b = %.4f\n", b);
	printf("y = %.4f\n", y);
	return 0;
}
