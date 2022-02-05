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
map<string,int>a;
a["Tetrahedron"] = 4;
a["Cube"] = 6;
a["Octahedron"] = 8;
a["Dodecahedron"] = 12;
a["Icosahedron"] = 20;
int n ; cin>>n;
int ans = 0;
for (int i = 0; i < n; i++)
{
    string s;
    cin>>s;
ans = ans + a[s];

}
cout<<ans;












    
    
return 0 ;
}
