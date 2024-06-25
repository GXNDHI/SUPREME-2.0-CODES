#include<iostream>

using namespace std;
	
int findArray(int arr[],int size,int target,int index){
	//base case
	if(index>=size){
		return -1;
	}
	if(arr[index]==target){
		cout<<index<<endl;
	}
	findArray(arr,size,target,index+1);
	
}

int main(){
	int arr[]={50,20,30,40,50};
	int size=5;
	int index=0;
	int target=50;

	findArray(arr,size,target,index);
}
