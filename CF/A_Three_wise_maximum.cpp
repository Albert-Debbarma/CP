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
ll t ; cin>> t;
while(t--){
    vector<int>a(3);
    for (int i = 0; i < 3; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    if(a[1] != a[2]){
       cout<<"NO"<<endl; 
    }
    else{
        cout<<"YES"<<endl;
        cout<<a[0]<<" "<<a[0]<<" "<<a[2]<<endl;
        
    }
    
}

return 0 ;
}
