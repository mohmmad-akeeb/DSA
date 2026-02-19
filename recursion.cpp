#include<bits/stdc++.h>
using namespace std;

void name(int n){
    if(n == 0)
        return;
    cout << "I love you" << endl;
    name(--n);
}

void sequence(int n){

    if(n == 0)
        return;
    
    sequence(--n);
    cout << n << endl ;

}


int main(){

    sequence(5);
    return 0;

}