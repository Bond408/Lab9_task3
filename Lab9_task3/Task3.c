#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "RUS");
	char s;
	printf("������� ������:");
	scanf_s("%c", &s);
	int R;
	printf("������� �������� R:");
	scanf_s("%d", &R);
	for (int i = 1; i <= R; i++) {
		printf("%c\n", s);
	}
	for (int i = 1; i <= 2 * R; i++) {
		printf("%c", s);
	}
}