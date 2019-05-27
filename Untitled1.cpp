
//递归快排
#include <stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

void qsort(int start, int end, int arr[]) {
	if (start >= end)     //先检查左右条件
		return;
	int pivot = start;
	int pvalue = arr[pivot];
	int i = start; int j = end;
	cout << "i=" << i << "arr[i]=" << arr[i] << "  j= " << j << "arr[j]=" << arr[j] << endl;
	while(i!=j&&i<j){
		while (i != j && j > start && arr[j] >= pvalue) { cout << "while1  ";j--; }
		if (i < j) { arr[i++] = arr[j]; }

		while (i != j && i < end && arr[i] <= pvalue) { cout << "while2  "; i++; }
		if (i < j) {
			arr[j--] = arr[i];//swap(arr[i], arr[j]);
		}
	}
	cout << "i="<<i << "   arr[i]=" << arr[i]<< "  j= " << j << "   arr[j]=" << arr[j] << endl;
	arr[i] = pvalue;
	for (int i = 0; i <= end; i++) {
		cout << arr[i];
	}
	qsort(0, i-1, arr);
	qsort(i + 1, end, arr);
	cout << endl;
		//return 0;
}
/**		
		while (i != j && i <= end && arr[i] <= pvalue) {
			cout << "while2";
			if (arr[j]<pvalue) {
				swap(arr[i], arr[j]);	j--;
			}
			if (arr[i] > pvalue) {
				swap(arr[i], arr[j]);	i++;
				cout << arr[i] << " " << arr[j] << endl;
			}
		}
	}
	cout << arr[i] << " " << arr[j] << endl;
	arr[i] = pvalue;
	for (int i = 0; i <= end; i++) {
		cout << arr[i];
	
	//return 0;
}**/
/*
void quickSort(int arr[], int len) {
	cout << "quickSort" << endl;
	for (int i = 0; i<len; i++) {
		cout << "qs" << endl;
		qsort(0, len - 1, arr);
		
	}
	cout << "after quicksort:" << endl;
	for (int i = 0; i<len; i++) {
		cout << arr[i];
	}
}
*/

int main() {
	//int arr[] = { 1,6,3,4,6,0,9 };
	int arr[] = { 0,1,6,3,4,6,0,9 };
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i<len; i++) {
		cout << arr[i];
	}
	cout << endl;
	qsort(0, len-1,arr);
	cout << "after quicksort:  " << endl;
	for (int i = 0; i<len; i++) {
		cout << arr[i];
	}
	system("pause");
	return 0;
}

