/*
*DIV 2 C. Boredom
*LINK: http://codeforces.com/problemset/problem/456/C
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;

#define inf (1<<30)
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define MAX 100010

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
lli cnt[MAX];
lli v[MAX];
int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
	memset(cnt,0,sizeof(cnt));
	memset(v,0,sizeof(v));
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		cnt[a]++;
	}
	v[1]=cnt[1];
	int i;
	for(i=2;i<MAX;i++)
		v[i]=max(v[i-1],(lli)(v[i-2]+(lli)1ll*cnt[i]*i));
	cout<<v[MAX-1]<<endl;
	//cout<<"Execution time : "<<tick();
     return 0;
}
