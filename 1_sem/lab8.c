#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    int N = 10; double a = 1, b = 20;
    while (N < 100001){
        double I1 = 0,I2 = 0; double chet= 0, nechet = 0;
        printf("Для N = %d: \n", N);    
    
        double Array[N+1];
        double h = (b-a) / N;
        double x = a;
        //Введение значений функции в массив
        for (int i = 0; i <= N; i++){
            Array[i] = pow(x,2)*log(x) / pow((1+x),2);
            x += h;
        }

    //Формула трапеций
        for (int i = 0; i <= N; i++){
            if (i == 0 || i == N){
                I1+=Array[i]/2;
            }
            else{
                I1+=Array[i];
            }  
        }
    I1*=h;
    //Формула Симпсона
        for (int i = 0; i <= N; i++){
            if (i == 0 || i == N){
                I2 += Array[i];
            }
            else if (i%2 == 0){
                chet += Array[i];
            }
            else{
                nechet += Array[i];
            } 
        }
    I2 = (h/3) * (I2 + 4*nechet + 2*chet);
    //Вывод
    printf("По формуле трапеций: %f \n", I1);
    printf("По формуле Симпсона: %f \n", I2);
    printf("\n"); 
    
    N*=10;

    }
}