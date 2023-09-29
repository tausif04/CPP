#include<iostream>
using namespace std;
int main(){
    string readme("Hellow, There!!!");
    int count=0;
    for(auto i:readme){
        if(ispunct(i)){
            count++;
        }
    }
    cout<<"Number of Punctuation Character in"<<readme<<" = "<<count<<endl;
}