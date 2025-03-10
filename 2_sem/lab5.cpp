#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

using namespace std;

void task1() {
    int m, k;
    cout << "Введите количество элементов в массиве A (m): ";
    cin >> m;
    cout << "Введите количество элементов в строке (k): ";
    cin >> k;
    
    int* A = new int[m];
    cout << "Исходный массив A:\n";
    for (int i = 0; i < m; i++){
        A[i] = rand() % 100;
        cout << A[i] << " ";
    }
    cout << endl;
    
    int rows = (m + k - 1) / k;
    int** B = new int*[rows];
    for (int i = 0; i < rows; i++){
        B[i] = new int[k]{};
    }
    
    for (int i = 0; i < m; i++){
        B[i / k][i % k] = A[i];
    }
    
    cout << "Матрица B:\n";
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < k; j++) {
            cout << setw(4) << B[i][j] << " ";
        }
        cout << endl;
    }
    
    delete[] A;
    for (int i = 0; i < rows; i++){
        delete[] B[i];
    }
    delete[] B;
}

void task2(){
    int n;
    cout << "Введите количество строк в таблице умножения: ";
    cin >> n;
    
    int** table = new int*[n];
    for (int i = 0; i < n; i++){
        table[i] = new int[i + 1];
        for (int j = 0; j <= i; j++){
            table[i][j] = (i + 1) * (j + 1);
        }
    }
    
    cout << "Таблица умножения:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << setw(4) << table[i][j] << " ";
        }
        cout << endl;
    }
    
    for (int i = 0; i < n; i++){
        delete[] table[i];
    }
    delete[] table;
}

int main() {
    srand(time(0));
    int choice;
    cout << "Выберите задание (1 или 2): ";
    cin >> choice;
    
    switch (choice){
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        default:
            cout << "Неверный выбор!" << endl;
    }
    
    return 0;
}