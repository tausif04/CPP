//Reading & writing Strigs.
#include<iostream>
#include<string>
using namespace std;
int mine();
int main(){
    string readMe1,readMe2;
    cin>>readMe1>>readMe2;
    cout<<readMe1<<endl;
    cout<<readMe1<<" "<<readMe2<<endl;
    mine();
    return 0;
}
int mine(){
    string readme;
    while(cin>>readme)
    cout<<readme<<endl;
    return 0;
}