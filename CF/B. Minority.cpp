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
    ll t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      int a = s.length();
     
      int one =count(s.begin(), s.end(), '1');
      int z = count(s.begin(), s.end(), '0');
     
      if(one == z)
      {
        if(s[a-1] == '1'){
    cout<<one-1<<endl;
        } 
         if(s[a-1] == '0'){
    cout<<z-1<<endl;
        } 
      }
      if(one < z){
          cout<<one<<endl;
      } 
      if(one > z){
          cout<<z<<endl;
      } 
      
    }
     
    return 0 ;
    }
