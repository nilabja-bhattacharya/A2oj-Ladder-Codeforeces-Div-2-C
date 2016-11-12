/*
*DIV 2 C. K-Tree
*LINK: http://codeforces.com/contest/431/problem/C
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

void add(int &a,int b){
	a+=b;
	if(a>MOD)
		a-=MOD;
}
int dp[101][2];
int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
	int n,k,d;
	cin>>n>>k>>d;
	dp[0][0]=1;
	dp[0][1]=0;
	for(int i=1;i<=n;i++){
		dp[i][0]=dp[i][0]=0;
		for(int j=1;j<=k;j++){
			if(i-j<0)	break;
			if(j<d){
				add(dp[i][0],dp[i-j][0]);
				add(dp[i][1],dp[i-j][1]);
			}
			else{
				add(dp[i][1],dp[i-j][0]);
				add(dp[i][1],dp[i-j][1]);
			}
		}
	}
	cout<<dp[n][1]<<endl;
	//cout<<"Execution time : "<<tick();
     return 0;
}
