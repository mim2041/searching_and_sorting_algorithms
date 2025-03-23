#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int x;
    cin>>x;
    bool found = false;
    for(int i=0; i<n; i++)
    {
        if(x == a[i])
        {
            found = true;
        }
    }

    if(found == true)
        cout<<"Found"<<endl;
    else
        cout<<"Not found"<<endl;
    return 0;
}