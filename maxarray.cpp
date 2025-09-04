#include<iostream>
using namespace std; 
int main(){
    int arr[]={1,5,48,6,3};
    int max=arr[0];
    for( int i=1;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max<<endl;
}