#include<iostream>
using namespace std;
int findUnique(int arr[], int n) {
    int res = 0;
    for(int i=0;i<n;i++) {
        res = res ^ arr[i];
    }
    return res;
}
int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int ans = findUnique(arr, n);
    cout << ans << endl;
}