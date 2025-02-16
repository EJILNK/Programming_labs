#include <stdio.h>
#include <math.h>

void first(int year){
    int a = year % 19;
    int b = year % 4;
    int c = year % 7;
    int d = (19 * a + 15) % 30;
    int e = (2 * b + 4 * c + 6 * d + 6) % 7;
    int f = d + e;
    if (f <= 26){
        printf("Пасха %d Апреля \n",f+4);
    }
    else{
        printf("Пасха %d мая \n", f-26);
    }

}
void second(float x, int n){
    float otvet; float temp;
    temp = x;
    for (int i = 1; i <= n; i++){
        if(i > 1){
            x *= temp;
            otvet = x;
        }
        else{
            otvet = x;
        }
    }
    for (int i = -1; i >= n; i--){
        if(i < -1){
            x *= temp;
            otvet = 1/x;
        }
        else{
            otvet = x;
        }
    }
    printf("%f \n", otvet);
    
}

void third(double x){
    double cosinus = 1; double eps = 0.0001; int n = 1; double factor; double temp = 1;
    while(x>6.28){
        x -= 6.28;
    }
    while(x<-6.28){
        x += 6.28;
    }

    do{
        factor = 1;
        for (int i = 1; i <= 2 * n; i++){
            factor *= i;
        }
        temp = pow(-1,n) * (pow(x,2*n)/factor);
        cosinus += temp;
        n++;

    }
    while(fabs(temp) >= eps);

    printf("\n Косинус по ряду тейлора: %f", cosinus);
    printf("\n Стандартный косинус: %f", cos (x));
    printf("\n Разница функций: %f \n", cos(x)-cosinus);
    

}

int main(){
    int a = 1;
    while(a == 1){
        int task;
        printf("Введите номер задания(1-3) (0 для выхода): ");
        scanf("%d", &task);
        switch(task){
        case 1:
            int year;
            printf("Введите год, для которого нужно вычислить дату пасхи: ");
            scanf("%d", &year);
            first(year);
            break;
        case 2:
            float x; int n;
            printf("Введите число и степень в которую его нужно возвести: ");
            scanf("%f %d", &x, &n);
            second(x,n);
            break;
        case 3:
            double xy;
            printf("Введите косинус какого угла нужно вычислить (В радианах): ");
            scanf("%lf", &xy);
            third(xy);
            break;
        
        case 0:
            printf("Пока))");
            a++;
            break;
        }
    }
}