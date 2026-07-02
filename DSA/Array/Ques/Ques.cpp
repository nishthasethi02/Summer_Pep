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
// --builtin_popcount(x) - counts the number of set bits in x

// Create an array & print all the subsets of the array using bit masking
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    for(int  i = 0; i < (1 << n); i++){
        for(int j = 0; j < n; j++){
            if(i & (1 <<j)){
                cout << arr[j] << " ";
            }
        }
    }
}

