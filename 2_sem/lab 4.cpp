#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

using namespace std;


void task1() {
    int m; int n = 5;
    cout << "Введите размерность m: ";
    cin >> m;
    
    int **B = (int**)malloc(m*sizeof(int*));
    for (int i = 0; i < m; i++)
        B[i] = (int*)malloc(n*sizeof(int*));;
    
    cout << "Исходный массив B:\n";
    int maxVal = -1, maxRow = 0, maxCol = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            B[i][j] = rand() % 100;
            cout << setw(4) << B[i][j] << " ";
            if (B[i][j] > maxVal) {
                maxVal = B[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
        cout << endl;
    }
    
    int **C = (int**)malloc((m-1)*sizeof(int*));
    for (int i = 0, ci = 0; i < m; i++) {
        if (i == maxRow) continue;
        C[ci] = (int*)malloc((n-1)*sizeof(int));
        for (int j = 0, cj = 0; j < n; j++) {
            if (j == maxCol) continue;
            C[ci][cj] = B[i][j];
            cj++;
        }
        ci++;
    }
    
    cout << "\nНовый массив C:\n";
    for (int i = 0; i < m-1; i++) {
        for (int j = 0; j < n-1; j++) {
            cout << setw(4) << C[i][j] << " ";
        }
        cout << endl;
    }
    
    for (int i = 0; i < m; i++) free(B[i]);
    free(B);
    for (int i = 0; i < m-1; i++) free(C[i]);
    free(C);
}

void task2() {
    int m, n;
    cout << "Введите размеры массива A (m и n): ";
    cin >> m >> n;
    
    int **A = new int*[m];
    for (int i = 0; i < m; i++)
        A[i] = new int[n];
    
    int **D = new int*[m+1];
    for (int i = 0; i <= m; i++)
        D[i] = new int[n+1];
    
    cout << "Исходный массив A:\n";
    int totalSum = 0;
    for (int i = 0; i < m; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            A[i][j] = rand() % 100;
            cout << setw(4) << A[i][j] << " ";
            rowSum += A[i][j];
            D[i][j] = A[i][j];
        }
        D[i][n] = rowSum;
        totalSum += rowSum;
        cout << endl;
    }
    
    for (int j = 0; j <= n; j++) {
        int colSum = 0;
        for (int i = 0; i < m; i++)
            colSum += A[i][j];
        D[m][j] = colSum;
    }
    D[m][n] = totalSum;
    
    cout << "Массив D:\n";
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            cout << setw(4) << D[i][j] << " ";
        }
        cout << endl;
    }
    
    for (int i = 0; i < m; i++) delete[] A[i];
    delete[] A;
    for (int i = 0; i <= m; i++) delete[] D[i];
    delete[] D;
}
int main() {
    srand(time(0));
    int choice;
    cout << "Выберите задание (1 или 2): ";
    cin >> choice;
    
    switch (choice) {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        default:
            cout << "Неверный выбор!" << endl;
    }

}
