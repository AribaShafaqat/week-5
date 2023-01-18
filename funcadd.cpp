#include<iostream>
using namespace std;
int add(int num1,int num2);
main()
{
int number1,number2;
cout<<"enter first number"<<endl;
cin>>number1;
cout<<"enter second  number"<<endl;
cin>>number2;
int total =add(number1,number2);
cout<<"sum is : "<<total;
}
int add(int num1,int num2)
{
int sum=num1+num2;
return sum;
}