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
int G[1000][1000];
int main() {
    fast
    int tot;
    cin>>tot;
    for(int z=0;z<tot;z++){
        int n,l;
        cin>>n>>l;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                char c;
                cin>>c;
                if(c=='a')
                    G[i][j]=1;
                else if(c=='b')
                    G[i][j]=2;
            }
        }

        if(l&1){
            cout<<"YES"<<endl;
            cout<<1<<" ";
            for(int k=0;k<l;k++){
                if(k&1){
                    cout<<1;
                }else{
                    cout<<2;
                }
                if(k==l-1)
                    cout<<endl;
                else
                    cout<<" ";
            }
            continue;
        }
        int tag=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(G[i][j]==G[j][i]){
                    cout<<"YES"<<endl;
                    cout<<i+1<<" ";
                    for(int k=0;k<l;k++){
                        if(k&1){
                            cout<<i+1;
                        }else{
                            cout<<j+1;
                        }
                        if(k==l-1)
                            cout<<endl;
                        else
                            cout<<" ";
                    }
                    tag=1;
                    break;

                }
            }
            if(tag)
                break;
        }
        if(tag)
            continue;
        if(n==2) {
            cout << "NO" << endl;
            continue;
        }
        cout<<"YES"<<endl;
        int a=0,b=1,c=2;
        if(G[a][b]!=G[b][c]){
            if(G[b][c]==G[c][a]){
                a=1,b=2,c=0;
            }else{
                a=2,b=0,c=1;
            }
        }

        for(int i=l/2-1;i>=0;i--){
            if(i&1)
                cout<<b+1<<" ";
            else{
                cout<<a+1<<" ";
            }
        }
        cout<<b+1<<" ";
        for(int i=0;i<l/2;i++){
            if(i&1) {
                if(i!=l/2-1)
                    cout << b + 1 << " ";
                else
                    cout << b + 1 << endl;
            }
            else{
                cout<<c+1<<" ";
            }
        }

    }
    return 0;
}
