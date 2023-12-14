#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n' 
#define debug(x) cerr << #x << " --> " << x << endl;
#define shine ios_base::sync_with_stdio(false), cout.tie(nullptr), cin.tie(nullptr);

const ll mod = 1e9 + 7;
ll bpow(ll a, ll b){
	a %= mod;
	ll res = 1;
	while(b){
		if(b & 1){
			res = (res * a) % mod;
		}
		a = (a * a) % mod;
		b >>= 1;
	}
	return res % mod;
}

int main(){
    shine
    ll a,b;
    cin >> a >> b;
    ll ans = bpow(a,b);
    cout << ans;
}