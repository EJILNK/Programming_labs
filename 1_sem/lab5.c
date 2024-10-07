#include <stdio.h>
#include <math.h>

// First task
/* 
int main (){
    float i, i2; i2 = 1;
    double x, pi, tc; x = 1; tc = 1* exp(1)-3;
    int n = 1;
    do {
        i2 += 2;
        i = (1 / i2);
        if (n%2 == 1){
            i *= -1;
        }
        x = x + i;
        pi = x * 4;
        n++;
    }
    while (1 / (2*n+1) > tc);

    printf("%.5f", pi);
    
}
 */

// Second task
/* 
int main(){
    float y, a, b, c, x, xe, h, minx, maxx; a = 2.14; b = -4.21; c = 3.25; x = -4.5; xe = -13.5; h = 0.5; maxx = -100000; minx = 100000;

    while (x >= xe)
    {
        y = ((a * pow(x,2)) + (b * x) + c) * sin(x);
        x -= h;
        if (y > maxx){
            maxx = y;
        }
        if (y < minx){
             minx = y;
        }
    }
    printf("maxim: %.3f\nminim:%.3f", maxx, minx);
}
 */

//Third task
/* 
int main(){
    int i, n, p, m, pr, x;  i = 1; pr = 0; p = 2; x = 0;
    printf("Please, input n: ");
    scanf("%d",&n);
    while (i < n){
        i++;
        m = 2;
        while (pr == 0){
            if (p% m != 0){
                m ++;
            }
            if (p % m == 0){
                if (p == m){
                    printf("%d ",p);
                    pr = 1;
                    x++;
                }
                if (p != m){
                    pr = 1;
                }
            }
        }
        pr = 0;
        p++;
    }
    printf("\n Total: %d", x);
    return 0;

}
 */

