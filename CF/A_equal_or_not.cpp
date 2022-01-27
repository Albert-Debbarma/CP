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
ll  t ; cin>>t;
while(t--){
   string s;
   cin>>s;
   int ans = 0;
   for (int i = 0; i < s.size(); i++)
   {
       if(s[i]=='N')
       ans++;
   }
   if(ans == 1){
       cout<<"NO"<<"\n";
      
   }
   else{
       cout<<"YES"<<"\n";
   }
    
}
return 0 ;
}
