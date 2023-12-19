#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n' 
#define debug(x) cerr << #x << " --> " << x << endl;
#define shine ios_base::sync_with_stdio(false), cout.tie(nullptr), cin.tie(nullptr);

int main(){			// O(N^2)
    shine
    vector<int> arr = {7,2,1,5,6,6,11,10,1,3};

    int n = int(arr.size());
    for(int i = 0; i < n - 1; i++){			// O(N)
    	int min = i;
    	for(int j = i + 1; j < n; j++){		// O(N)
    		if(arr[min] > arr[j]){
    			min = j;
    		}
    	}
    	if(min != i){
    		swap(arr[i], arr[min]);
    	}
    }
    for(auto &i : arr){
    	cout << i << " ";
    }
}