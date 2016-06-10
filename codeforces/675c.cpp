#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const double eps = 1e-9;
const int inf = INT_MAX;
//////////////0123456789
const int N = 100004;
const int modn = 1000000007;

ll a[N];
multiset<ll> s;
int n;

int main() {
    scanf("%d",&n);
    ll acc = 0;
    ll sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        acc += a[i];
        s.insert(acc);
    }
    int ans = n-(int)s.count(0);
    for(int i = 0; i < n; i++) {
        sum += a[i];
        ans = min(ans, n - (int) s.count(a[i]));
    }
    cout << ans << endl;
}

