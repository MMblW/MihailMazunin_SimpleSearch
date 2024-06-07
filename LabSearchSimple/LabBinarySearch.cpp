#include <iostream>
using namespace std;
int BinarySearch(int *arr, int key, int size)
{
    int l = 0, r = size;
    int i = ((l + r) / 2);
    while (arr[i] != key)
    {
        i = ((l + r) / 2);
        if (key >= arr[i])
        {
            l = i;
        }
        else
        {
            r = i;
        }
    }
    if (arr[i] == key)
    {
        return i;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int arr[] = {1, 5, 12, 16, 17, 19, 22, 36, 44, 52, 91};
    cout << BinarySearch(arr, 91, sizeof(arr) / sizeof(int));
}