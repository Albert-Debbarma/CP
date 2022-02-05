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
ll t ; cin>>t;
while(t--){
    int n ;
    cin>>n;
int arr[6];
int cnt = 0, m = 1;
for (int i = 1; i < 6; i++)
{
   arr[i] = n%10;
   n = n/10;
   if(arr[i] != 0){
       cnt++;
   } 
}
cout<<cnt<<endl;
for (int i = 1; i < 6; i++){
    if(arr[i] != 0){
        cout<< arr[i] * m<<" ";
    }
    m = m*10;
}
cout<<endl;
 
}
return 0 ;
}
