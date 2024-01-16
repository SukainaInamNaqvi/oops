#include <iostream>
using namespace std;
int main() {
	cout<<"\t Question 3\n";
	cout<<"Write a program in c++ to print Fibonacci series.\n";
    int n;
    
    // Input the number of terms you want in the Fibonacci series
    cout << "Enter the number of Fibonacci terms you want to generate: ";
    cin >> n;

    int first = 0, second = 1;

    cout << "Fibonacci Series up to " << n << " terms: ";

    // Print the first two terms of the Fibonacci series
    cout << first << " " << second << " ";

    for (int i = 2; i < n; i++) {
        int next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }

    cout << endl;

    return 0;
}

