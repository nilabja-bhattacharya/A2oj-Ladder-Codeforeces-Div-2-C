/*
*DIV 2 C. Hexadecimal's Numbers
*LINK: http://codeforces.com/problemset/problem/9/C
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;

#define inf (1<<30)
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define MAX 1000000

#define write(x) freopen(x,"w",stdout);
#define read(x) freopen(x,"r",stdin);

typedef long long i64;
typedef unsigned long long ui64;
typedef string st;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<st> vs;
typedef map<int,int> mii;
typedef map<st,int> msi;
typedef set<int> si;
typedef set<st> ss;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
typedef vector<lli> vlli;
int ans=0;
int n;
void solve(int k){
	if(k>n)
		return;
	else ans++;
	solve(k*10);
	solve(k*10 + 1);
}
int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
	cin>>n;
	solve(1);
	cout<<ans<<endl;
	//cout<<"Execution time : "<<tick();
     return 0;
}
