#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int n){
    for(int i=0 ; i<n)
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ;i++){
        cin >> arr[i];
    }

    //sorting
    selectionSort(arr,n);
    bubbleSort(arr,n);
    insersionSort(arr,n);
    

    for(int i=0 ; i<n ;i++){
        cout << arr[i];
    }

}