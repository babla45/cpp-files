//quick sort descending 

#include <iostream>
using namespace std;
void swapp(int *a, int *b)
{
    if(*a==*b) return;
    *a+=*b;
    *b=*a-*b;
    *a=*a-*b;
}
void quickSort(int arr[], int left, int right)
{
    if(left<right)
    {
    int i = left, j = right;
    int pivot = arr[right];

    while (i <= j)
    {
        while (arr[i] < pivot) i++;
        while (arr[j] > pivot) j--;
        if (i <= j)
        {
            swapp(&arr[i], &arr[j]);
            i++;
            j--;
        }
    }
    quickSort(arr, left, j);
    quickSort(arr, i, right);
    }
}


int main()
{
    int arr[] = { 4,3,2,2,7,1,2,3,43,9,1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
