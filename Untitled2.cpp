#include <iostream>
#include <conio.h>
using namespace std;
 class complex
 {
     int x,y;
     public:
     void read()
     {
         cout<<"enter the values";
         cin>>x>>y;
     }
     
       complex operater+(complex c)
     {
         complex c1;
         c1.x=x+c.x;
         c1.y=y+c.y;
         return c1;
     }
     void display()
     {
         if(y<0)
         cout<<x<<y<<"i";
         else
         cout<<x<<"+i"<<y;
     }
 };
  int main()
  {
      //clrscr()
      complex c1;
      complex c2;
      complex c3;
      c1.read();
      c2.read();
      c3=c1 + c2;
      c3.display();
      getch();
      return 0;
  }


