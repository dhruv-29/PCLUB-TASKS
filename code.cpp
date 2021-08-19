#include<bits/stdc++.h>
using namespace std;
int dp[1001][100001];
int tell(string &str,int n,int cost){
    if(cost==0){
        return 1;
    }
    if(n==0&&cost>0){
        return 0;
    }
    if(dp[n][cost]==-1){
        if(str[n-1]-'0'>cost){
            dp[n][cost]=tell(str,n-1,cost);
        }
        else{
            dp[n][cost]=tell(str,n-1,cost)+tell(str,n-1,cost-str[n-1]+'0');
        }
        return dp[n][cost];
    }
    else{
        return dp[n][cost];
    }
}
void solve(){
    int c,n;
    cin>>c>>n;
    string str;
    cin>>str;
    cout<<c<<' '<<n<<endl;
    int len=str.size();
    int count=tell(str,len,c);
    if(count>=n){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return ;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<1001;i++){
        for(int j=0;j<100001;j++){
            dp[i][j]=-1;
        }
    }
    while(t--){
        solve();
    }
}