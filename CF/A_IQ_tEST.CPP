#include <iostream>

using namespace std;

int main()
{
    int n, x, even= 0, lastodd = 0, lasteven= 0;//have to check this problem  again;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        cin >> x;
        if (x % 2 == 0)
        {
            even += 1;
            lasteven = i;
        }
        else
        {
            even -= 1;
            lastodd = i;
        }
    }

   
    if(even > 0){
        cout<<lastodd<<"\n";
    
    }
    else{
        cout<<lasteven<<"\n";
    }

    return 0;
}
