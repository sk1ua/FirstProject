#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
#define endl '\n'
#define int long long
typedef pair<int, int> PII;
#define x first
#define y second
int a[N];
void solve()
{
	int n,x; cin >> n >> x;
	int pox = 0;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		if(a[i] == x)pox = i;
	}
	
	int l = 1, r = n+1;
	while(r-l != 1)
	{
		int m = (l+r) >> 1;
		if(a[m] <= x)l = m;
		else r = m;
	}
	
	if(a[l] == x){
		cout << 0 << endl;
	}else{
		cout << 1 << endl;
		cout << pox << ' ' << l << endl;
	}
}

signed main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int _ = 1; cin >> _;
	while(_--)
	{
		solve();
	}
	return 0;
}