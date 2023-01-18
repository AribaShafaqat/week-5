#include<iostream>
#include<cmath>
using namespace std;
float positive(float a,float b,float c);
float negative(float a,float b,float c);
main()
{
 float aa,bb,cc;
 cin>>aa>>bb>>cc;
 float posval=positive(aa,bb,cc);
 cout<<"positive quard value is :"<<posval<<endl;
 float negval=negative(aa,bb,cc);
 cout<<"negative quard value is :"<<negval<<endl;
 

}
float positive(float a,float b,float c)
{

 a=5,b=6,c=1;
 float power;
 float squareroot;
 power=pow(6,2);
 squareroot=sqrt(power-4*a*c);
 float quardraticformula=(-b+squareroot)/(2*a);
 return quardraticformula;
}
float negative(float a,float b,float c)
{ 
 a=5,b=6,c=1;
 float power;
 float squareroot;
 power=pow(6,2);
 squareroot=sqrt(power-4*a*c);
 float quardraticformula=(-b-squareroot)/(2*a);
 return quardraticformula;
}


 
