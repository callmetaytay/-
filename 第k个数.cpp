#include<iostream>
#include<vector>
using namespace std;
void quick_sort(vector<int> &num, int l, int r) {
	if (l >= r)return;
	int x = num[(l + r) / 2], i = l - 1, j = r + 1;
	while (i < j) {
		do i++; while (num[i] < x);
		do j--; while (num[j] > x);
		if (i < j)swap(num[i], num[j]);
	}
	quick_sort(num, l, j);
	quick_sort(num, j+1, r);
}
int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> num(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	quick_sort(num, 0, n - 1);
	cout << num[k - 1];
}