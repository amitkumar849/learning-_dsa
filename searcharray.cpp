#include<iostream>
using namespace std;
int main(){
    int arr[]={4,5,6,8,9,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=4;
    for(int i=0;i<6;i++){
        if(arr[i]==key){
            cout<<"true";
        }else{
            cout<<"false";
        }
    }
    cout<<arr<<endl;
}