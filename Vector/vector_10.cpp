// empty();This function determines whether the vector is empty or not.
#include<iostream>  
#include<vector>  
using namespace std;  
int main()  
{  
    vector<int> v;  
    if(v.empty())  
    cout<<"Vector v is empty";  
    else  
    cout<<"Vector v is not empty";  
    return 0;  
} 