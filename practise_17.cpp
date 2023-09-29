//Type Alias
#include<iostream>
using namespace std;
//usinsg method 1 typedef
int main()
{
     typedef double wages;
     typedef float percent;
     wages w1=100;
     wages w2=1300;
     percent p1=10.5;
     percent p2=15.5;

 cout<<"The wages earned by Worker-1= $"<<w1<<endl;
 cout<<"The wages earned by Worker-2= $"<<w2<<endl;
 cout<<"Worker-1 will get a raise by "<<p1<<"%"<<endl;
 cout<<"Worker-2 will get la raise by "<<p2<<"%"<<endl;


//using method 2 using

using letter = char;
  using num= int;
  letter a='A';
  letter b='B';\
  num n1=65;
  num n2=66;
  cout<<"Ascii value of "<<a<<" is "<<n1<<endl;
  cout<<"AScii value of "<<b<<" is "<<n2<<endl;

  return 0;
}
