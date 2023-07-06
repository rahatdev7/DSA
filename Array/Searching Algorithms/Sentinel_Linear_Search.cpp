#include <iostream>
using namespace std;

void sentinel_linear_search(int *arr,int n,int key) {
	int last = arr[n-1];
	
	arr[n-1] = key;
	int i = 0;
	
	while(arr[i] != key) 
		i++;
	
	arr[n-1] = last;
	
	if((i < n-1) || (arr[i] == key)) 
		cout<<key << " is present at index " << i<<'\n';
	else
		cout<<"Element not found!"<<'\n';
}

int main() {
	
	int arr[] = { 10, 20, 180, 30, 60, 50, 110, 100, 70 };
	int n = sizeof(arr)/sizeof(int);
	
	int key;
	cin>>key;
	
	sentinel_linear_search(arr,n,key);
	
	return 0;
}