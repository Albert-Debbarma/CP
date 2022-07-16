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
    int t ; cin>>t;
    while(t--){
     vector<int> v;
    for (int i = 0; i < 4; i++)
    {
        int x; cin>>x;
        v.push_back(x);
    }
    int c1 = count(v.begin(), v.end(), 0);
    int c2 = count(v.begin(), v.end(), 1);
     
    if(c1 == 4)
    cout<<" 0"<<endl;
    else if (c2 ==4)
    cout<<" 2"<<endl;
    else cout<<" 1"<<endl;
     
     
    }
    return 0 ;
    }
