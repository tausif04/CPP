#include<iostream>
#include<vector>
using namespace std;
using std::vector;
int main()
{
    vector<int> myVec;
  for(int i=0;i<100;i++){
    myVec.push_back(i);
  }
  for(int i:myVec)
      cout<<i<<" ";
}
