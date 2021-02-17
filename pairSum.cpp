#include<iostream>
#include<algorithm>
using namespace std;
void pairSum(int arr[], int n, int sum) {
     int count = 0;
    for (int i = 0; i < n; i++) 
        for (int j = i + 1; j < n; j++) 
            if (arr[j] + arr[i] == sum) 
               // cout  << arr[i] <<  " " <<arr[j]  << endl;
                cout  <<min(arr[j],arr[i]) <<  " " <<max(arr[i],arr[j])  << endl;
}
int main() {
	int t;
	cin >> t;
    while (t--) {
		int size;
		int x;
        cin >> size;
		int *input = new int[size];
        for (int i = 0; i < size; i++) {
			cin >> input[i];
		}
        cin >> x;
        cout << pairSum(input, size, x) << endl;
        delete[] input;
	}
	return 0;
}