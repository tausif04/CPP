#include <iostream>
using namespace std;
int main()
{
   int ival=1024;
   int &refval=ival;

   cout<<"Ival= "<<ival<<endl<<"refval= "<<refval<<endl;
   refval=1000;
   cout<<"New Ival= "<<ival<<endl<<"New refval= "<<refval<<endl;

 return 0;
}