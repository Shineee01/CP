#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n' 
#define debug(x) cerr << #x << " --> " << x << endl;
#define shine ios_base::sync_with_stdio(false), cout.tie(nullptr), cin.tie(nullptr);
const ll mod = 1e9 + 7;
const ll inf = 1e18;
const ll mxn = 2e5 + 5;

int main(){
    shine
    // Subtask 1
    /*
    int n, m;
    cin >> n >> m;
    int count[1005] = {0};
    for(int i = 0; i < n; i++){
    	int a, b, c;
    	cin >> a >> b >> c;
    	count[a]++;
    }
    for(int i = 1; i <= m; i++){
    	cout << "Desa " << i << ": " << count[i] << endl;
    }
    */

    // Subtask 2
    int n, m;
    cin >> n >> m;
    vector<pair<int,int>> A(1005,{0,0}),B(1005,{0,0}),AB(1005,{0,0}),O(1005,{0,0});
    for(int i = 0; i < n; i++){
    	int a, b, c;
    	cin >> a >> b >> c;
    	if(b == 1){
            A[a].first++;
            A[a].second += c;
        } else if(b == 2){
            B[a].first++;
            B[a].second += c;
        } else if(b == 3){
            AB[a].first++;
            AB[a].second += c;
        } else if(b == 4){
            O[a].first++;
            O[a].second += c;
        }
    }
    for(int i = 1; i <= m; i++){
        cout << "Desa " << i << ":" << endl;
        cout << "A: " << A[i].first << " " << A[i].second << endl;
        cout << "B: " << B[i].first << " " << B[i].second << endl;
        cout << "AB: " << AB[i].first << " " << AB[i].second << endl;
        cout << "O: " << O[i].first << " " << O[i].second << endl;
    }
}