#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<string> myText;
    string word;
    while(cin>>word){
        myText.push_back(word);
    } 
    for(string i:myText)
      cout<<i<<" ";
}