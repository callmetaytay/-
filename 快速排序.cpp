#include<iostream>
using namespace std;
void quick_sort(int q[], int l, int r) {
    if (l >= r)return;
    int x = q[(l + r) / 2], i = l - 1, j = r + 1;//x可以取任意值，但是取（l+r）/2时可以缩短程序运行时间
    while (i < j) {
        do i++; while (q[i] < x);
        do j--; while (q[j] > x);
        if (i < j)swap(q[i], q[j]);
    }
    //递归
    quick_sort(q, l, j);//j 是小于等于中间值 x 的最右边位置，为保证左区间的数均小于等于x，所以将j作为左区间的右边界；j+1作为右区间的左边界
    quick_sort(q, j + 1, r);//同理也可以是(q,l,i-1),(q,i,r)
}
