#include <bits/stdc++.h>
    using namespace std;
   #define int long long 
   // #define mp make_pair
     
    const int N=2e5+5;
   //const int mod=1e9+7;
     
    int a[N];
    int pf[N];
     
     
     
   
     
    int32_t main(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        // freopen("input.txt", "r", stdin);
    	// freopen("output.txt", "w", stdout);
      //  int T=1;
        // cin>>T;
        long long    n,q;
        cin>>n>>q;
        for( int i=1;i<=n;i++)
            cin>>a[i];
        
        sort(a+1,a+n+1);
        reverse(a+1,a+n+1);
        
        for( int i=1;i<=n;i++)
            pf[i]=pf[i-1]+a[i];
        
        while(q--)
        {
             int x,y;
            cin>>x>>y;
            y=x-y;
            cout<<pf[x]-pf[y]<<endl;
        }
        
    }
