#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int bsearch(vector<int> arr,int key_to_search) {
	int n = (int) arr.size();
	
	int lg = log2(n-1)+1;
	
	
	int pos = 0;
	for(int i = lg; i >= 0; --i) {
		if(arr[pos] == key_to_search)
			return pos;
		
		int new_pos = pos | (1 << i);
		
		if ((new_pos < n) && (arr[new_pos] <= key_to_search))
            pos = new_pos;
	}
	
	return ((arr[pos] == key_to_search) ? pos : -1);
}

int main() {
	
	vector<int> arr = {2, 10, 100, 250, 32315};
	
	cout<< bsearch(arr,100)<<"\n";
	
	return 0;
}