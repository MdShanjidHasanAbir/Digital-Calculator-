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
