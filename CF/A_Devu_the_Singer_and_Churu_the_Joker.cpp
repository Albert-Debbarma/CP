https://codeforces.com/problemset/problem/439/A
    #include<iostream>
     
    using namespace std ;
    int main(){
    int n ,d;
    cin>>n>>d;
    int arr[n];
    int sum = 0;
    for ( int i  = 0; i < n; i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }
    if(sum + 10 *  (n-1) > d){
        cout<<"-1"<<"\n";
    }
    else{
    cout<<(d-sum)/5<<"\n";
    }
     
    }
