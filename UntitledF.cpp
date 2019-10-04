#include<iostream>
#include<fstream>
#include<conio.h>
int main()
{
	char msg[20];
	ofstream o;
	o.open("test0",ios::in);
	o<<"hello friends"<<endl;
	o<<"bye"<<endl;
	o.close()
	ifstream i;
	i.open("test0",ios::out);
	i>>msg;
	cout<<msg<<endl;
	i>>msg;
	cout<<msg<<endl;
	getch();
    return 0;	
}
