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
}P[MAX];
bool countMode=true;
int x=0,y=0;
int n;
int cnt=0;
void toLocation(int toX,int toY){
	if(toX>x){
		if(countMode)
			cnt++;
		else
			cout<<1<<" "<<abs(toX-x)<<" "<<"R"<<endl;
	}
	if(x>toX){
		if(countMode)
			cnt++;
		else
			cout<<1<<" "<<abs(toX-x)<<" "<<"L"<<endl;
	}
	if(toY>y){
		if(countMode)
			cnt++;
		else
			cout<<1<<" "<<abs(toY-y)<<" "<<"U"<<endl;
	}
	if(toY<y){
		if(countMode)
			cnt++;
		else
			cout<<1<<" "<<abs(toY-y)<<" "<<"D"<<endl;
	}
	x=toX;
	y=toY;
}

void pickBomb(){
	if(countMode)
		cnt++;
	else
		cout<<2<<endl;
}
void diffuse(){
	if(countMode)
		cnt++;
	else
		cout<<3<<endl;
}
void solve(){
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>P[i].x>>P[i].y;
	sort(P+1,P+n+1);
	for(int i=1;i<=n;i++){
		toLocation(P[i].x,P[i].y);
		pickBomb();
		toLocation(0,0);
		diffuse();
	}
	cout<<cnt<<endl;
	countMode=false;
	for(int i=1;i<=n;i++){
		toLocation(P[i].x,P[i].y);
		pickBomb();
		toLocation(0,0);
		diffuse();
	}
}
int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
	solve();
	//cout<<"Execution time : "<<tick();
     return 0;
}
