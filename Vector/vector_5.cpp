//In this example, at() function access the elements of vector .
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1{1,2,3,4,5,6};
    //at() function access the element at index 3
    cout<<v1.at(3);

}