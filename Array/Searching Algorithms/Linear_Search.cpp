#include <iostream>
using namespace std;

int linear_search(int *arr,int n,int key) {
	for(int i = 0; i < n; ++i) {
		if(arr[i] == key)
			return i;
	}
	return -1;
}

int main() {
	
	int arr[] = {2, 3, 4, 10, 40};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int key;
	cin>>key;
	
	int result = linear_search(arr,n,key);
	
	if(result != -1) 
		cout<<result<<" index!"<<'\n';
	else
		cout<<"Not found!"<<'\n';
	
	
	return 0;
}