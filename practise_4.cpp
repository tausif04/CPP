//sum of 1 to 10 numbers
#include<iostream>
using namespace std;
int main()
{
    int count=1,sum=0;
    while(count <= 10){
        sum +=count;
        count++;
    }
    cout<<"Sum of 1 to 10 = "<<sum<<endl;
    return 0;
}