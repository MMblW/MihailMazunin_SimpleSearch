#include <iostream>
using namespace std;
int Search(int *arr, int key, int size)
{
    int l = 0, r = size;
    int mid = l + (((key - arr[l]) * (r - l)) / (arr[r] - arr[l]));
    while (arr[mid] != key)
    {
        mid = l + (((key - arr[l]) * (r - l)) / (arr[r] - arr[l]));
        if (arr[mid] < key)
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    if (arr[mid] == key)
    {
        return mid;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int arr[] = {1, 1, 1, 1, 1, 1, 1, 2, 3, 3, 3, 3, 3, 3};
    cout << Search(arr, 2, sizeof(arr) / sizeof(int) - 1);
}