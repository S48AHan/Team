#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a, x,y;
    cin>>n>>m>>a;
    x = n/a;
    y = m/a;
    if(n%a==0)
        x++;
    if(m%a==0)
        y++;
    cout<<x*y;
    return 0;
    cout.precision(22);
}

