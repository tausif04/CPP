//The auto type specifier 
#include<iostream>
#include<typeinfo>

using namespace std;

int main()  
  {
    auto a=10,b=20;
    auto sum=a+b;
    cout<<"SUM = "<<sum<<endl;
    cout <<typeid(sum).name()<<endl;

    double c=1.2,d=2.3;
    auto sum_d=c+d;
    cout<<"Sum = "<<sum_d<<endl;
    cout<<typeid(sum_d).name()<<endl;
    return 0;
  }
