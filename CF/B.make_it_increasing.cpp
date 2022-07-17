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
int t; cin>>t;
while(t--){

int n ; cin>>n;
vector<int>v(n);
for(auto &i : v) cin >> i;
int ans = 0;
for (int i = n-2; i >= 0; i--)
{
    while (v[i] >= v[i+1] && v[i]>0)
    {
        v[i] /= 2;
        ans++;
    }
if(v[i] == v[i+1]){
ans = -1;
break;
}   
}
cout<<ans<<endl;
}
return 0 ;
}
