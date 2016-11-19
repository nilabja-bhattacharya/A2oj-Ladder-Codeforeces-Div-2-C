/*
*DIV 2 C. Pocket Book
*LINK: http://codeforces.com/problemset/problem/152/C
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
bool ch[26];
int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
	int n,m;
	cin>>n>>m;
	vector< string > str(n);
	for(int i=0;i<n;i++)
		cin>>str[i];
	lli val=1;
	for(int j=0;j<m;j++){
		memset(ch,0,sizeof(ch));
		for(int i=0;i<n;i++)
			ch[str[i][j]-'A']=1;
		int cnt=0;
		for(int i=0;i<26;i++)
			if(ch[i]==1)
				cnt++;
		//cout<<cnt<<endl;
		val=(val*(cnt%MOD)+MOD)%MOD;
	}
	cout<<val<<endl;
	//cout<<"Execution time : "<<tick();
     return 0;
}
