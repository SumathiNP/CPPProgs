#include <bits/stdc++.h>
using namespace std;
int firstRepeated(int arr[], int n)
{
	int max = 0;
	for (int x = 0; x < n; x++) {
		if (arr[x] > max) {
			max = arr[x];
		}
	}
	int temp[max + 1];

	for (int i = 0; i < max + 1; i++)
		temp[i] = 0;

	for (int x = 0; x < n; x++) {
		int num = arr[x];
		temp[num]++;
	}

	for (int x = 0; x < n; x++) {
		int num = arr[x];
		if (temp[num] > 1) {
			return x;
		}
	}

	return -1; // if no repeating element found
}
int firstRepeated()
{

	int arr[] = { 10, 5, 3, 4, 3, 5, 6 };

	int n = sizeof(arr) / sizeof(arr[0]);
	int index = firstRepeated(
		arr, n); // index Of 1st repeating number
	if (index != -1) {
		cout << "1st Repeating Number is " << arr[index];
	}
	else {
		cout << "No Repeating Number Found";
	}

	return 0;
}

// This code is contributed by gauravrajput1
