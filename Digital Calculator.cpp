Project Digital Calculator
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
