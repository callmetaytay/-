#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<int > num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    vector<int> nums(q);
    vector<int> left(q,0);
    vector<int> right(q,0);
    for(int i=0;i<q;i++){
        cin>>nums[i];
    }
    for(int i=0;i<q;i++){
        int l=0,r=n-1;
        while(l<r){
            int mid=(l+r+1)/2;
            if(num[mid]<=nums[i]){
                l=mid;
            }
            else r=mid-1;
        }
        right[i]=l;
    }
    for(int i=0;i<q;i++){
        int l=0,r=n-1;
        while(l<r){
            int mid=(l+r)/2;
            if(num[mid]>=nums[i]){
                r=mid;
            }
            else l=mid+1;
        }
        left[i]=r;
    }
    for(int i=0;i<q;i++){
        if(num[left[i]]!=nums[i])
        cout<<"-1 -1"<<endl;
        else 
        cout<<left[i]<<' '<<right[i]<<endl;
    }
}