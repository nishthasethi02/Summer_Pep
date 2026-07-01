// Binary Search on ans

// https://www.spoj.com/problems/EKO/

//Bit Manipulation
// Swapping numbers without using third variable

#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    a = a +b;
    b = a - b;
    a = a - b;
    cout << a << " " << b << endl;
}

// Using XOR operator
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    cout << a << " " << b << endl;
}

// Bit Masking
