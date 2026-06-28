#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {12, 56, 90, 50};
    int size = 4;
    int target = 90;
    cout << linearSearch(arr, size, target) << endl;
}