#include <iostream>
using namespace std;
int main(){
    int arr[]={1,5,6,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<size;i++)
    sum+=arr[i];
    cout<<sum<<endl;


}