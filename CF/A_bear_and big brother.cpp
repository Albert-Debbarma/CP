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
    int a , b;
    cin >> a >> b;
    int i = 0;
    while( true){
        a = a * 3;
        b = b * 2; 
        i++;
        if( a > b)
        break;
    }
    cout<<i;
    return 0 ;
    }
