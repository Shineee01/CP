#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n' 
#define debug(x) cerr << #x << " --> " << x << endl;
#define shine ios_base::sync_with_stdio(false), cout.tie(nullptr), cin.tie(nullptr);
string biner(int n) {
    string res = "";
    while(n){
        res = char('0' + n % 2) + res;
        n >>= 1;
    }
    return res.empty() ? "0" : res;
}
int main(){
    shine
    int a, b;
    cin >> a >> b;
    cout << a << " & " << b << " = " << (a & b) << " ------> " << biner(a) << " & " << biner(b) << " = " << biner(a & b) << endl << endl;
    cout << a << " ^ " << b << " = " << (a ^ b) << " ------> " << biner(a) << " ^ " << biner(b) << " = " << biner(a ^ b) << endl << endl;
    cout << a << " | " << b << " = " << (a | b) << " ------> " << biner(a) << " | " << biner(b) << " = " << biner(a | b) << endl << endl;
    cout << a << " >> " << b << " = " << (a >> b) << " ------> " << biner(a) << " >> " << biner(b) << " = " << biner(a >> b) << endl << endl;
    cout << a << " << " << b << " = " << (a << b) << " ------> " << biner(a) << " << " << biner(b) << " = " << biner(a << b) << endl << endl;
}
