#include <iostream>
using namespace std;

int binary_search(int *arr,int n,int key) {
	int left = 0;
	int right = n-1;
	
	while(left <= right) {
		int mid = left + (right - left) / 2;
		if(arr[mid] == key) 
			return mid;
		if(arr[mid] < key) 
			left = mid+1;
		else
			right = mid-1;
	}
	return -1;
}

int main() {
	
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(arr)/sizeof(int);
	
	int key;
	cin>>key;
	
	int result = binary_search(arr,n,key);
	
	if(result != -1) 
		cout<<result<<" index!"<<'\n';
	else
		cout<<"Element not found!"<<'\n';
	
	return 0;
}