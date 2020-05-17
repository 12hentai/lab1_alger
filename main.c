#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {
	setlocale(LC_ALL, "ua");

	exOne();
	
	
	printf("\n\n");
	system("pause");
	return 0;
}

int exOne() {
	int a,b,c,cOne = 0,aOne = 0,bOne = 0;
	printf("Введiть число A = ");
	scanf("%d",&a);
	printf("Введiть число B = ");
	scanf("%d",&b);
	printf("Введiть число C = ");
	scanf("%d",&c);
	
	bOne = b;
	cOne = c;
	aOne = a;
	b = a;
	c = bOne;
	a = cOne;

	printf("A = %d B = %d C = %d", a,b,c);

	return 0;

}
