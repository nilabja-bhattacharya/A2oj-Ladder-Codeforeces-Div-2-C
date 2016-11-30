/*
*DIV 2 C. Arithmetic Progression
*LINK: http://codeforces.com/problemset/problem/382/C
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
	vector<lli> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	sort(v.begin(),v.end());
	if(n==1){
		cout<<-1<<endl;
		return 0;
	}
	else if(n==2){
		int cd=v[1]-v[0];
		if(cd%2==0 && cd>0){
				cout<<3<<endl;
				cout<<v[0]-cd<<" "<<v[0]+cd/2<<" "<<v[1]+cd<<endl;
				return 0;
		}
		else if(cd%2!=0){
			cout<<2<<endl;
			cout<<v[0]-cd<<" "<<v[1]+cd<<endl;
			return 0;
		}
		else if(cd==0){
			cout<<1<<endl;
			cout<<v[0]<<endl;
		}
	}
	else{
		lli cd=min(v[1]-v[0],v[2]-v[1]);
		bool fl=0;
		bool ok=0;
		int k1;
		for(int i=1;i<n;i++){
			if((v[i]-v[i-1])==cd)
				continue;
			else{
				fl=1;
				if(v[i-1]+cd!=v[i]-cd){
					cout<<0<<endl;
					return 0;
				}
				else if(ok==0){
					ok=1;
					k1=v[i-1]+cd;
				}
				else if(ok==1){
					cout<<0<<endl;
					return 0;
				}
			}
		}
		if(cd==0){
			cout<<1<<endl;
			cout<<v[0]<<endl;
		}
		else if(fl==0){
			cout<<2<<endl;
			cout<<v[0]-cd<<" "<<v[n-1]+cd<<endl;
		}
		else if(fl==1){
			cout<<1<<endl;
			cout<<k1<<endl;
		}
	}
	//cout<<"Execution time : "<<tick();
     return 0;
}
