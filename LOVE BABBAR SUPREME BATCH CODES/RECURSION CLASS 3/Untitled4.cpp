#include<iostream>
using namespace std;

bool checkSorted(int arr[],int size,int index){
	//base case
	if(index>=size){
		return true;
	}
	//processing
	if(arr[index]>arr[index-1]){
		bool ans=checkSorted(arr,size,index+1);
		return ans;
	}
	else{
		return false;
	}
}

int main(){
	int arr[]={1,2,3,4,5};
	int size=5;
	int index=1;
	bool isSorted=checkSorted(arr,size,index);
	if(isSorted){
		cout<<"Sorted";
	}
	else{
		cout<<"Not Sorted";
	}
}
