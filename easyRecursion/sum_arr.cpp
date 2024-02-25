#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
int ans = 0;
int arr_sum(int arr[], int len)
{
    if (len == 1)
        return arr[0];
    int sub_sum = arr_sum(arr, len - 1);
    return sub_sum + arr[len - 1];
}

int main()
{
    int arr[5] = {1, 8, 2, 10, 3};
    cout << arr_sum(arr, 5);
    return 0;
}
