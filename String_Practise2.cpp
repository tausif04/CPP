// Uses of getline
#include<iostream>
#include<string>
using namespace std;
int main(){
    string readMe;
    getline(cin,readMe);
    if(readMe.empty()){
        cout<<"The string is Emptly!"<<endl;
    }
    else{ 
    cout<<"The String is : "<<readMe<<endl;
    }
    return 0;
}