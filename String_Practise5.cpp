#include<iostream>
using namespace std;
int main()
{
    string readme("Hellow, There!!!");
    for(auto &i : readme)
      i=toupper(i);

   cout<<"Converted Strring = "<<readme;
}