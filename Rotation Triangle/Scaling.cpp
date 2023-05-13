#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
using namespace std;

int main2()
{
int gd=DETECT,gm;
initgraph(&gd, &gm,"");
cleardevice();
int x1,y1,x2,y2,x3,y3,x4,y4;
float sx,sy;
cout<<"Enter the first coordinates of triangle\n";
cin>>x1>>y1;
cout<<"Enter the second coordinates of triangle\n";
cin>>x2>>y2;
cout<<"Enter the third coordinates of triangle\n";
cin>>x3>>y3;
int poly[8]={x1,y1,x2,y2,x3,y3,x1,y1};
cleardevice();
drawpoly(4,poly);
getch();
cout<<"Enter the scaling factors\n";
cin>>sx>>sy;
x4=sx*x1-x1;
y4=sy*y1-y1;
x1=sx*x1-x4;
y1=sy*y1-y4;
x2=sx*x2-x4;
y2=sy*y2-y4;
x3=sx*x3-x4;
y3=sy*y3-y4;
poly[0]=x1;
poly[1]=y1;
poly[2]=x2;
poly[3]=y2;
poly[4]=x3;
poly[5]=y3;
poly[6]=x1;
poly[7]=y1;
getch();
cleardevice();
drawpoly(4,poly);
getch();
closegraph();
return 0;
}
