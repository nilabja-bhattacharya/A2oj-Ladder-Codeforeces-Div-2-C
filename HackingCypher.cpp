/*
*DIV 2 C. Hacking Cypher
*LINK: http://codeforces.com/problemset/problem/490/C
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
	string str;
	int a,b;
	cin>>str>>a>>b;
	vector<int> v1(str.size());
	vector<int> v2(str.size());
	int t=0;
	for(int i=0;i<str.size();i++){
		t=(t*10+(int)(str[i]-'0'))%a;
		v1[i]=t;
	}
	t=0;
	int p=1;
	for(int i=str.size()-1;i>=0;i--){
		t=(t+(int)(str[i]-'0')*p)%b;
		v2[i]=t;
		p=p*10%b;
	}
	for(int i=1;i<str.size();i++){
		if(v1[i-1]==0 && v2[i]==0 && str[i]!='0')
		{
			cout<<"YES"<<endl;
			cout<<str.substr(0,i)<<endl;
			cout<<str.substr(i)<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
     return 0;
}
