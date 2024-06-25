#include<iostream>
using namespace std;

int main(){
    for(int i=4;i>=0;i--){
        for(int j=0;j<=i;j++){
            if(i==4 || j==0 || j==i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}