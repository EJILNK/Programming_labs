#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

//first task
/* 
int main(){
    int A[10][20]; int temp = 0;

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 20; j++){
            A[i][j] = rand()%10;
        }
    }
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 20; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    for (int i = 0; i < 10; i+=2){
        for (int j = 0; j < 20; j++){
            temp = A[i][j];
            A[i][j] = A[i+1][j];
            A[i+1][j]=temp;
        }
    }
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 20; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    } 
}
 */

//second task //Тут где-то есть ошибка, ответ должен быть в виде матрицы
/* 
int main(){
    float A[5][5]; float summ = 0; float otvet = 0;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            A[i][j] = ((float)rand()/RAND_MAX)*10;
        }
    }
    for (int i = 0; i < 5; i+=2){
        summ = 0;
        otvet = 0;
        for (int j = 0; j < 5; j++){
            summ += A[i][j];
        }
        otvet = A[i][0]/summ;
        printf("%f ", otvet);
    }
}
 */

//third task
/* 
int main(){
    int A[5][5];int B[5][5];

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            A[i][j] = rand()%10;
        }
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    } 
    printf("\n\n");

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            B[j][i] = A[i][j];
        }
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    } 
}
 */

//fourth task
/* 
bool isMagicSquare(int A[3][3]){
    int pip = 0;
    int summRows[3] = {0};
    int summCols[3] = {0};
    int summDiagonal1 = 0;
    int summDiagonal2 = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            summRows[i] += A[i][j];
            summCols[j] += A[i][j];
            if (i == j){
                summDiagonal1 += A[i][j];
            }
            if (i + j == 3 - 1){
                summDiagonal2 += A[i][j];
            }
        }
    }
    for (int i = 0; i < 3; i++){
        if (summRows[i]==summCols[i] && summRows[i] == summDiagonal1 && summCols[i] == summDiagonal2 && summDiagonal1 >= 15){
            pip++;
        }
    }
    if (pip == 3){
        return true;
    }
    else{return false;}
}

int main(){
    srand(time(NULL));
    int A[3][3]; int attempts = 0;
    
    do{
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                A[i][j] = rand()%10;
            }
        }
        attempts++;
    } while (!isMagicSquare(A));
    
    printf("матрица: \n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("Количество попыток: %d", attempts); 
}
 */