    #include<iostream>
    #include<vector>
    #include<string>
    #include<algorithm>
    using namespace std;
    int ret[1000000];//用vector会好一点，不然ret可能会开小了
    int main()
    {
        string a,b;
        getline(cin,a);
        getline(cin,b);
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        size_t i=0,j=0;
        int count=0;
        int x=0;   
        while(i<a.length()||j<b.length())
        {
            if(i<a.length())x+=a[i]-'0';
            if(j<b.length())x+=b[j]-'0';
            ret[count]=x%10;
            x/=10;
            count++;
            i++,j++;
        }
        if(x){
            ret[count]=1;
            count++;
        }
        for(int t=count-1;t>=0;t--){
            cout<<ret[t];
        }
    }