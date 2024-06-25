#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

//void printArrayIndex(int arr[],int size,int index){
//	//base case
//	if(index>=size){
//		return;
//	}
//	//processing
//	cout<<arr[index]<<" "<<endl;
//	
//	//recursive call
//	printArrayIndex(arr,size,index+1);
	
	
//}
//bool searchArray(int arr[],int size,int target,int index){
//	//base case
//	if(index>=size){
//		return false;
//	}
//	if(arr[index]==target){
//		return true;
//	}
//	searchArray(arr,size,target,index+1);
//	
//}

void solve(int arr[],int size,int index,vector<int>&ans){
	//base case
	if(index>=size){
		return;
	}
	//processing
	if(arr[index]%2==0){
		ans.push_back(arr[index]);
	}
	//reursive relation
	solve(arr,size,index+1,ans);
}
int main(){
	int arr[]={10,20,30,40,50};
	int size=5;
	int index=0;
	int target=50;
	vector<int>ans;
	solve(arr,size,index,ans);
	//cout<<searchArray(arr,size,target,index);
	//printArrayIndex(arr,size,index);
	for(int i=0;i<=ans.size();i++){
		cout<<ans[i]<<endl;
	}
}
