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
int n,k,l,c,d,p,nl,np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
int x = k*l/nl;
int y = c*d;
int z = p/np;
int ans;
if( x<y && x<z)
ans = x;
else 
ans = min(y,z);
cout<<ans/n<<endl;

    
return 0 ;
}
