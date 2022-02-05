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

int n;
	cin>>n;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		sum+=x;
		
	}
	
	if(sum){
		cout<<"HARD"<<endl;
	}
	else {
		cout<<"EASY"<<endl;
	}



return 0 ;
}
