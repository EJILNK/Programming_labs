#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    int N = 10; float a = 1, b = 20; float I1,I2; float chet, nechet;
    while (N < 1001)
    {
        
    
    float Array[N+1];
    float h = (b-a) / N;
    float x = a;

    for (int i = 0; i <= N; i++){
        Array[i] = pow(x,2)*log(x) / pow((1+x),2);
        x += h;
    }
    for (int i = 0; i <= N; i++){
        if (i == 0 || i == N){
            I1+=Array[i]/2;
        }
        else{
            I1+=Array[i];
        }  
    }
    I1*=h;
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

    printf("По формуле трапеций: %f \n", I1);
    printf("По формуле Симпсона: %f \n", I2);
    printf("\n"); 
    
    N*=10;

    }
}