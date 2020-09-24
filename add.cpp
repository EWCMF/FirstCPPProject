#include <iostream>
using namespace std;

int getInputFromUser(string message) {
    cout << message;
    int input{};
    cin >> input;
    return input;
}

int main() {
    int num1{ getInputFromUser("Enter a whole number: ") };
    int num2{ getInputFromUser("Enter another number: ") };

    cout << "The two numbers added equals: " << num1 + num2;

    return 0;
}