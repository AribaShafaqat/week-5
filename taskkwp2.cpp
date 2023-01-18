#include<iostream>
using namespace std;
int chkcharecter(char charecter);
main()
{
 char charcter;
 cout<<"enter a charecter"<<endl;
 cin>>charcter;
 int checkcharecter;
 checkcharecter=chkcharecter(charcter);
 cout<<checkcharecter;
  
}
int chkcharecter(char charecter)
{
 if(charecter=='A'||charecter=='B'||charecter=='C'||charecter=='D'||charecter=='E'||charecter=='F'||charecter=='G'||charecter=='H'||charecter=='I'||charecter=='J'||charecter=='K'||charecter=='L'||charecter=='M'||charecter=='N'||charecter=='O'||charecter=='P'||charecter=='Q'||charecter=='R'||charecter=='S'||charecter=='T'||charecter=='U'||charecter=='V'||charecter=='W'||charecter=='X'||charecter=='Y'||charecter=='Z')
 {
 cout<<"capital  letter"<<endl;
 }
 if(charecter=='a'||charecter=='b'||charecter=='c'||charecter=='d'||charecter=='e'||charecter=='f'||charecter=='g'||charecter=='h'||charecter=='i'||charecter=='j'||charecter=='k'||charecter=='l'||charecter=='m'||charecter=='n'||charecter=='o'||charecter=='p'||charecter=='q'||charecter=='r'||charecter=='s'||charecter=='t'||charecter=='u'||charecter=='v'||charecter=='w'||charecter=='x'||charecter=='y'||charecter=='z')
 {
 cout<<"small letter"<<endl;
 }
return 0;

}