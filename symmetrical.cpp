#include<iostream>
#include<cmath>
using namespace std;
bool symmetrical(int number);
main()
{
 int num;
 int result;
 cout<<"enter a number"<<endl;
 cin>>num;
 result=symmetrical(num);
 if(result==true)
 {
 cout<<"num is symmetrical"<<endl;
 }
 if(result==false)
 {
 cout<<"number is not symmetrical"<<endl;
 }


}
bool symmetrical(int number)
{
 int rem1;
 int div1;
 int rem2;
 int div2;
 rem1=number%10;
 div1=number/10;
 rem2=rem1%10;
 div2=div1/10;
 if(rem1==div2)
 {                                                                                                                                                                   
 return true;
 }
 if(rem1!=div2)
 {
 return false;
 }
return 0;
}


