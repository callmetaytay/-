#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n+1,0);
    vector<int> b(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[i]=a[i]-a[i-1];
    }
    for(int i=0;i<m;i++){
        int l,r,c;
        cin>>l>>r>>c;
        b[l]+=c;
        b[r+1]-=c;
        for(int j=1;j<=n;j++){
            a[j]=a[j-1]+b[j];
        }
    }
    for(int i=1;i<=n;i++){
        cout<<a[i]<<' ';
    }
}