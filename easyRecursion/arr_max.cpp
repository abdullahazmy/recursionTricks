#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

int arr_max(int arr[], int length)
{
    if (length == 1)
        return arr[0];
    int sub_arr = arr_max(arr, length - 1);
    return max(sub_arr, arr[length - 1]);
}

int main()
{
    return 0;
}
