/*
*DIV 2 C. Bombs
*LINK: http://codeforces.com/problemset/problem/350/C
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

typedef long long ll;
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

struct point{
	ll x,y;
	bool operator<(point that)const{
		return x*x+y*y<that.x*that.x+that.y*that.y;
	}
}P[100011];

bool countMode=true;
ll x=0,y=0;
ll n;
ll cnt=0;
void toLocation(ll toX,ll toY){
	if(toX>x){
			cout<<1<<" "<<abs(toX-x)<<" "<<"R"<<endl;
	}
	if(x>toX){
			cout<<1<<" "<<abs(toX-x)<<" "<<"L"<<endl;
	}
	if(toY>y){
			cout<<1<<" "<<abs(toY-y)<<" "<<"U"<<endl;
	}
	if(toY<y){
			cout<<1<<" "<<abs(toY-y)<<" "<<"D"<<endl;
	}
	x=toX;
	y=toY;
}

void pickBomb(){
		cout<<2<<endl;
}
void diffuse(){
		cout<<3<<endl;
}
//gvgvgv
int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>P[i].x>>P[i].y;
		cnt+=2;
		if(P[i].x!=0) cnt+=2;
		if(P[i].y!=0) cnt+=2;
	}
	sort(P+1,P+n+1);
	cout<<cnt<<endl;
	for(ll i=1;i<=n;i++){
		toLocation(P[i].x,P[i].y);
		pickBomb();
		toLocation(0,0);
		diffuse();
	}
	//cout<<"Execution time : "<<tick();
     return 0;
}
