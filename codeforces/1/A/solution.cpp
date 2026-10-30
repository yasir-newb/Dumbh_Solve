#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n,m,o;cin>>n>>m>>o;

    if(n%o!=0 && m%o!=0) cout<<(m/o +1)*(n/o +1);
    else if(n%o!=0 ) cout<<(m/o)*(n/o +1);
    else if(m%o!=0 ) cout<<(m/o +1)*(n/o);
    else cout<<(m/o)*(n/o);
    
}

int main() {
    fast_io;
    
 
    solve();
    
    return 0;
}
