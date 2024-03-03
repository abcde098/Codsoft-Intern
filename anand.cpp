#include <iostream>
using namespace std;

float add(float x, float y) {
    return x + y;
}
float subtract(float x, float y) {
    return x - y;
}
float multiply(float x, float y) {
    return x * y;
}
float divide(float x, float y) {
    if (y != 0) {
        return x / y;
    } else {
        cout << "Error! Division by zero\n";
        return 0; 
    }
}

int main() {
    char operation;
    float m,n;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter two numbers: "<<endl;
    cin >>m>>n;

    switch(operation) {
        case '+':
            cout << "Result: " << add(m,n) << endl;
            break;
        case '-':
            cout << "Result: " << subtract(m,n) << endl;
            break;
        case '*':
            cout << "Result: " << multiply(m,n) << endl;
            break;
        case '/':
            cout << "Result: " << divide(m,n) << endl;
            break;
        default:
            cout << "Invalid operation" << endl;
    }

    return 0;
}
