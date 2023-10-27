#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //create & open a text file
    ofstream MyFile("TausifBio.txt");
    // write to the file
    MyFile<<"Tausif Bin Mozid , ID:0242220005101711";
    // close the file 
    MyFile.close();
    //create a string, which is used to output the text file
    string MyText;
    //Read from the text file
    ifstream MyReadSFile ("TausifBio.txt");
    //use while loop together with getline() function to read the file line by line
    while(getline(MyReadSFile,MyText)){
        cout<<MyText;
    }
    // close the file 
    MyFile.close();
}