Project Digital Calculator

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
