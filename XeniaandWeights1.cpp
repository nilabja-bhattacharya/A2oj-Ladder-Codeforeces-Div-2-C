/*
*DIV 2 C. Xenia and Weights
*LINK: http://codeforces.com/problemset/problem/339/C
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
int a[1111];
string str;
int m;
int dfs(int x,int s){
	if(x>m){
		cout<<"YES"<<endl;
		for(int i=1;i<=m;i++)
			cout<<a[i]<<" ";
			return 1;
	}
	for(int i=s+1;i<=10;i++){
		if(i!=a[x-1] && str[i-1]=='1'){
			a[x]=i;
			if(dfs(x+1,i-s))
				return 1;
		}
	}
	return 0;
}
int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
	cin>>str>>m;
	memset(a,0,sizeof(a));
	a[0]=0;
	if(!dfs(1,0)){
		cout<<"NO"<<endl;
	}
	//cout<<"Execution time : "<<tick();
     return 0;
}
