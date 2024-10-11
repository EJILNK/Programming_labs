#include <stdio.h>
#include <stdlib.h>

//First task
/* 
int main(){
    const int n = 20;
    int osnov[n];

    for (int i = 0; i < n; i++){
        osnov[i] = rand()%21-10;
        printf("%d ", osnov[i]);
    }
    printf("\nPolozh:");

    for (int i = 0; i < n; i++){
        if (osnov[i]>=0){
            printf("%d ", osnov[i]);
        }
    }
    printf("\nOtric:");

    for (int i = 0; i < n; i++){
        if (osnov[i] < 0){
            printf("%d ", osnov[i]);
        }
    }
}
 */

//Second task
/* 
int main(){
    int n,factn,facti,factni; factn = 1;
    printf("Input n > 0: ");
    scanf("%d",&n);
    if (n < 1){
        printf("Incorrect input");
    }
    else{
    int C[n];
    for (int i = 1; i <= n; i++){
        factn = factn * i;
    }
    for (int i = 1; i <= n; i++){
        facti = 1;
        for (int z = 1; z <= i; z++){
            facti = facti * z;
        }
        factni = 1;
        if ((n-i) == 0){
            factni = 1;
        }
        else{
            for (int z = 1; z <= (n-i); z++){
                factni = factni * z;
            }
        }
        C[i-1] = factn / (facti * factni);  
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", C[i]);
    }
    }
}
 */

//Third task
/* 
int main(){
    float C[20];
    printf("Array: ");
    for (int i = 0; i < 20; i++){
        C[i] = ((float)rand()/RAND_MAX)*10;
        printf("%.4f ", C[i]);
    }
    for (int i = 1; i < 19; i++){
        if (C[i]>C[i-1] && C[i]>C[i+1])
        {
            printf("\n%.4f", C[i]);
        }
    }  
}
 */

//Fourth task 4 2 7 6 4 4 0 0 1 3 3 6 1 5 1 1
/* 
int main(){
    int cardnum[16];
    int chs, nechs, cardval; chs = 0; nechs = 0; cardval = 0;
    printf("Input card number: ");
    for (int i = 0; i < 16; i++){
        int z;
        scanf("%d",&z);
        cardnum[i] = z;
    }
    for (int i = 1; i < 16; i += 2){
        chs += cardnum[i];
    }
    for (int i = 0; i < 16; i += 2){
        if (cardnum[i]*2>9){
            nechs += cardnum[i]*2 - 9;
        }
        else{
            nechs += cardnum[i] * 2;
        }
    }
    cardval = chs + nechs; 
    if (cardval % 10 == 0){
        printf("The card number is correct");
    }
    else{
        printf("The card number is incorrect");
    }
    
}
 */