Project Digital Calculator
//find the factorial of a number..
#include<iostream>
using namespace std;
int main()
{
int num,factorial=1;
cout<<"enter the number=";
cin>>num ;
if(num<0)
cout<<"Math erorr";
else if (num<=1)
cout<<num<<"! ="<<factorial;
else
{
for(int x= num; counter >= 2; x--)
{
factorial=factorial*x;
}
cout<<"The factorial of "<< num<< "(!)"<< "is="<<factorial;
}
return 0;
}
