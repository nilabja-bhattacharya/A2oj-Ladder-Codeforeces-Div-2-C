/*
*DIV 2 C. Fox and Box Accumulation
*LINK: http://codeforces.com/problemset/problem/388/A
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
	vi v(n);
	vector<bool> bl(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	sort(v.begin(),v.end());
	int cnt=0;
	while(true){
		int k=0;
		int f=0;
		bool fl=0;
		for(int i=0;i<n;i++){
			if(bl[i]==0 && (v[i]>=k || fl==0) ){
				bl[i]=1;
				//k=v[i];
				fl=1;
				k++;
			}
			else if(bl[i]==1)
				f++;
		}
		if(f==n)
			break;
		cnt++;
	}
	cout<<cnt<<endl;
	//cout<<"Execution time : "<<tick();
     return 0;
}
