#include<iostream>
using namespace std;
int duplicateElement(int arr[], int size) {
    int sum = 0;
    for(int i=0;i<size;i++) {
        sum = sum + arr[i];
    }
    int n = size-2;
    int sum2 = (n*(n+1)/2);
    int duplicate = sum - sum2;
    return duplicate;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int ans = duplicateElement(arr, n);
    cout << ans << endl;
    }
    return 0;
}