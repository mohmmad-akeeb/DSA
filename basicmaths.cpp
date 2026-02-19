#include<bits/stdc++.h>
using namespace std;

int countDigits(int n){
    // int count = 0;

    // while(n >0){
    //     count++;
    //     n= n/10;
    // }
    // return count;
    return (int)log10(n) + 1;
}

long long int reverse(long long int x) {
        long long reverse = 0;
        int digit;
        int sign = x < 0 ? 1 : 0;
        x = abs(x);
        while(x >0){
            digit = x%10;
            x= x/10;
            reverse = (long)reverse*10 + digit;
        }
        return sign ? -reverse : reverse;
    }

bool palindrome(long long int x) {
        long long reverse = 0;
        int digit;
        int sign = x < 0 ? 1 : 0;
        long long cpy = x;
        x = abs(x);
        while(x >0){
            digit = x%10;
            x= x/10;
            reverse = (long)reverse*10 + digit;
        }
        reverse = sign ? -reverse : reverse;
        if(reverse==cpy)
            return true;
        else
            return false;
    }

bool armstrong(long long int x) {
        long long sum = 0;
        int digit;
        long long cpy = x;
        int num_digit = log10(x) + 1;
        while(x >0){
            digit = x%10;
            sum +=  pow(digit,num_digit);
            x= x/10;
        }
        return sum==cpy ? true : false;
    }

vector<int> allDivisors(int n){
    vector <int> divisors;

    for(int i = 1; i*i <=n; i++){
        if(n%i == 0){
            // pushing the divisor eg n=36 i = 6
            divisors.push_back(i);

            // checking for duplicate divisors eg 6*6 = 36
            if(i != n/i){
                divisors.push_back((int)(n/i));
            }
            
        }
    }
    sort(divisors.begin(), divisors.end());

    return divisors;
}

bool prime(int n){
    int count = 1;

    for(int i = 1; i*i <=n; i++){
        if(n%i == 0 && i != n/i){
            count += count;
        }
    }

    return count == 2 ? true : false;
}

int gcd(int a, int b){
    int temp;
    int divident = a;
    int divisor = b;
    while (true)
    {
        temp = divisor;
        divisor = divident % divisor;
        if(divisor == 0)
            break;
        divident = divisor;
    }
    return divident;
}
    
int main(){
    int n,m;
    cin >> n >> m;

    // if(prime(n)){
    //     cout << "Number is prime";
    // }
    // else{
    //     cout << "Number is not prime";
    // }

    cout << gcd(n,m);


    return 0;

}