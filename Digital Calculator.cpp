Project Digital Calculator
# include <iostream>
using namespace std;

int main() {
    float a,b;
    char oper;
    cout<<"Enter two operators : ";
    cin>>a;
    cin>>b;
    cout<<" which one you want to do :"<<endl;
    cout<<" +[addition]"<<endl;
    cout<<"-[subtraction]"<<endl;
    cout<<"*[multiplication]"<<endl;
    cout<<"/[division] "<<endl;
    cin>>oper;
    switch(oper){
case'+' :
    cout<<a+b<<endl;
    break;
case'-' :
    cout<<a-b<<endl;
    break;
case'*' :
    cout<<a*b<<endl;
    break;
case'/' :
    cout<<a/b<<endl;
    break;
default:
    cout<<" sorry!!!!!you are not given right value "<<endl;
    }
    return 0;
}
