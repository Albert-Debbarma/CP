    #include<iostream>
     #include <string>
    #include <vector>
    #include <algorithm>
    #include <sstream>
    #include <queue>
    #include <deque>
    #include <bitset>
    #include <iterator>
    #include <list>
    #include <stack>
    #include <map>
    #include <set>
    #include <functional>
    #include <numeric>
    #include <utility>
    #include <limits>
    #include <time.h>
    #include <math.h>
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <assert.h>
    using namespace std ;
    #define ar array
    #define ll long long
    #define ld long double
    int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t ;cin>>t;
    while(t--){
        int n ; cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
            
     
        }
        
        vector<int>odd;
        
        for(int i = 0 ;i < n; i++){
            if(a[i] % 2 == 0){
    cout<<a[i]<<" ";
            }
            else{
                odd.push_back(a[i]);
            }
        }
        for( auto j : odd){
            cout<<j<<" ";
     
        }
        cout<<endl;
        
    }
    return 0 ;
    }
