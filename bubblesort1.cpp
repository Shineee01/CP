#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n' 
#define debug(x) cerr << #x << " --> " << x << endl;
#define shine ios_base::sync_with_stdio(false), cout.tie(nullptr), cin.tie(nullptr);

void swap(ll x, ll y){
	x ^= y;
	y ^= x;
	x ^= y;
}

int main(){
    shine
    vector<int> arr = {7,2,1,5,6,6,11,10,1,3};

    // Algo : Bubble Sort
    int n = int(arr.size());
    for(int i = 0; i < n; i++){
    	for(int j = i + 1; j < n; j++){
    		if(arr[i] > arr[j]){
    			swap(arr[i], arr[j]);
    		}
    	}
    }
    cout << endl;
    cout << "Sesudah Sort : ";
    for(int i = 0; i < n; i++){
    	cout << arr[i] << " ";
    }
}