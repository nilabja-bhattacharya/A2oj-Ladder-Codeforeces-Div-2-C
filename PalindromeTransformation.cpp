/*
*DIV 2 C. Palindrome Transformation
*LINK: http://codeforces.com/problemset/problem/486/C
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
int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
	int n,p;
	string s;
	cin>>n>>p>>s;
	p--;
	if(p>=n/2)
		p = n - 1 - p;
	int l=0;
	int r=n/2-1;
	while(l<n/2 && s[l]==s[n - 1 - l])
		l++;
	while(r>=0 && s[r]==s[n - 1 - r])
		r--;
	int ans=0;
	int ch=0;
	for(int i=l;i<=r;i++){
		int diff=abs(s[i]-s[n-1-i]);
		ch+=min(diff,26 - diff);
	}
	if(l<r)
		ans=min(abs(p-l),abs(p-r)) + abs(r-l) + ch;
	else if(l==r){
		if(ch)
			ans=abs(p-l) + ch;
	}
	cout<<ans<<endl;
	//cout<<"Execution time : "<<tick();
     return 0;
}
