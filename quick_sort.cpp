#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int l, int h)
{
    int pivot = a[l];
    int i = l, j = h;

    while (i < j)
    {
        while ((i<=h) && (a[i] <= pivot))
        {
            i++;
        }
        while ( (j>=l) && (a[j] > pivot))
        {
            j--;
        }
        if (i < j)
        {
            swap(a[i], a[j]);
        }
    }
    swap(a[l], a[j]);
    return j;
}

void quicksort(int a[], int l, int h)
{
    if (l < h)
    {
        int j = partition(a, l, h);
        quicksort(a, l, j - 1);
        quicksort(a, j + 1, h);
    }

}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    quicksort(a, 0, n - 1);

    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}