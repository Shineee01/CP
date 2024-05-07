struct BIT {
	ll n;
	vector<ll> bit;
	BIT(vector<ll> &v) : n(v.size()), bit(v.size() + 1, 0) {
		for(ll i = 1; i <= n; i++){
			update(i, v[i - 1]);
		}
	}
	ll query(ll idx){
    	ll ans = 0;
    	for(; idx ; idx -= (idx & (-idx))) {
        	ans += bit[idx];
    	}
    	return ans;
	}
	void update(ll idx, ll val){
		for(; idx <= n; idx += (idx & (-idx))) bit[idx] += val;
	}
	ll query(ll l, ll r){
		return query(r) - query(l - 1);
	}
};
