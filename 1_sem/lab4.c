#include <stdio.h>
#include <math.h>
int popop = 1;

int first(){
    int S = 0;
    for (int i = 1; i <= 117; i++){
        S += i;
    }
    return S;
}

float second(){
    float S = 0;
    for (int i = 1; i <= 25; i++){
        S += sin(i);
    }
    return S;
}
float third()
{
    float S = 0;
    int N = 19;
    for (int i = 2; i <= (N * 2); i += 2)
    {
        S += tan(i);
    }
    return S;
}
double chetire()
{
    double S = 0;
    for (double i = 0.1; i <= 1.9; i += 0.2)
    {
        S += log(i);
    }
    return S;
}
float fifth()
{
    float S = 0;
    float y = 1;
    float x = 1;
    for (float i = 0.18; i <= 0.36; i += 0.02)
    {
        S += pow((i * x), y);
        y += 1;
    }
    return S;
}
int sixth()
{
    int S = 0;
    int N = 20;
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            S -= i;
        }
        else
        {
            S += i;
        }
    }
    return S;
}
int seventh()
{
    int P = 1;
    int M = 5;
    for (int i = 1; i <= M; i++)
    {
        P = P * i;
    }
    return P;
}
int eight()
{
    int P = 2;
    for (int i = 4; i <= 12; i += 2)
    {
        P = P * i;
    }
    return P;
}
double nineth()
{
    double S = 1;
    double N = 10;
    double X = 5;
    for (float i = 1; i <= N; i++)
    {
        double P = 1;
        for (double fact = 1; fact <= i; fact++)
        {
            P = P * fact;
        }
        S += pow(X, i) / P;
    }
    return S;
}

int main()
{
    while(popop>0){
    int taskmgr;
    printf("Input task number: ");
    scanf("%d", &taskmgr, "\n");
    switch (taskmgr)
    {
    case 1:
        printf("Output: %d \n", first());
        break;
    case 2:
        printf("Output: %.3f \n", second());
        break;
    case 3:
        printf("Output: %.0f \n", third());
        break;
    case 4:
        printf("Output: %.3f \n", chetire());
        break;
    case 5:
        printf("Output: %.3f \n", fifth());
        break;
    case 6:
        printf("Output: %d \n", sixth());
        break;
    case 7:
        printf("Output: %d \n", seventh());
        break;
    case 8:
        printf("Output: %d \n", eight());
        break;
    case 9:
        printf("Output: %.2f \n", nineth());
        break;
    case 777:
        popop= 0;
        break;
    default:
        printf("Тудудунь, Неправлиьно, поробуй ещё раз \n");
        break;
    }
    }
}
