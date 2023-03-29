#include <iostream>
#include<stdio.h>
#include"graphics.h"
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    line(10, 10, 100, 130);
    getch();
    closegraph();
    return 0;
}
