using namespace std;
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <map>
#include <set>
#include <unordered_set>
#include <queue>
#include <algorithm>
#include <numeric>
#define fast ios::sync_with_stdio(false);cin.tie(0);
#include <stack>
#define VI vector<int>
#define VVI vector<VI>
#define VVVI vector<VVI>
#define LL uint64_t
#define inf 0x3f3f3f3f
#define ll long long
#define sscc ios::sync_with_stdio(false);
#define ms(a) memset(a,0,sizeof(a))
#define mss(a) memset(a,-1,sizeof(a))
#define msi(a) memset(a,inf,sizeof(a))
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
const int MOD=1e9+7;
const int N=5e5+5;
struct node{
    int l,r,cnt;
    node(int a=INT32_MAX,int b=INT32_MIN,int c=0):l(a),r(b),cnt(c){}
    void update(int i){l=min(l,i),r=max(r,i),cnt++;}
}info[N];
int A[N],dp[N],ac[N];
int main() {
    fast
    int n=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>A[i],info[A[i]].update(i);
    for(int i=n-1;i>=0;i--){
        ac[A[i]]++;
        int l=info[A[i]].l,r=info[A[i]].r,cnt=info[A[i]].cnt;
        if(l==i){
            dp[i]= dp[r+1]+cnt;
        }else{
            dp[i]=ac[A[i]];
        }
        dp[i]=max(dp[i],dp[i+1]);
    }
    cout<<n-dp[0] << '\n';
    return 0;
}
