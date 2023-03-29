#include <iostream>
#include<stdio.h>
#include<graphics.h>
#include<math.h>
using namespace std;

int main()
{
    double x1, y1, x2, y2;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    cout<<"x1, y1, x2, y2: ";
    cin>>x1>>y1>>x2>>y2;
    //line(x1, y1, x2, y2);
    double m = (y2-y1)/(x2-x1);
    double b = y1 - m*x1;

    for(int x=round(x1); x<=x2;x+=1)
    {
        int y = round(m)*x + round(b);
        putpixel(x, y, GREEN);
    }


    getch();
    closegraph();
    return 0;
}
