#include<iostream>
using namespace std;
int main ()
{
  int n;
  cout<<"Enter the number:";
  cin>>n;
  if(n%2==0)
  {
    cout<<"The Number is Even."<<endl;
  }
  else{
    cout<<"The Number is Odd."<<endl;
  }
  for(int i=0;i<4;i++)
    cout<<"ok"<<endl;
 return 0;
}