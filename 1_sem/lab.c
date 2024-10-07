#include <stdio.h>
#include <math.h>

//Вычисление сторон и площади треугольника.
/*  int main()
{
     float a,b,c,x, S;  
     printf ("\n Input c,x ");
     scanf ("%f%f",&c, &x);
     x=x/180*3.14159265;   //первод из градусов в радианы
     a=c*sin(x);
     b=c*cos(x);
     S=a*b/2;
     printf("\n Output: a=%7.2f     b=%7.2f   c=%7.2f      S=%7.2f ",  a, b, c, S);
    return 0;
} */

// Первое y=2   z=4
/*  int main() {
    
    float y;
    float z;
    printf("Input y: ");
    scanf("%f", &y);
    
    printf("Input z: ");
    scanf("%f", &z);
    
    float t = 5 / (1 + powf(y, 2));
    float x = 2 * y + 3 * sinh(t) - z;
    
    printf("x = %.2f\n", x);
} */


//Второе t=0.5   z=6
/*  int main(){ 

    float t;
    float z;
    printf("Input t: ");
    scanf("%f", &t);

    printf("Input z: ");
    scanf("%f", &z);

    float y = t + 2 * (cos(z)/sin(z));
    float x = ((3 * powf(y,2))/(4*tan(z) - 2* powf(t,2)));

    printf("x = %.2f\n", x);
    return 0;
}  */


//Я календарь...
/*  int main(){ 

    float t = 1;
    float z = 3;

    float y = sin(t);
    float x = 4 *powf(y,2)/(4*y*exp(z) - 2 * powf(t,3));

    printf("x = %.2f",x);

} */


//Четвертое
/*  int main(){

    float t = 2;
    float z = 3;

    float y = cos(t+z);
    float x = 4 * log(powf(y,3)) - z / t;

    printf("x = %.2f", x);
}  */


//Пятое
/*  int main(){

    float y = 2;
    float z = 4;

    float t = sin(2+z);
    float x = 6 * powf(t,2) - (1/tan(z)+1) / powf(y,2);

    printf("x = %.4f",x);
}  */


//шестое
  int main(){

    float z = 1;
    float t = 2;

    float y = tan(t) + z;
    float x = (8*powf(z,2)+1)/(y * exp(t) + powf(t,2));
    printf("x = %.2f",x);
}
