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
int t;
cin>>t;
while(t--)
{
  string s;
 cin>>s;
  int a = s.size();
  int ans=0;
  int x=stoi(s);
  int c = x%10;
  if(a==1){
      ans = 10 * (c-1) + 1; 
  }
  else if(a==2){
     ans = 10 * (c-1) + 3;  
  }
  else if(a==3){
     ans = 10 * (c-1) + 6;  
  }
  else if(a==4){
     ans = 10 * (c-1) + 10;  
  }
 cout<<ans<<endl; 

   




}
return 0 ;
}
