#include <iostream>
#include<stdio.h>
#include<graphics.h>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    setcolor(GREEN);
    rectangle(20,20, 220, 140);

    //line(10, 10, 10, 130);
    //line(10, 10, 210, 10);
    //line(210, 10, 210, 130);
    //line(10,130, 210, 130);
    setfillstyle(SOLID_FILL,RED);
    circle(110, 80, 40);
    floodfill(115,85,2);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(21,21, 2);
    setcolor(WHITE);
    rectangle(10,10, 20, 400);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(11,11, WHITE);
    rectangle(8, 400, 100, 450);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(9,401, WHITE);
    getch();
    closegraph();
    return 0;
}
