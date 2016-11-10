/*
*DIV 2 C. Exams
*LINK: http://codeforces.com/problemset/problem/479/C
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
	int n;
	cin>>n;
	vpii v(n);
	for(int i=0;i<n;i++)
		cin>>v[i].first>>v[i].second;
	sort(v.begin(),v.end());
	vi ans(n);
	ans[0]=min(v[0].first,v[0].second);
	for(int i=1;i<n;i++){
		ans[i]= (v[i].first>=ans[i-1] && v[i].second>=ans[i-1])? min(v[i].first,v[i].second):((v[i].first>=ans[i-1])?v[i].first:v[i].second);
	}
	cout<<ans[n-1]<<endl;
	//cout<<"Execution time : "<<tick();
     return 0;
}
