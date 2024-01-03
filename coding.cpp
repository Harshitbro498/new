#include <iostream>
#include<string>
#include <bits/stdc++.h>
#include <numeric>
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;
#define pb(n)            push_back(n)
#define eb(n)            emplace_back(n)
#define mp(a,b)          make_pair(a,b)
#define bitcntll(n)      __builtin_popcountll(n)
#define loop(a,b,c)      for(int a=b;a<c;a++)
#define loopr(a,b,c)     for(int a=b;a>c;a--)
#define in1(t) int t;cin>>t
#define in2(a,b) int a,b;cin>>a>>b
#define in3(a,b,c) int a,b,c;cin>>a>>b>>c
#define in4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d
#define in5(a,b,c,d,e) int a,b,c,d,e;cin>>a>>b>>c>>d>>e
#define in6(a,b,c,d,e,f) int a,b,c,d,e,f;cin>>a>>b>>c>>d>>e>>f
#define nl               cout<<endl
#define int             long long
#define double           long double
#define vi               vector<int>
#define vb               vector<bool>
#define vs               vector<string>
#define ff               first
#define ss               second             
#define yes              cout<<"YES"<<endl
#define no             cout<<"NO"<<endl
#define sz(s)            (long long)(s.size())
#define all(v)           (v).begin(),(v).end()
#define sp(n)            cout<<setprecision(n)<<fixed;
#define in(v)            for(auto &item : v) cin>>item;
#define inp(v)           for(auto &item : v) cin>>item.ff>>item.ss;

//int modadd(int a,int b,int m)
//{ a %= m;b %= m; return (a + b) % m;}
//int modmul(int a,int b,int m){ a %= m;b %= m; return (a * b) % m;}
//int modsub(int a,int b,int m){ a %= m;b %= m; return (a - b + m) % m;}
int gcd(int a, int b){ if(b == 0) return a; return gcd(b, a % b);}
//int expo(int a,int n,int md){ int res=1; while(n){ if(n&1) {res = modmul(res,a,md);--n;} else {a = modmul(a,a,md);n >>= 1;}} return res;}
//int expo(int a,int n){ int res=1; while(n){ if(n&1) {res *= a;--n;} else {a *= a;n >>= 1;}} return res;}
//template <typename T> bool revsort(T a, T b){return a > b;}
//vb sieve(int n){vb prime(n+1,1); prime[0] = prime[1] = 0; for(int i=2;i*i<=n;i++){if(prime[i]){for(int j=i*i;j<=n;j+=i) prime[j]=0;}} return prime;}
//bool compare(pair<int, int>& n,pair<int, int>& m){return n.second < m.second;}
//void sortbysecond(map<int,int>& M,vector<pair<int, int> > &Ans){for (auto& i : M)Ans.push_back(i);sort(Ans.begin(), Ans.end(), compare);}
//OUTPUTS
#define outarr(arr) for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){ cout << arr[i] << " ";}cout << endl;
#define outvec(v) for(int i=0;i<v.size();i++){ cout << v[i] << " ";}cout << endl;
#define outmap(m) for(auto i: m){ cout << i.f << " " << i.sec << endl;}
#define outvecpair(v) for(int i=0;i<v.size();i++){cout << v[i].first << " " << v[i].second << endl;}
#define outmap(m) for(auto i: m){ cout << i.f << " " << i.sec << endl;}
#define outset(s) for(auto i : s){cout << i << " ";}cout<<endl;
const double PI = 3.1415926535;
const int mod = 1000000007;
void solve()
{
    in1(n);
    vector<pair<int,int>>vp(n);
    oset<int>s;
    loop(i,0,n)
    {
        cin>>vp[i].ss>>vp[i].ff;
        s.insert(vp[i].ss);
    }
    sort(all(vp));
    int ans=0;
    loop(i,0,n)
    {
     
     auto it=s.find(vp[i].ss);
     ans+=s.order_of_key((int)vp[i].ss);
     s.erase(it);
    }
    cout<<ans<<endl;

}
signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
cout<<fixed;
int t;cin>>t;
while(t--){ 
solve();
}
return 0;
}