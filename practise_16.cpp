//Reference to constant
#include <iostream>
using namespace std;
int main()
{
    const int ci=1034;
    const int &r1=ci;//[ok;both reference and underlying object are const]
   
    r1=42;//[Error;r1 is a reference to const]
    
    int &r2=ci;//[Error! non constant reference to a const object]

//Initialization and Reference to const
   int i=42;
   const int &r1=i;//[we can bind a const int to a plain int object]

   const int &r2=42;//[ok; r2 is a reference to const]

   const int &r3=r1 * 2;//[ok; r3 is a reference to const]

   int &r4=r1*2;//Error: r4 is a normal const and r1 is a reference to const
}