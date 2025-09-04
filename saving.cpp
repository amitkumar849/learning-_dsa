#include<iostream>
using namespace std;
int main(){
    int saving;
    cin>>saving;
    if(saving>4000){
        if(saving>15000){
            cout<<"trip with soumya in goa\n";
        } else {
            cout<<"shoping with  somya\n";
        }   
    }else if(saving>2000){
        cout<<"sneha\n";
    }else{
        cout<<"friend\n";
    }
}