//Program to count number of consecutive inputs
#include<iostream>
using namespace std;
int main()
{
    int currval=0,val=0;
    if(cin>>currval){
        int count=1;
        while(cin>>val){
           if(currval == val){
            count++;
           }
           else{
            cout<<currval<<" occurs "<<count<<" times."<<endl;
            currval=val;
            count=1;
           }   
        } 
          cout<<currval<<" occurs "<<count<<" times."<<endl;            
    }
    return 0;    
}
