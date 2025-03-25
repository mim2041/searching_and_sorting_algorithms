#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int flag = 0;
        for(int j=0; j<n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    bubbleSort(a, n);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}