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
ll n;
cin>>n;
ll c=0;
while(n>=4 && n%7!=0){
    c++;
    n=n-4;
}
if(n%7==0){

    for(ll i=0;i<c;i++){
        cout<<4;
    }
    for(ll i=0;i<n/7;i++){
        cout<<7;
    }
    return 0;
}
else{
    cout<<-1<<endl;
    return 0;
}
return 0 ;
}
