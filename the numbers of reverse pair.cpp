#include <iostream>
#include <vector>
using namespace std;
const int N = 1e6 + 10;
int nums[N], temp[N];
int merge_sort(int nums[], int l, int r)
{
    if (l >= r)
    {
        return 0;
    }
    int x = (l + r) / 2;
    int ret = merge_sort(nums, l, x) + merge_sort(nums, x + 1, r);
    int i = l, j = x + 1;
    int k = 0;
    while (i <= x && j <= r)
    {
        if (nums[i] > nums[j])
        {
            ret += x - i + 1;
            temp[k] = nums[j];
            k++;
            j++;
        }
        else
        {
            temp[k] = nums[i];
            k++;
            i++;
        }
    }
    while (i <= x)
    {
        temp[k] = nums[i];
        i++;
        k++;
    }
    while (j <= r)
    {
        temp[k] = nums[j];
        k++;
        j++;
    }
    for (int t = 0, p = l; p <= r; t++, p++)
    {
        nums[p] = temp[t];
    }
    return ret;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << merge_sort(nums, 0, n - 1);
}