#include<iostream>
using namespace std;
void swap(int *input,int i,int j) {
    int temp=input[i];
    input[i]=input[j];
    input[j]=temp;
}
void rev(int input[],int s, int e) {
    int i=s,j=e;
    while(i<j) {
        swap(input,i,j);
        i++;
        j--;
    }
}
void rotate(int *input, int d, int n) {
    if(d>=n&&n!=0) {
        d=d%n;
    } else if(n==0) {
        return;
    }
    rev(input,0,n-1);
    rev(input,0,n-d-1);
    rev(input,n-d,n-1);
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int size;
        cin >> size;
        int *arr = new int[size];
        for(int i=0;i<size;i++) {
            cin >> arr[i];
        }
        int d;
        cin >> d;
        rotate(arr, d, size);
        for(int i=0;i<size;i++) {
            cout << arr[i] << " ";
        }
        delete[] arr;
        cout << endl;
    }
    return 0;
}