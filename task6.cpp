#include<iostream>
using namespace std;
main()
{
string name;
int matric;
int inter;
int ecat;
float aggregate;
cout<<"Enter your name:";
cin>> name;
cout<<"Enter your matric marks:";
cin>>matric;
cout<<"Enter your inter marks:";
cin>>inter;
cout<<"Enter your Ecat marks:";
cin>>ecat;
aggregate=(ecat/400)+(inter/1100)+(matric/1100);
cout<<"aggregate is :"<<aggregate;


}
