#include <iostream>
#include <conio.h>

using namespace std;

class circle
{
    float r,a;
    public:
    circle(float x)
    {
        //cout<<"enter the value of radius";
        r=x;
    }
    circle (circle &c)
    {
        r=c.r;
    }
    //void read();
    void compute();
    void display();
};    
 /*inline void circle::read()
  {
      cout<<"enter redius:";
      cin>>r;
  }*/
  inline void circle::compute()
  {
     a=3.14*r*r;
  } 
  inline void circle::display()
  {
      cout<<"Area is :"<<a<<endl;
  }

int main()
{
    float p;
    cout<<"enter the radius:";
    cin>>p;
    circle c(p);
    
    //c.read();
    c.compute();
    c.display();
    circle c1(c);
    c1.compute();
    c1.display();
    
    return 0;
}

