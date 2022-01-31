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
int n,m;
cin>>n>>m;
int in = 1; 
ll ans =0;
for(int i = 0; i<m;i++){
int curr;
cin>>curr;
if(in <= curr){
    ans+=curr-in;
}
else{
    ans+=n-(in-curr);
}
in = curr;

}
cout<<ans<<endl;
return 0 ;
}
