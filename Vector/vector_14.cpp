//capacity();determines the current capacity of the vector.
#include<iostream>  
#include<vector>  
using namespace std;  
int main()  
{  
    vector<char> v{'1','2','3','4','5'};  
    int c=v.capacity();  
    cout<<"Capacity of the vector is :"<<c;  
    return 0;  
}