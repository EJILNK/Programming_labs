#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//first task
/* 
int main(){
    float a = 2.14; float b = -4.21; float c = 3.25; float X = -4.5; float h = -0.5; int i = 0; int zamen; int Y = 58;
    float L[Y];
    for (int i = 0; i < 58; i++){
        L[i] = a*pow(X,2)*sin(X)+b*X+c;
        X += h;
    }
    for (int z = 0; z < Y-1; z ++ ){ 
        for (int j = Y-2; j >= z; j -- ){ 
            if ( L[j] < L[j+1]){
                zamen = L[j]; 
                L[j] = L[j+1];
                L[j+1] = zamen;
            }
        }
    }
    printf("\n Отсортированный массив:\n");
    for (int z = 0; z < Y; z ++ ){
        printf("%.2f ", L[z]);
    }
}
 */


//second task
/* 
int main(){
    int numbs = 15; int y = -1; int x = 1; int p; int count = 0;
    int arr[15];
    int sort[15];

    for (int i = 0; i < 15; i++){
        sort[i]= 20;
    }
    printf("Массив: ");
    for (int i = 0; i < numbs; i++){
        arr[i] = rand()%11;
        printf("%d ",arr[i]);
    }

    sort[0]=arr[0];
    printf("\nЭлементы массива, исключая ранее встречавшиеся: %d ",arr [0]);

    for (int i = 1; i < numbs; i++){
        count = 0;
        for (int z = 0; z < i; z++){
            if (arr[i]!= sort[z]){
                count += 1;
            }
            p=z;
        }
        if (count == p+1){
            printf("%d ", arr[i]);
            sort[x]=arr[i];
            x+=1;
        }     
    }  
}
 */

//third task
/* 
int main(){
    float A[20]; int count = 0; int x =0;
    
    printf("Array A: ");
    for (int i = 0; i < 20; i++){
        A[i] = ((float)rand()/RAND_MAX)*21-10;
        if(A[i]>=0){
            count++;
        }
        printf("%.3f ", A[i]);
    }
    float B[count];
    printf("\nArray B: ");
    for (int i = 0; i < 20; i++){
        if(A[i]>=0){
            B[x] = A[i];
            printf("%.3f ", B[x]);
            x++;
        }
    }
}
 */

//fourth task
/* 
int main(){
    int Y = 20; int zamen; int a = 0; int b = 0; int g;
    int C[Y]; int D[Y]; int E[40];
    

    printf("Array C: ");
    for (int i = 0; i < Y; i++){
        C[i]=rand()%21;
        printf("%d ", C[i]);
    }
    printf("\nArray D: ");
    for (int i = 0; i < Y; i++){
        D[i]=rand()%21;
        printf("%d ", D[i]);
    }
    for (int z = 0; z < Y-1; z ++ ){ 
        for (int j = Y-2; j >= z; j -- ){ 
            if ( C[j] > C[j+1]){
                zamen = C[j]; 
                C[j] = C[j+1];
                C[j+1] = zamen;
            }
        }
    }
    for (int z = 0; z < Y-1; z ++ ){ 
        for (int j = Y-2; j >= z; j -- ){ 
            if ( D[j] > D[j+1]){
                zamen = D[j]; 
                D[j] = D[j+1];
                D[j+1] = zamen;
            }
        }
    }
    
    while (a < 20 || b < 20){
        g = a+b;
        if (a > 19){
            E[g] = D[b];
            b++;
            continue;
        }
        if (b > 19){
            E[g] = C[a];
            a++;
            continue;
        }
        if (C[a] <= D[b]){
            E[g] = C[a];
            a++;
        }
        else{
            E[g]=D[b];
            b++;
        }

    }
    printf("\nArray E: ");
    for (int i = 0; i < 40; i++){
        printf("%d ",E[i]);
    }
    
}
 */




