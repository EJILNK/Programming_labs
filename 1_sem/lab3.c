#include <stdio.h>
#include <stdlib.h>
/* 
int main(){

    int month;

    printf("input number: ");
    scanf("%d", &month);

    switch(month){
        case 1: case 2: case 3:
            printf("Квартал 1\n");
            if (month == 1 || month == 2)
                printf("Зима\n");
            else
                printf("Весна\n");
            break;
        case 4: case 5: case 6:
            printf("Квартал 2\n");
            if (month == 4 || month == 5)
                printf("Весна\n");
            else
                printf("Лето\n");
            break;
        case 7: case 8: case 9:
            printf("Квартал 3\n");
            if (month == 7 || month == 8)
                printf("Лето\n");
            else
                printf("Осень\n");
            break;
        case 10: case 11: case 12:
            printf("Квартал 4\n");
            if (month == 10 || month == 11)
                printf("Осень\n");
            else
                printf("Зима\n");
            break;
            printf("Ne chinazes");
        default:
            printf("Переделывай");
    }
    return 0;
}
 */

/* 
int main(){

    int C;

    printf("Input number from -9 to 9: ");
    scan:    scanf("%d", &C);
    int B = abs(C);
    
    switch (C)
    {
    case -9: case -8: case -7: case -6: case -5: case -4: case -3: case -2: case -1:
        printf("Минус ");
        break;
    case 9: case 8: case 7: case 6: case 5: case 4: case 3: case 2: case 1: case 0:
        break;
    default:
        printf("Wrong number! Input number again: ");
        goto scan;
        break;
    }
    switch (B)
    {
    case 0:
        printf("Ноль");
        break;
    case 1:
        printf("Один");
        break;
    case 2:
        printf("Два");
        break;
    case 3:
        printf("Три");
        break;
    case 4:
        printf("Четыре");
        break;
    case 5:
        printf("Пять");
        break;
    case 6:
        printf("Шесть");
        break;
    case 7:
        printf("Семь");
        break;
    case 8:
        printf("Восемь");
        break;
    case 9:
        printf("Девять");
        break;
    default:
        break;
    }
}
 */

/* 
int main(){
    int year;
    printf("\n\nВведите год: ");
    scanf("%d",&year);
    int A = year % 12;

    switch (A)
    {
    case 0:
        printf("Год обезьяны");
        break;
    case 1:
        printf("Год петуха");
        break;
    case 2:
        printf("Год собаки");
        break;
    case 3:
        printf("Год свиньи");
        break;
    case 4:
        printf("Год крысы");
        break;
    case 5:
        printf("Год коровы");
        break;
    case 6:
        printf("Год тигра");
        break;
    case 7:
        printf("Год зайца");
        break;
    case 8:
        printf("Год дракона");
        break;
    case 9:
        printf("Год змеи");
        break;
    case 10:
        printf("Год лошади");
        break;
    case 11:
        printf("Год овцы");
        break;
    default:
        break;
    }
}
 */


/* 
int main(){
    int dvm[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int M, D, T;
    printf("Введите номер месяца: ");
    scanf("%d",&M);
    if (M < 1 || M > 12){
        printf("Неверный месяц\n");
    }
    printf("Введите номер дня в этом месяце: ");
    scanf("%d",&D);
    if(D < 1 || D > dvm[M]){
        printf("Неправильная дата\n");
        
    }
    for (int i = 1; i < M; i++){
        T += dvm[i];
    }
    T += D;
    printf("Номер дня в году: %d",T);
}
 */
