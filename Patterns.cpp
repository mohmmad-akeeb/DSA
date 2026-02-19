#include <bits/stdc++.h>
using namespace std;

void print1(int n){
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout<<endl;
    }
}

void print2(int n){
    for(int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout<<endl;
    }
}

void print3(int n){
    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout<<endl;
    }
}

void print4(int n){
    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout<<endl;
    }
}

void print5(int n){
    for(int i = 0; i < n; i++){
        for (int j = n - i; j >0; j--)
        {
            cout << "*";
        }
        cout<< "\n";
    }
}

void print6(int n){
    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= n-i+1; j++)
        {
            cout << j;
        }
        cout<<endl;
    }
}

void print7(int n){
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2*i+1; k++)
        {
            cout << "*";
        }
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        cout<<endl;
    }
}

void print8(int n){
    for(int i = 0; i < n; i++){
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2*n-1-2*i; k++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout<<endl;
    }
}

// void print10(int n){
//     for(int i = 1; i <= 2*n - 1; i++){
//         if (i <= n){
//             for (int j = 1; j <= i; j++)
//             {
//                 cout << "*";
//             }
//         }
//         else{
//             for (int j = 1; j <= 2*n-i; j++)
//             {
//                 cout << "*";
//             }
//         }
//         cout<<endl;
//     }
    
// }

void print10(int n){
    for(int i = 1; i <= 2*n - 1; i++){

        int stars = i<=n ? i : (2*n-i) ;

        for (int j = 1; j <= stars; j++)
        {
                cout << "*";
        }
        cout<<endl;
    }
    
}

void print11(int n){
    for(int i = 1; i <= n; i++){
        for (int j = 0; j < i; j++)
        {
                cout << (i+j)%2;
        }
        cout<<endl;
    }
}

void print12(int n){
    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++)
        {
                cout << j;
        }
        for (int j = 1; j <=n-i; j++)
        {
                cout << "  ";
        }
        for (int j = i; j >= 1; j--)
        {
                cout << j;
        }
        cout<<endl;
    }
}

void print13(int n){
    int count = 1;
    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++)
        {
                cout << count++ << " ";
        }
        cout<<endl;
    }
}

void print14(int n){
    for(int i=0; i<n ; i++){
        for(int j=0; j<=i ; j++){
            cout << (char)(65 + j) << " ";
        }
        cout << endl;
    }
}

void print15(int n){
    for(int i=0; i<n ; i++){
        for(int j=0; j<=n-i ; j++){
            cout << (char)(65 + j) << " ";
        }
        cout << endl;
    }
}

void print16(int n){
    for(int i=0; i<n ; i++){
        for(int j=0; j<=i ; j++){
            cout << (char)(65 + i) << " ";
        }
        cout << endl;
    }
}

void print17(int n){
    for(int i=0; i<n ; i++){
        for(int j=0; j< n-1 - i ; j++){
            cout << " ";
        }
        for(int k=0; k <= i ; k++){
            cout << (char)(65+k);
        }
        for(int l=0; l< i ; l++){
            cout << (char)(65+l);
        }
        for(int k=0; k< n-1-i ; k++){
            cout << " ";
        }
        cout << endl;
    }
}

void print18(int n){
    for(int i=1; i<=n ; i++){
        for(int j=0; j<i ; j++){
            cout << (char)(((n+j-i)%26)+65);
        }
        cout << endl;
    }
}

void print19(int n){
    for(int i=0; i<n; i++){
        for(int j = 0; j < n-i; j++){
            cout << "*";
        }
        for(int k = 0; k < 2*i; k++){
            cout << " ";
        }
        for(int j = 0; j < n-i; j++){
            cout << "*";
        }
        cout<< endl;
    }
    for(int i=1; i<=n; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        for(int k = 0; k < 2*(n-i); k++){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout<< endl;
    }
}

void print20(int n){
    for(int i=1; i<=2*n-1; i++){
        if(i <= n){
            for(int j = 1; j <= i; j++){
            cout << "*";
            }
            for(int k = 0; k < 2*(n-i); k++){
                cout << " ";
            }
            for(int j = 1; j <= i; j++){
                cout << "*";
            }
            cout<< endl;
        }
        else{
            for(int j = 1; j <= 2*n-i; j++){
            cout << "*";
            }
            for(int k = 0; k < 2*(i-n); k++){
                cout << " ";
            }
            for(int j = 1; j <= 2*n-i; j++){
                cout << "*";
            }
            cout<< endl;
        }
        
    }
}

void print21(int n){
    for(int i=1; i<=n ; i++){
        for(int j=1; j<=n ; j++){
            if(i==1 || i==n || j==1 || j==n){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}

void print22(int n){
    for (int i = 0; i < 2*n-1; i++)
    {
        for (int j = 0; j < 2*n-1; j++)
        {
            int top_dist = i;
            int left_dist = j;
            int bottom_dist = (2*n-2)-j;
            int right_dist = (2*n-2)-i;

            int x = n - min(min(top_dist,bottom_dist),min(left_dist,right_dist));

            cout << x<<" ";
        }
        cout<< endl;
    }
    
}
int main() {
    int n;
    cin >> n;

    print22(n);

    return 0;
}
