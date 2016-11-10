/*
*DIV 2 C. Given Length and Sum of Digits
*LINK: http://codeforces.com/contest/489/problem/C
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
bool can(int m,int s){
	return s>=0 && s<=9*m;
}
int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
	int m,s,t;
	cin>>m>>s;
	string x,y;
	if(s==0){
		cout<< ((m==1)? "0 0" : "-1 -1")<<endl;
		return 0;
	}
	for(int i=0;i<m;i++){
		t=min(s,9);
		y+=t+'0';
		s-=t;
	}
	if(s>0){
		cout<<-1<<" "<<-1<<endl;
		return 0;
	}
	for(int i=m-1;i>=0;i--)
		x+=y[i];
	for(int i=0;x[i]=='0' || (x[i]-- && 0);i++);
	x[0]++;
	cout<<x<<" "<<y<<endl;
	//cout<<"Execution time : "<<tick();
     return 0;
}
