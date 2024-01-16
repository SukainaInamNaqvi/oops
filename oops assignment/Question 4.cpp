#include <iostream>
using namespace std;
bool isPrime(int n) {
    // Handle special cases
    if (n <= 1) {
        return false;
    }
    // Check for divisibility from 2 to the square root of n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; // n is divisible by i, so it's not prime
        }
    }
    return true; // If no divisors were found, n is prime
}

int main() {
	cout<<"\t Question 4\n";
	cout<<"Write a program in c++ to check whether the number is prime or not \n";
    int num;
    // Input a number from the user
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }
    return 0;
}


