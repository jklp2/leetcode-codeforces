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
const int N=100005;
int f[N],t[N],sz[N];
int maxd=0;
bool dp[500][N];
int path[500][N];
vector<int> G[N],note[N];
vector< pair<int,int> > l_id , l_fre;
bool cmp(int u,int v){
    return (sz[u] < sz[v]);
}
int dfs(int x,int D){
    maxd=max(maxd,D);
    note[D].push_back(x);
    sz[x]=1;
    for(int ne:G[x])
        sz[x]+=dfs(ne,D+1);
    return sz[x];
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin>>n>>x;
    char a='a',b='b';
    if(x>n-x)
        x=n-x,swap(a,b);
    for(int i=2;i<=n;i++)
        cin>>f[i],G[f[i]].push_back(i);
    dfs(1,0);
    for(int i = 0 ;i <= maxd;i++)
        l_id.push_back(make_pair((int)note[i].size() , i));
    sort(l_id.begin(),l_id.end());
    for(int i = 0 ;i < (int)l_id.size();i++){
        if(i == 0 || l_id[i].first != l_id[i - 1].first)
            l_fre.push_back(make_pair(l_id[i].first , 1));
        else
            l_fre.back().second++;
    }
//    unordered_map<int,vector<int>> fre_d;
//    for(int i=0;i<=maxd;i++){
//        fre_d[note[i].size()].push_back(i);
//    }
//    unordered_map<int,int> fre;
//    for(auto &v:note){
//        fre[v.size()]++;
//    }
//    vector<vector<bool>> dp(fre.size(),vector<bool>(x+1,false));
//    vector<vector<int>> path(fre.size(),vector<int> (x+1,0));
    int idx=0;
    int all=l_fre.size();
    for(auto &kv:l_fre){
        int k=kv.first,v=kv.second;
        if(idx==0){
            for(int i=0;i<=v&&i*k<=x;i++){
                dp[0][i*k]=true;
            }
            idx++;
            continue;
        }
        memset(t,-1,k*4);
        for(int i=0;i<=x;i++){
            if(dp[idx-1][i]){
                t[i%k]=i;
            }
            if(t[i%k]!=-1&&(i-t[i%k])<=v*k) {
                dp[idx][i] = true;
                path[idx][i]=t[i%k];
            }
        }
        idx++;
    }
    string ans(n,b);
    if(dp[all-1][x]){
        int cur=x;
        memset(t,0,(n+1)*4);
        for(int i=l_fre.size()-1;i>=0;i--){
            int k=l_fre[i].first;
            int num = (cur - path[i][cur])/k;
            t[k]=num;
            cur =path[i][cur];
        }
        for(int i=0;i<=maxd;i++){
            int len=note[i].size();
            if(t[len]){
                t[len]--;
                for(int xx:note[i]){
                    ans[xx-1]=a;
                }
            }
        }

        cout<<maxd+1<<endl;
        cout<<ans;
    }else{
        int res=n-x;
        for(int i = 0 ;i <= maxd;i++){
//            if(note[i].size()>x)
            if(x<res)
                swap(a,b),swap(x,res);
            sort(note[i].begin(),note[i].end(),cmp);

            while((int)note[i].size() > 0 && x > 0){
                ans[note[i].back() - 1] = a;
                note[i].pop_back();
                x--;
            }
            while((int)note[i].size() > 0 && res > 0){
                ans[note[i].back() - 1] = b;
                note[i].pop_back();
                res--;
            }
        }
        cout<<maxd+2<<endl;
        cout<<ans;
    }
    return 0;
}