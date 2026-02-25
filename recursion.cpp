#include<bits/stdc++.h>
using namespace std;

void name(int n){
    if(n < 1)
        return;
    cout << "I love you" << endl;
    name(--n);
}
void sequence1(int n){

    if(n < 1)
        return;
    else{
        sequence1(n-1);
        cout << n << endl ;
    }
}

void sequence2(int n){

    if(n < 1)
        return;
    else{
        cout << n << endl ;
        sequence2(--n);
    }
}

int sum(int n ){
    if(n==1)
        return 1;
    else
        return n + sum(n-1);
}

int fact(int n ){
    if(n==1)
        return 1;
    else if(n== 0)
        return 1;
    else
        return n * fact(n-1);
}

void rev(int i, int arr[],int n){
    int temp;
    if(i >= n/2 )
        return ;
    else
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp; 
}


int main(){

    int n;
    cin>> n;
    int arr[n];
    for(int i = 0; i<n;i++) cin>> arr[i];

    for(int i = 0; i<n;i++) cout<< arr[i];
    rev(0,arr,n);
    cout << endl;
    for(int i = 0; i<n;i++) cout<< arr[i];
    return 0;

}