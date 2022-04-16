Project Digital Calculator
//find the average of n integer number.
void average(void)
{
{
system("CLS");
float arra[10000],sum=0.0;
int n;
cout<<"Enter the amount "<<endl;
cin>>n;
system("CLS");
for(int i=0;i<n;i++)
{
cout<<"Enter the value of "<<i+1<<" : ";
cin>>arra[i];
cout<<endl;
}
for(int i=0;i<n;i++)
{
sum+=arra[i];
}
cout<<"The average is : "<<sum/n;
}
}
//=------------------------------ my part

//vector



void vect(void)
{

float a,b,c,sum;
int dimention;
system("CLS");
cout<<"Enter the dimention "<<endl;
cin>>dimention;
switch(dimention)
{
case 2:
system("CLS");
cout<<"a :- ";
cin>>a;
cout<<endl;
cout<<endl;
cout<<"b :- ";
cin>>b;
sum=pow((a*a+b*b),.5);
cout<<"The magnitude of your vector ";
cout<<sum;
break;
case 3:
system("CLS");
cout<<"a :- ";
cin>>a;
cout<<endl;
cout<<endl;
cout<<"b :- ";
cin>>b;
cout<<endl;
cout<<endl;
cout<<"c :- ";
cin>>c;
cout<<endl;
cout<<endl;
sum=pow((a*a+b*b+c*c),.5);
cout<<"The magnitude of your vector : ";
cout<<sum;
break;
default:
cout<<"Can't calculate "<<endl;
break;
}
}
//matrix
void matri(void)
{

float arra2d[10][10];
int dis,row,col;
cout<<" welcome to the matrix "<<endl;
cout<<"Enter the amount of row : ";cin>>row;
cout<<"Enter the amount of column : ";cin>>col;
for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++)
{
cin>>arra2d[i][j];
cout<<endl;
}



}
cout <<"The matrix will be"<<endl;
for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++)
{
cout<<"a ["<<i+1<<"]["<<j+1<<"] :";
cout<<arra2d[i][j];
cout<<endl;
}}}

//--------------------------------




// find the factorial of a number.
void factorial(void)
{
system("CLS");
int num,factorial=1;
cout<<"Enter the number = ";
cin>>num ;
if(num<0)
cout<<"Math erorr";
else if (num<=1)
cout<<"The factorial of "<<num<<"! ="<<factorial;
else
{
for(int x= num; x >= 2; x--)
{
factorial=factorial*x;
}
cout<<"The factorial of "<< num << "(!)"<< "is="<<factorial;
}
}
//simple calculation.
 case 1:
     system("CLS");
    //----------------------------------------------------------------------------------------------c1
      cout << "Enter operator: +, -, *, /: "<<endl;
      cin >> op;
      cout << "Enter two operands: ";
      cin >> num1 >> num2;
switch(op) {
case '+':
cout << num1 << " + " << num2 << " = " << num1 + num2;
break;

  case '-':
cout << num1 << " - " << num2 << " = " << num1 - num2;
break;

case '*':
cout << num1 << " * " << num2 << " = " << num1 * num2;
break;

case '/':


    try{
if (num2==0)
{
throw 1;
}
cout << num1 << " / " << num2 << " = " << num1 / num2;
break;
}
catch(int a)
{
cout<<"math error"<<endl;
}
break;


default:
// If the operator is other than +, -, * or /, error message is shown
cout << "Error! operator is not correct";
break;
}
