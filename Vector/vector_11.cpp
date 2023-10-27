//insert();used to insert new element at specified position.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> v1{"Tausif","Bin"};
    string S="Mozid";
    v1.insert(v1.begin()+1,S);
    for(int i=0; i<v1.size();i++)
       cout<<v1.at(i)<<" ";
    cout<<"\n\n";
    vector<string>  v{"C" ,"Tutorials"};  
    v.insert(v.begin()+1,2,"P");  
    for(int i=0;i<v.size();i++)  
        cout<<v[i]<<" "; 
    cout<<"\n\n";
    vector<int> P{1,2,3,4,5};  
    vector<int> P1{6,7,8,9,10};  
    P.insert(P.end(),P1.begin(),P1.begin()+5);  
    for(int i=0;i<P.size();i++)  
    cout<<P[i]<<" ";
  
  return 0;
    
}