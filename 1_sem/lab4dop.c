#include <stdio.h>
/* 
ELKA(int propusk, int elochka){
    for (int i = 0; i < propusk; i++){
        printf(" ");
    }
    for (int i = 0; i < elochka; i++){
        printf("\x1B[32m#\x1B[0m");
    }
    printf("\n");
}



int main(){
    int N; int s;
    N = rand()%35+1;
    s = rand()%6+1;
    for (int i = 1; i <= N; i++){
        ELKA(N-i,i*2-1);
    }
    for (int i = 1; i <= s; i++){
        for (int i = 0; i < N-1; i++){
        printf(" ");
        }
        printf("#");
        printf("\n");
    }

}
 */


/* 
int main(){
    float Human_age, dog_age; dog_age = 0;
    printf("Input human age: ");
    scanf("%f", &Human_age);
    if (Human_age < 1 || Human_age > 100){
        printf("Incorrect input");
    }
    else{
        for (float i = 1; i <= Human_age; i++){
            if (i == 1 || i == 2){
                dog_age += 10.5;
            }
            else{
                dog_age += 4;
            }
            
        }
    printf("Dog age = %f",dog_age);
    }
}
 */

