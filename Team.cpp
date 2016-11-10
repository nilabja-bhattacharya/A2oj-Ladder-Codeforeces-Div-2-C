/*
*DIV 2 C. Team
*LINK: http://codeforces.com/problemset/problem/401/C
*nilabja10201992
*/
#include <bits/stdc++.h>
using namespace std;

#define inf (1<<30)
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define MAX 1000010

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

int a [MAX];
int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
	lli n,m;
	cin>>n>>m;
	int L=n-1;
	int R=(n+1)*2;
	if(m<L || m>R){
		cout<<-1<<endl;
		return 0;
	}
	for(int i=1;i<n;i++) a[i]=1;
	m-=n-1;
	for(int i=0;i<=n;i++)
		while(m>0 && a[i]<2){
			m--;
			a[i]++;
		}
	for(int i=0;i<a[0];i++)	cout<<1;
	for(int i=1;i<=n;i++){
		cout<<0;
		for(int j=0;j<a[i];j++)
			cout<<1;
	}
	cout<<endl;
	//cout<<"Execution time : "<<tick();
     return 0;
}
