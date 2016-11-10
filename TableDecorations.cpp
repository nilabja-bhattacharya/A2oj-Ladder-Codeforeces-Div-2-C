/*
*DIV 2 C. Table Decorations
*LINK: http://codeforces.com/problemset/problem/478/C
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
	//
	lli a[3];
	cin>>a[0]>>a[1]>>a[2];
	sort(a,a+3);
	cout<<min((a[0]+a[1]+a[2])/3,a[0]+a[1])<<endl;
	//cout<<"Execution time : "<<tick();
     return 0;
}
