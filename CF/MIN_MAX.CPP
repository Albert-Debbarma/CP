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
     
    int t;
    cin>>t;
    while(t--){
        int n; 
        cin>>n;
      ll a[n],b[n];
      for (int i = 0; i < n; i++)
      {
     cin>>a[i];
      }
      for (int i = 0; i < n; i++)
      {
     cin>>b[i];
      } 
      for (int i = 0; i < n; i++)
      {
    int x =max(a[i],b[i]);
    int y=min(a[i],b[i]);
    a[i] =x;
    b[i]= y;
      }
    int m = *max_element(a,a+n);
    int k = *max_element(b,b+n);
     cout<< k*m<<endl; 
      }
      
      
    return 0 ;
    }
