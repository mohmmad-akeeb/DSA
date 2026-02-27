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
    if(n<=1)
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
        rev(i+1,arr,n);

}

bool palindrom(int i, string &str){
    if(i >= str.size()-i-1 )
        return true;
    else
        if(str[i] == str[str.size()-i-1])
            return palindrom(i+1,str);
        else
            return false;
}

bool palindrom2(int i, string &str){
    if(i >= str.size()/2)
        return true;
    if(str[i] != str[str.size()-i-1])
        return false;
    return palindrom(i+1,str);          
}

string tolower(string s){
    vector<char> str = {};
    char ch;
    for(int i = 0; i<s.size();i++){
        if(s[i] >= 'A' && s[i]<='Z'){
            ch = char(s[i] + 32);
            str.push_back(ch);
        }
        else if(s[i] >= 'a' && s[i]<='z'){
            str.push_back(s[i]);
        }
        else
            continue;
    }
    return string(str.data());
}

bool palendrom(string s){
    int left = 0;
    int right = s.size() - 1;

    while(left < right){
        while(left < right && !isalnum(s[left])) left++;
        while(left < right && !isalnum(s[right])) right--;

        if(tolower(s[left]) != tolower(s[right]))
            return false;

        left++;
        right--;
    }
    return true;
}
        
int main(){

    string str;
    str = "A man, a plan, a canal: Panama";
    
    cout<<tolower(str);
    // int arr[n];
    // for(int i = 0; i<n;i++) cin>> arr[i];

    // for(int i = 0; i<n;i++) cout<< arr[i];
    // rev(0,arr,n);
    // cout << endl;
    // for(int i = 0; i<n;i++) cout<< arr[i];
    return 0;

}