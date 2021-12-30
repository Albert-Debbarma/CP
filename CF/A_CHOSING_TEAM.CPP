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
int n,k,c=0;
cin>>n>>k;

int arr[2000];
for(int i = 0 ; i<n; i++) {
cin>>arr[i];
}
for(int i = 0 ; i<n; i++) {
arr[i] = arr[i] + k ;
if(arr[i] <= 5)
c++;
}
int ans = c/3;
cout<<ans<<"\n";
return 0 ;
}
