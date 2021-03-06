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
#define fast ios::sync_with_stdio(false);cin.tie(0);
int a[100000],b[100000],c[100000];
vector<int> res[100005];
void solve(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i],res[i+1].clear();
    for(int i=0;i<m;i++)
        cin>>c[i];
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            res[b[i]].push_back(i);
        }
    }
    int last = -1;
    if((int)res[c[m - 1]].size() > 0){
        last = res[c[m - 1]].back();
        res[c[m - 1]].pop_back();
    }
    else{
        for(int i = 0 ;i < n;i++){
            if(b[i] == c[m - 1]){
                last = i;
                break;
            }
        }
    }
    if(last == -1){
        puts("NO");
        return;
    }
    c[m-1]=last;
    for(int i=0;i<m-1;i++){
        if(!res[c[i]].empty()){

            int t=c[i];
            c[i]=res[c[i]].back();
            res[t].pop_back();

        }else{
            c[i]=last;
        }
    }
    for(int i=0;i<n;i++) {
        if (!res[i].empty()) {
            puts("NO");
            return;
        }
    }
    puts("YES");
    for(int i=0;i<m;i++)
        printf("%d ",c[i]+1);
    puts("");

}

int main() {
    int z;
    cin>>z;
    while(z--)
        solve();

    return 0;
}
