#include<iostream>
#include<vector>
using namespace std;

void doubleArr(int arr[],int size,int index,vector<int>&ans){
  //base case
  if(index>=size){
    return;
  }
  //preprocessing
  arr[index]=2*arr[index];
  ans.push_back(arr[index]);
  //recursive call
  doubleArr(arr,size,index+1,ans);
}

int main(){
  int arr[]={1,2,3,4,5};
  int size=5;
  int index=0;
  vector<int>ans;
  doubleArr(arr,size,index,ans);
  for(int i=0;i<ans.size();i++){
    
  }
}
