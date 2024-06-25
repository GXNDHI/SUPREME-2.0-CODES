#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int rows =0;rows<n;rows++ ){
        int stars=0;
        for(int col=0;col<=((2*n)-1);col++){
            if(col<n-rows-1){
                cout<<" ";
            }
            else if(stars<2*rows+1){
                if(stars==0||stars==2*rows||rows==n-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
                
                stars++;
            }
            else{
                cout<<" ";
            }
                
        }
        cout<<endl;
    }
}