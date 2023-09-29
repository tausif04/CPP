#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> muVec{1,3,4,5,6};
    vector<int> newVec(muVec);
    vector<int> vec1=newVec;
    for(int i:vec1)
       cout<<i<<" ";

}
