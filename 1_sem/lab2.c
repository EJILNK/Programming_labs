#include <stdio.h>

// Колобок повесился
/* 
int main(){
int x1, x2, x3, x4, x5, x6;
int raz = 0;
scanf("%d %d %d %d %d %d", &x1, &x2, &x3, &x4, &x5, &x6);

int summ = x1 + x2 + x3 + x4 + x5+ x6;
int umn = x1 * x2 * x3 * x4 * x5 * x6;

if (summ>umn){
    raz = summ - umn;
    printf("Разница: %d",raz);
}
else if (umn>summ){
    raz = umn - summ;
    printf("Разница: %d",raz);
}
else{
    printf("0");
}
}
 */

// Слон сел на колобка и сказал: "Блин"
/*
int main(){
    int x1, x2, x3, x4, x5;
    int summp = 0;

    scanf("%d %d %d %d %d", &x1, &x2, &x3, &x4, &x5);
    if (x1>0){
        summp += x1;
    }
    if (x2>0){
        summp += x2;
    }
    if (x3>0){
        summp += x3;
    }
    if (x4>0){
        summp += x4;
    }
    if (x5> 0){
        summp += x5;
    }
    printf("Сумма полож: %d",summp);
}
 */

// Русалка села на шпагат
/*
int main(){
    int x1, x2, x3, x4;

    scanf("%d %d %d %d", &x1, &x2, &x3, &x4);

    if (x1<0){
        x1 = 0;
    }
    if (x2<0){
        x2 = 0;
    }
    if (x3<0){
        x3 = 0;
    }
    if (x4<0){
        x4 = 0;

    }
    printf("%d %d %d %d", x1, x2, x3, x4);
}
 */

// Скажи банка ...
/*
int main(){
    int x1, x2, x3, x4, x5, x6, x7, x8;
    int pol = 0;
    int otr = 0;
    int nuls = 0;
    scanf("%d %d %d %d %d %d %d %d", &x1, &x2, &x3, &x4, &x5, &x6, &x7, &x8);

    if (x1>0 || x1< 0){
        if (x1>0)
        {
            pol += 1;
        }
        else
        {
            otr += 1;
        }
    }
    else
    {
        nuls += 1;
    }

    if (x2>0 || x2< 0){
        if (x2>0)
        {
            pol += 1;
        }
        else
        {
            otr += 1;
        }
    }
    else
    {
        nuls += 1;
    }

    if (x3>0 || x3< 0){
        if (x3>0)
        {
            pol += 1;
        }
        else
        {
            otr += 1;
        }
    }
    else
    {
        nuls += 1;
    }

    if (x4>0 || x4< 0){
        if (x4>0)
        {
            pol += 1;
        }
        else
        {
            otr += 1;
        }
    }
    else
    {
        nuls += 1;
    }

    if (x5>0 || x5< 0){
        if (x5>0)
        {
            pol += 1;
        }
        else
        {
            otr += 1;
        }
    }
    else
    {
        nuls += 1;
    }

    if (x6>0 || x6< 0){
        if (x6>0)
        {
            pol += 1;
        }
        else
        {
            otr += 1;
        }
    }
    else
    {
        nuls += 1;
    }
    if (x7>0 || x7< 0){
        if (x7>0)
        {
            pol += 1;
        }
        else
        {
            otr += 1;
        }
    }
    else
    {
        nuls += 1;
    }
    if (x8>0 || x8< 0){
        if (x8>0)
        {
            pol += 1;
        }
        else
        {
            otr += 1;
        }
    }
    else
    {
        nuls += 1;
    }

    printf("Положительные: %d \n Отрицательные: %d \n Нули: %d", pol, otr, nuls);
}
 */

// Шутка 5
/*
int main(){
    int x1, x2, x3, x4;
    scanf("%d %d %d %d", &x1, &x2, &x3, &x4);

    if (x1<x2 && x1<x3 && x1<x4){
        printf("Порядковый номер наименьшего: 1");
    }
    else if (x2<x1 && x2<x3 && x2<x4){
        printf("Порядковый номер наименьшего: 2");
    }
    else if (x3<x2 && x3<x1 && x3<x4){
        printf("Порядковый номер наименьшего: 3");
    }
    else if (x4<x1 && x4<x2 && x4<x3){
        printf("Порядковый номер наименьшего: 4");
    }
}
 */

// Что сказал слепой войдя в бар? "Всем привет, кого не видел"
/*
int main(){

    int x1, x2, x3, x4;
    scanf("%d %d %d %d", &x1, &x2, &x3, &x4);
    int naim = 0;
    int naib = 0;

    if (x1<x2 && x1<x3 && x1<x4){
        naim = x1;
    }
    else if (x2<x1 && x2<x3 && x2<x4){
        naim = x2;
    }
    else if (x3<x2 && x3<x1 && x3<x4){
        naim = x3;
    }
    else if (x4<x1 && x4<x2 && x4<x3){
        naim = x4;
    }

    if (x1>x2 && x1>x3 && x1>x4){
        naib = x1;
    }
    else if (x2>x1 && x2>x3 && x2>x4){
        naib = x2;
    }
    else if (x3>x2 && x3>x1 && x3>x4){
        naib = x3;
    }
    else if (x4>x1 && x4>x2 && x4>x3){
        naib = x4;
    }

    printf("Разность между наибольшим и наименьшим: %d", (naib - naim));
}
 */

// Шутка 7

int main(){
    int K,M,N;
    int nm, nb, sr;

    scanf("%d %d %d", &K, &M, &N);

    if (K<M && K<N){
        nm = K;
    }
    else if (M<K && M<N){
        nm = M;
    }
    else{
        nm = N;
    }

    if (K>M && K>N){
        nb = K;
    }
    else if (M>K && M>N){
        nb = M;
    }
    else{
        nb = N;
    }

    if ((K>M && K<N)||(K>N && K<M)){
        sr = K;
    }
    else if ((M>K && M<N)||(M<K && M>N)){
        sr = M;
    }
    else{
        sr = N;
    }

    printf("%d %d %d",nm,sr,nb);

}


// Шутка 8
/* 
int main(){
    int x1, x2, x3, x4;
    scanf("%d %d %d %d", &x1, &x2, &x3, &x4);
    int max, submax;

    max = x1>x2&&x1>x3&&x1>x4? x1:x2>x3&&x2>x4? x2:x3>x4? x3:x4;

    if ((x1>x2 && x1>x3 && x1<x4) || (x1>x2 && x1<x3 && x1>x4)|| (x1<x2 && x1>x3 && x1>x4))
    {
        submax = x1;
    }
    else if ((x2>x1 && x2>x3 && x2<x4) || (x2>x1 && x2<x3 && x2>x4)|| (x2<x1 && x2>x3 && x2>x4))
    {
        submax = x2;
    }
    else if ((x3>x2 && x3>x1 && x3<x4) || (x3>x2 && x3<x1 && x3>x4)|| (x3<x2 && x3>x1 && x3>x4))
    {
        submax = x3;
    }
    else if ((x4>x2 && x4>x3 && x4<x1) || (x4>x2 && x4<x3 && x4>x1)|| (x4<x2 && x4>x3 && x4>x1))
    {
        submax = x4;
    }
    printf("Два наибольших числа: %d, %d", max, submax);

}

 */
// Шутка 9
/* 
int main(){
    int x1, x2, x3, max, min;
    scanf("%d %d %d", &x1, &x2, &x3);

    max = x1>x2 && x1>x3? x1 : x2>x3? x2 : x3;
    min = x1<x2 && x1<x3? x1 : x2<x3? x2 : x3;

    if (min == x1 && max == x2)
    {
        x1 = max;
        x2 = min;
    }

    else if (min == x1 && max == x3)
    {
        x1 = max;
        x3 = min;
    }

    else if (min == x2 && max == x1)
    {
        x2 = max;
        x1 = min;

    }
    else if (min == x2 && max == x3)
    {
        x2 = max;
        x3 = min;
    }

    else if (min == x3 && max == x1)
    {
        x3 = max;
        x1 = min;
    }
    else if (min == x3 && max == x2)
    {
        x3 = max;
        x2 = min;
    }

    printf("Вывод: %d %d %d", x1, x2, x3);

} */

