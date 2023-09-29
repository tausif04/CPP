//Sum of 0 to n
#include<iostream>
using namespace std;
int main()
{
    int count=0,sum=0,n;
    cout<<"Enter the number till you want to sum :";
    cin>>n;
    while(count <=n){
        sum = sum + count;
        count++ ;
    }
    cout<<"The sum of O to "<<n<<" is : "<<sum<<endl;
    return 0;
}