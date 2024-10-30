#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    int R;              
    char symbol;        

    printf("¬ведите символ дл€ контура треугольника: ");
    scanf_s(" %c", &symbol);
    printf("¬ведите R: ");
    scanf_s("%d", &R);

    for (int i = 0; i <= R; i++) {
        for (int j = 0; j <= 2 * R; j++) {
            if (j == R - i || j == R + i || i == R) {
                printf("%c", symbol);
            }
            else if (j == R && i < R) {
                printf("%c", symbol);
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}