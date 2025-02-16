#include <stdio.h>

// 1 задание
void returnpolozhit() {
    int num;
    scanf("%d", &num);
    
    if (num == 0) {
        return;
    }
    returnpolozhit(); 
    
    if (num > 0) {
        printf("%d ", num); 
    }
    
}




// 2 задание
void print_numbers(int *arr, int index, int size) {

    if (index >= size) {
        return;
    }

    if (arr[index] < 0) {
        printf("%d ", arr[index]);
    }

    
    print_numbers(arr, index + 1, size);

    if (arr[index] > 0) {
        printf("%d ", arr[index]);
    }
}


void toBinary(int n) {
    if (n > 1) {
        toBinary(n / 2);
    }
    printf("%d", n % 2);
}



int main() {
    int numbers[] = {3, -1, 4, -2, 5, -3, 6, -3}; 
    int size = sizeof(numbers)/sizeof(numbers[0]); 
    int number;

//1
    printf("Первое: ");
    printf("Введите число (0 для завершения): ");
    returnpolozhit();

// 2
    printf("\n 2 Вывод: \n");
    print_numbers(numbers, 0, size); 

// 3
    printf("\nВведите число: ");
    scanf("%d", &number);

    printf("Двоичное представление: ");
    toBinary(number);
    printf("\n");


    return 0;
}
