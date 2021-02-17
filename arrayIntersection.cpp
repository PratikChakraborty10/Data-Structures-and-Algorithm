#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
/*void merge(int arr[], int l, int h, int m) {
    int i,j,k,temp[h-l+1];
    i=l;
    k=0;
    j=m+1;
    while(i<=m && j<=h) {
        if(arr[i]<arr[j]) {
            temp[k++]=arr[i++];
        }else{
            temp[k++]=arr[j++];
        }
    }
    while (i<=m) {
        temp[k++]=arr[i++];
    }
    while(j<=h) {
        temp[k++]=arr[j++];
    }
    for(i=l;i<=h;i++) {
        arr[i]=temp[i-1];
    }
}
void merges(int arr[], int l, int h) {
    int m;
    while(l<h) {
        m=(l+h)/2;
        merges(arr, l, m);
        merges(arr, m+1, h);
        merge(arr, l, h, m);
    }
}
void mergeSort(int arr[], int n) {
    merges(arr, 0, n-1);
}*/
void intersection(int input1[], int input2[], int size1, int size2) {
    sort(input1, input1+size1);                                  
    sort(input2, input2+size2);
    int i=0,j=0;
    while (i<size1 && j<size2){
        if (input1[i]==input2[j]){
            cout<<input1[i]<<endl;
            i++;
            j++;
        }
        else if (input1[i]>input2[j]){
            j++;
        }
        else {
            i++;
        }
    }    
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int size1, size2;
        cin >> size1;
        int *arr1 = new int[size1];
        for(int i=0;i<size1;i++) {
            cin >> arr1[i];
        }
        int *arr2 = new int[size2];
        for(int i=0;i<size2;i++) {
            cin >> arr2[i];
        }
        intersection(arr1, arr2, size1, size2);
        delete[] arr1;
        delete[] arr2;
        cout << endl;
    }
    return 0;
}