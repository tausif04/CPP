#include<iostream>
#include<vector>
using namespace std;
using std::vector;

int main()
{
    vector<int> v1(5,2);
    vector<string> v2{"fodh"};
    for(string i: v2)
     cout<<i<<" ";
}
