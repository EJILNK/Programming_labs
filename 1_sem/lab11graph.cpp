#include <graphics.h>
#include <cmath>
#include <iostream>

int main(){
    int HEIGHT = 1080;
    int WIDTH = 1920;
    float PI = 3.1415;
    initwindow(WIDTH,HEIGHT);
    line(0, HEIGHT / 2, WIDTH, HEIGHT / 2);
    line(0, 0, 0, HEIGHT);
    for (float x = 0; x <= 1; x += 0.00002){
        float y = -sin(x*PI) * 500 + HEIGHT/2;
        putpixel(x*1000,y,RED);
    }
    for (float x = 0; x <= 1; x += 0.00002){
        putpixel(x*1000,HEIGHT/2,RED);
    }
    setfillstyle(1,MAGENTA);
    floodfill(500,400,RED);
    for (float x = 0; x <= 1; x += 0.00002){
        putpixel(x*1000,HEIGHT/2,BLUE);
    }
    setcolor(BLUE);
    outtextxy ( 50, 50, "f(x)=0");
    setcolor(RED);
    outtextxy ( 50, 70, "f(x)=sin(x)");
    getch();

    
}
