#include<iostream>
using namespace std;
int main()
{
    string readme("hellow there");
    if(!readme.empty())
      readme[0]=toupper(readme[0]);
    
    cout<<readme<<endl;
}