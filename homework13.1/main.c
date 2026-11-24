#define _CRT_SECURE_NO_DEPRECATE 
#include <stdio.h>
#include <locale.h>

#define MAX 100 

int main() {
    setlocale(LC_ALL, "RUS");

    int n;
    int a[MAX]; 

    printf("Введите количество элементов массива n (не более %d): ", MAX);
    scanf("%d", &n);

    if (n <= 0 || n > MAX) {
        printf("Некорректное значение n!\n");
        return 1;
    }

    printf("Введите %d целых чисел (положительных и отрицательных):\n", n);
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("\nИсходный массив:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    int sum = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 != 0 && a[i] > 0) {
            sum += a[i];
            count++;
        }
    }

    printf("\nПоложительные элементы на нечетных индексах:\n");
    if (count > 0) {
        double average = (double)sum / count;
        printf("Сумма = %d\n", sum);
        printf("Количество = %d\n", count);
        printf("Среднее значение = %.2f\n", average);
    }
    else {
        printf("Положительных элементов на нечетных индексах не найдено.\n");
    }

    return 0;
}