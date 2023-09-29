#include<iostream>
using namespace std;
int main()
{
  string readme("hellow there");
  decltype(readme.size()) i;
  for(i = 0; i != readme.size() && !isspace(readme[i]); ++i){
    readme[i]=toupper(readme[i]);
  }
  cout<<readme<<endl;   
}

