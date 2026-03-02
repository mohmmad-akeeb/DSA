#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;


    //pre-store
    int hash[256] = {0};
    for(int i=0;i<str.size();i++){
        hash[str[i]] +=1;
    }

    int q;
    cin >>q;
    while(q--){
        char ch;
        cin >> ch;

        //fetch
        cout << hash[ch] << endl;
    }
}