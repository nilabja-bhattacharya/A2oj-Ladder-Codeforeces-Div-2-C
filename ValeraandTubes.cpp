/*
*DIV 2 C. Valera and Tubes
*LINK: http://codeforces.com/problemset/problem/441/C
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;

#define inf (1<<30)
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define MAX 1000001

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
struct point{
	int x;
	int y;
	bool operator<(const point that){
		if(x!=that.x) return x<that.x;
		if(x%2==0) return y<that.y;
		return y>that.y;
	}
}P[MAX];
int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
	int n,m,k;
	cin>>n>>m>>k;
	int s=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)
		{
			s++;
			P[s].x=i;
			P[s].y=j;
		}
	}
	sort(P+1,P+1+s);
	for(int i=1;i<=k;i++){
		int L=2*i-1;
		int R=2*i;
		if(i==k) R=s;
		cout<<R-L+1<<" ";
		for(int k=L;k<=R;k++)
			cout<<P[k].x<<" "<<P[k].y<<" ";
		cout<<endl;
	}
	//cout<<"Execution time : "<<tick();
     return 0;
}
