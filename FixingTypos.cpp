/*
*DIV 2 C. Fixing Typos
*LINK: http://codeforces.com/problemset/problem/363/C
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
	string str1;
	cin>>str;
	if(str.size()>2){
	str1+=str[0];
	str1+=str[1];
	int l=1;
	for(int i=2;i<str.size();i++){
		if((str[i]==str1[l]) &&((str[i]==str1[l-1]) || ((l>1) and (str1[l-1]==str1[l-2]))))
			continue;
		str1+=str[i];
		l++;
	}
	cout<<str1<<endl;
}
else
	cout<<str<<endl;
	//cout<<"Execution time : "<<tick();
     return 0;
}
