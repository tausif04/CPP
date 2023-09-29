#include<iostream>
using namespace std;
int main()
{
    int arr[]={11,13,12,6,5,1};
    int temp=0,ptr=0;
    for(int k=1;k<6;k++){
        temp=arr[k];
        ptr=k-1;
        while(temp<arr[ptr]){
            arr[ptr+1]=arr[ptr];
            ptr=ptr-1;
        }
       arr[ptr+1]=temp;
    }
    for(int n=0;n<6;n++){
        cout<<arr[n]<<" ";
    }
}