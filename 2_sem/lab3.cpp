#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort(double** b, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*b[j] > *b[j + 1]) {
                swap(b[j], b[j + 1]);
            }
        }
    }
}


int first(){
   int n, m = 0, k = 0;
    
    printf("Введите размер массива: ");
    scanf("%d", &n);
    
    int *b = (int *)malloc(n * sizeof(int));
    if (b == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }
    
    srand(time(NULL));
    printf("Исходный массив: ");
    for (int i = 0; i < n; i++) {
        b[i] = rand() % 101 - 50;
        printf("%d ", b[i]);
        if (b[i] >= 0) m++;
        else k++;
    }
    printf("\n");
    
    int *c = (int *)malloc(m * sizeof(int));
    int *d = (int *)malloc(k * sizeof(int));
    
    int ci = 0, di = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] > 0) c[ci++] = b[i];
        else if (b[i] < 0) d[di++] = b[i];
    }
    
    printf("Положительные числа: ");
    for (int i = 0; i < m; i++) printf("%d ", c[i]);
    printf("\n");
    
    printf("Отрицательные числа: ");
    for (int i = 0; i < k; i++) printf("%d ", d[i]);
    printf("\n");
    
    free(b);
    free(c);
    free(d);
    
    return 0;
}

int second(){
    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    double *a = new double[n];
    double **b = new double*[n];
    
    srand(time(0));
    cout << "Исходный массив: ";
    for (int i = 0; i < n; i++) {
        a[i] = (rand() % 10000) / 100.0;
        b[i] = &a[i];
        cout << a[i] << " ";
    }
    cout << endl;
    
    bubbleSort(b, n);
    
    cout << "Отсортированный массив (по указателям): ";
    for (int i = 0; i < n; i++) {
        cout << *b[i] << " ";
    }
    cout << endl;
    
    delete[] a;
    delete[] b;
    
    return 0;
}
void third(int n){
    if (n < 2) {
        printf("Нет простых чисел в заданном диапазоне.\n");
        return;
    }
    
    int *prostie = (int *)malloc((n + 1) * sizeof(int));
    if (prostie == NULL) {
        printf("Ошибка выделения памяти!\n");
        return;
    }
    
    for (int i = 2; i <= n; i++) {
        prostie[i] = 1;
    }
    
    for (int p = 2; p * p <= n; p++) {
        if (prostie[p]) {
            for (int i = p * p; i <= n; i += p) {
                prostie[i] = 0;
            }
        }
    }
    
    printf("Простые числа от 2 до %d: ", n);
    for (int i = 2; i <= n; i++) {
        if (prostie[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    free(prostie);
}
int main(){
    first();
    printf("\n\n");
    second();
    printf("\n\n");
    int n;
    printf("Введите число n: ");
    scanf("%d", &n);
    
    third(n);
}