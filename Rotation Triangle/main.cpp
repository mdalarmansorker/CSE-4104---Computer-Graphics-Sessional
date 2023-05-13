#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<process.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{

int graphdriver=DETECT,graphmode;
initgraph(&graphdriver,&graphmode,"...\\bgi");
int x,y,x1,a[3][3];
double b[3][3],c[3][3];
cout<<"\n Enter Ist coordinates of triangle:";
cin>>a[0][0]>>a[1][0];
cout<<"\n Enter 2nd coordinates of triangle:";
cin>>a[0][1]>>a[1][1];
cout<<"\n Enter 3rd coordinates of triangle:";
cin>>a[0][2]>>a[1][2];
line(a[0][0],a[1][0],a[0][1],a[1][1]);
line(a[0][1],a[1][1],a[0][2],a[1][2]);
line(a[0][0],a[1][0],a[0][2],a[1][2]);
getch();
cleardevice();
cout<<"\n Enter angle of rotation:\n";
cin>>x;
b[0][0]=b[1][1]=cos((x*3.14)/180);
b[0][1]=-sin((x*3.14)/180);
b[1][0]=sin((x*3.14)/180);
b[2][2]=1;
b[2][0]=b[2][1]=b[0][2]=b[1][2]=0;
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{ c[i][j]=0;
for (int k=0; k<3;k++)
{
c[i][j]+=a[i][k]*b[k][j];
}
x1=(c[i][j]+0.5);
a[i][j]=x1;
}
}
cout<<"\n Triangle after rotation is:\n" ;
line(a[0][0],a[1][0],a[0][1],a[1][1]);
line(a[0][1],a[1][1],a[0][2],a[1][2]);
line(a[0][0],a[1][0],a[0][2],a[1][2]);
getch();
closegraph();
return 0;
}
