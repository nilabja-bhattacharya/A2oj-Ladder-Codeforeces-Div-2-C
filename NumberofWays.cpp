/*
*DIV 2 C. Number of Ways
*LINK: http://codeforces.com/problemset/problem/466/C
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

lli cnt[MAX];
int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
	int n;
	cin>>n;
	memset(cnt,0,sizeof(cnt));
	vector<int> v(n);
	lli sum=0;
	for(int i=0;i<n;i++){
		cin>>v[i];
		sum+=v[i];
	}
	if(sum%3!=0){
		cout<<0<<endl;
		return 0;
	}
	else{
		lli s=sum/3;
		lli ss=0;
		for(int i=n-1;i>=0;i--){
			ss+=v[i];
			if(ss==s)
				cnt[i]=1;
		}
		for(int i=n-2;i>=0;i--)
			cnt[i]+=cnt[i+1];
		lli ans=0;
		ss=0;
		for(int i=0;i+2<n;i++){
			ss+=v[i];
			if(ss==s)
				ans+=cnt[i+2];
				//cout<<ss<<" ";
		}
	/*	for(int i=0;i<n;i++)
			cout<<cnt[i]<<" ";*/
		cout<<ans<<endl;

	}

	//cout<<"Execution time : "<<tick();
     return 0;
}
