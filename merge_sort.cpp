#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &a, int start, int mid, int end)
{
    int i= start, j=mid + 1;
    vector<int> temp;

    while(i<= mid && j<= end)
    {
        if(a[i] <= a[j])
        {
            temp.push_back(a[i]);
            i++;
        }
        else
        {
            temp.push_back(a[j]);
            j++;
        }
    }

    while(i<=mid)
    {
        temp.push_back(a[i]);
        i++;
    }
    while(j<=end)
    {
        temp.push_back(a[j]);
        j++;
    }
    for(int i=0; i<temp.size(); i++)
    {
        a[start + i] = temp[i];
    }
}

void mergeSort(vector<int> &a, int start, int end)
{
    if(start < end)
    {
        int mid = (start + end) / 2;
        mergeSort(a, start, mid);
        mergeSort(a, mid+1, end);
        merge(a, start, mid, end);
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    mergeSort(a, 0, a.size()-1);

    for(int i=0; i<a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}