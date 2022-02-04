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
string s;
cin>>s;
ll l= s.size();
ll first = s[0] - '0';
if(first == 9){
    s[0] ='9';
}
else{
    if( first >4)
    {
        s[0] = ((9-first)  + '0');
          }
}
for (ll i = 1; i < l; i++)
{
    ll a =  s[i] - '0';
    if (a < 5 || a==0) {
     continue;   
    }
    else{
      s[i] = ((9-a)  + '0');  
    }
}
cout<<s;


return 0 ;
}
