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

/*  int t;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        ll k=1;
        while(k<n){
            k*=10;
        }
        if(k>n){
            k/=10;
            cout<<n-k<<endl;
        }else cout<<n-k<<endl;
    }*/
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

vector<int>a =  {1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000};

int t ;


cin>>t;
while (t--)
{
 int m ; 
 cin>>m; 
 int i = 9; 
 for ( ; i >=0; i--)
{
  if(m >= a[i] ){
   break;
  }
  }
cout<<m-a[i]<<endl;
}


  
return 0 ;
}
