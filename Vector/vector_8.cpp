//swap();This function is used to exchange the elements specified in two vectors
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<string> v1{"One","two","three"};
    vector<string> v2{"1","2","3"};
    cout<<"Before swaping v1:"<<endl;
    for(int i=0;i<v1.size();i++){
        cout<<v1.at(i)<<" ";
    }
    cout<<"\n";
    cout<<"Before swaping v2:"<<endl;
    for(int i=0;i<v2.size();i++){
        cout<<v2.at(i)<<" ";
    }
    cout<<"\n";

    v1.swap(v2);

    cout<<"After swaping v1:"<<endl;
    for(int i=0;i<v1.size();i++){
        cout<<v1.at(i)<<" ";
    }
    cout<<"\n";
    cout<<"After swaping v2:"<<endl;
    for(int i=0;i<v2.size();i++){
        cout<<v2.at(i)<<" ";
    }
    cout<<"\n";

    return 0;
}