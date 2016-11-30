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

vector< int > w;
vector< int > ans;
vector <int > v;
int flag;
int dp[1010][11][11];
int solve(int k,int wt,int lw){
	if(flag) return 1;
	if(!k){
		ans=v;
		flag=1;
		return 1;
	}
	if(dp[k][wt][lw]!=-1) return dp[k][wt][lw];
	int res=0;
	for(int i=0;i<w.size();i++){
		if(w[i]>wt && w[i]!=lw){
			v.push_back(w[i]);
			res|=solve(k-1,w[i]-wt,w[i]);
			v.pop_back();
		}
	}
	return dp[k][wt][lw]=res;
}
int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
	string str;
	cin>>str;
	int m;
	cin>>m;
	for(int i=0;i<10;i++)
		if(str[i]=='1')
			w.push_back(i+1);
	if(!w.size()){
		cout<<"NO"<<endl;
		return 0;
	}
	int status=0;
	for(int i=0;i<w.size();i++){
		memset(dp,-1,sizeof(dp));
		v.push_back(w[i]);
		status=solve(m-1,w[i],w[i]);
		v.pop_back();
		if(status){
			cout<<"YES"<<endl;
			for(int j=0;j<m;j++)
				cout<<ans[j]<<" ";
			return 0;
		}

	}
	cout<<"NO"<<endl;
	//cout<<"Execution time : "<<tick();
     return 0;
}
