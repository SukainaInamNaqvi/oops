#include <iostream>
using namespace std;
class NumberChecker {
public:
    NumberChecker(int num) {
        number = num;
    }

    bool isEven() {
        return (number % 2 == 0);
    }

    bool isOdd() {
        return (number % 2 != 0);
    }

    bool isPrime() {
        if (number <= 1)
            return false;
        if (number <= 3)
            return true;
        if (number % 2 == 0 || number % 3 == 0)
            return false;
        
        for (int i = 5; i * i <= number; i += 6) {
            if (number % i == 0 || number % (i + 2) == 0)
                return false;
        }        
        return true;
    }
private:
    int number;
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    NumberChecker checker(num);

    if (checker.isEven()) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }

    if (checker.isPrime()) {
        cout << num << " is prime." << std::endl;
    } else {
        cout << num << " is not prime." << std::endl;
    }
    return 0;
}

