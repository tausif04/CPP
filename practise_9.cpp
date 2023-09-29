#include<iostream>
using namespace std;
int main()
{
    int choise;
    cout<<"Enter :"<<endl<<"1 -> For Tea"<<endl<<"2 -> For Coffee"<<endl;
    cin>>choise;
if(choise == 1){
    cout<<"Sure,Your tea is on the way,Thank you."<<endl;
}
else if(choise == 2){
    cout<<"Sure,Your coffee is on the way,Thank you."<<endl;
}
else{
    cout<<"Sorry,You entered wrong.Please try again!"<<endl;
}
return 0;
}