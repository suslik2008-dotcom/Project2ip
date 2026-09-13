#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	int n=10, k=30;
	printf("Сейчас %d часов %d минут 00 секунд\n", n, k);
	printf("Идет %d минута суток\n", k);
	printf("До полуночи осталось %d часов и %d минут\n", n, k);
	printf("С 8.00 прошло %d секунд\n", (n-8)*3600 + k*60);
	float n1 = n, k1 = k;
	printf("Текущий час = %1.2f суток и текущая минута = %1.2f часа", n1/24, k1/60);
}