#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& arr,int start,int mid,int end)
{
    int i = start, j = mid + 1, k = 0;
    vector<int> tmp(end - start + 1);
    while (i <= mid && j <= end)
    {
        if (arr[i] < arr[j])
        {
            tmp[k] = arr[i];
            i++;
        }
        else
        {
            tmp[k] = arr[j];
            j++;
        }
        k++;
    }
    while (i <= mid)
    {
        tmp[k] = arr[i];
        i++;
        k++;
    }
    while (j <= end)
    {
        tmp[k] = arr[j];
        j++;
        k++;
    }
    for (k = 0; k < tmp.size(); k++)
    {
        arr[start + k] = tmp[k];
    }
}

void mergeSort(vector<int>& arr, int l, int r)
{
    if (l<r)
    {
        int m = (l+r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main()
{
    vector<int> arr = {5, 2, 9, 1, 5, 6};
    mergeSort(arr, 0, arr.size() - 1);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
