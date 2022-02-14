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
    ll k,n,w;
    cin >> k >> n >> w;
    ll ans= 0 ;
     
    for (int i = 1; i <=w; i++)
    {
       ans = ans + (i*k);
    }
    if(n >= ans){
        cout<<0<<"\n";
    }
    else{
    cout<<(ans - n)<<"\n";
    }
    return 0 ;
    } 
