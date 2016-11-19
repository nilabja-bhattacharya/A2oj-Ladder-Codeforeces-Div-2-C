/*
*DIV 2 C. Gargari and Bishops
*LINK: http://codeforces.com/problemset/problem/463/C
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

typedef long long ll;
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

const int NMAX=2014;
ll d1[2*NMAX],d2[2*NMAX],sol[2];
pii v[2];
int a[NMAX][NMAX];
inline void update(const int c,const int i,const int j,const long long val){
	if(val>sol[c]){
		sol[c]=val;
		v[c].first=i;
		v[c].second=j;
	}
}
int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
	int n;
	cin>>n;
	sol[0]=sol[1]=-1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			d1[i+j]+=a[i][j];
			d2[i-j+n]+=a[i][j];
		}
	}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			update((i+j)&1,i,j,d1[i+j]+d2[i-j+n]-a[i][j]);
	cout<<sol[0]+sol[1]<<endl;
	if(v[0]>v[1])
		swap(v[0],v[1]);
	cout<<v[0].first<<" "<<v[0].second<<" "<<v[1].first<<" "<<v[1].second<<endl;
	//cout<<"Execution time : "<<tick();
     return 0;
}
