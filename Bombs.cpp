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
struct dir{
	ll k;
	ll j;
	char ch;
};
struct point
{
	long long first, second;
	bool operator <(point that)const
	{
		return first*first+second*second < that.first*that.first + that.second*that.second;
	}
}v[100001];
int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
	int n;
	cin>>n;
	//vpii v(n);
	for(int i=0;i<n;i++)
		cin>>v[i].first>>v[i].second;
	vector < dir > vdir;
	sort(v,v+n);
	for(int i=0;i<n;i++){
		if(v[i].first>0 && v[i].second>0){
			vdir.push_back({1,v[i].first,'R'});
			vdir.push_back({1,v[i].second,'U'});
			vdir.push_back({2,0,0});
			vdir.push_back({1,v[i].second,'D'});
			vdir.push_back({1,v[i].first,'L'});
			vdir.push_back({3,0,0});
		}
		else if(v[i].first>0 && v[i].second<0){
			vdir.push_back({1,v[i].first,'R'});
			vdir.push_back({1,abs(v[i].second),'D'});
			vdir.push_back({2,0,0});
			vdir.push_back({1,abs(v[i].second),'U'});
			vdir.push_back({1,v[i].first,'L'});
			vdir.push_back({3,0,0});
		}
		else if(v[i].first>0 && v[i].second==0){
			vdir.push_back({1,v[i].first,'R'});
		//	vdir.push_back({1,v[i].second,'U'});
			vdir.push_back({2,0,0});
		//	vdir.push_back({1,v[i].second,'D'});
			vdir.push_back({1,v[i].first,'L'});
			vdir.push_back({3,0,0});
		}
		else if(v[i].first<0 && v[i].second==0){
			vdir.push_back({1,abs(v[i].first),'L'});
		//	vdir.push_back({1,v[i].second,'U'});
			vdir.push_back({2,0,0});
		//	vdir.push_back({1,v[i].second,'D'});
			vdir.push_back({1,abs(v[i].first),'R'});
			vdir.push_back({3,0,0});
		}
		else if(v[i].first<0 && v[i].second<0){
			vdir.push_back({1,abs(v[i].first),'L'});
			vdir.push_back({1,abs(v[i].second),'D'});
			vdir.push_back({2,0,0});
			vdir.push_back({1,abs(v[i].second),'U'});
			vdir.push_back({1,abs(v[i].first),'R'});
			vdir.push_back({3,0,0});
		}
		else if(v[i].first<0 && v[i].second>0){
			vdir.push_back({1,abs(v[i].first),'L'});
			vdir.push_back({1,abs(v[i].second),'D'});
			vdir.push_back({2,0,0});
			vdir.push_back({1,abs(v[i].second),'U'});
			vdir.push_back({1,abs(v[i].first),'R'});
			vdir.push_back({3,0,0});
		}
		else if(v[i].first==0 && v[i].second>0){
		//	vdir.push_back({1,v[i].first,'R'});
			vdir.push_back({1,v[i].second,'U'});
			vdir.push_back({2,0,0});
			vdir.push_back({1,v[i].second,'D'});
		//	vdir.push_back({1,v[i].first,'L'});
			vdir.push_back({3,0,0});
		}
		else if(v[i].first==0 && v[i].second<0){
		//	vdir.push_back({1,v[i].first,'R'});
			vdir.push_back({1,abs(v[i].second),'D'});
			vdir.push_back({2,0,0});
			vdir.push_back({1,abs(v[i].second),'U'});
		//	vdir.push_back({1,v[i].first,'L'});
			vdir.push_back({3,0,0});
		}
	}
	cout<<vdir.size()<<endl;
	for(int i=0;i<vdir.size();i++){
		if(vdir[i].k==1)
			cout<<vdir[i].k<<" "<<vdir[i].j<<" "<<vdir[i].ch<<endl;
		else
			cout<<vdir[i].k<<endl;
	}
	//cout<<"Execution time : "<<tick();
     return 0;
}
