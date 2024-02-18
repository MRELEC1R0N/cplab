#include<iostream>
using namespace std;

void add(int a, int b, int c, int d) {
    int numerator = a * d + b * c;
    int denominator = b * d;
    cout << numerator << "/" << denominator;
}

void subtract(int a, int b, int c, int d) {
    int numerator = a * d - b * c;
    int denominator = b * d;
    cout << numerator << "/" << denominator;
}

void multiply(int a, int b, int c, int d) {
    int numerator = a * c;
    int denominator = b * d;
    cout << numerator << "/" << denominator;
}

void divide(int a, int b, int c, int d) {
    int numerator = a * d;
    int denominator = b * c;
    cout << numerator << "/" << denominator;
}



int main (){

    int a, b, c, d;
    char op;

    cout << "enter the value of a"<< endl;
    cin>>a;

    cout << "enter the value of b"<< endl;
    cin>>b;

    cout << "enter the value of c"<< endl;
    cin>>c;

    cout << "enter the value of d"<< endl;
    cin>>d;

    cout << "enter the value of op"<< endl;
   cin>>op;

    cout << endl << "Result: ";
    switch (op) {
    case '+':
        add(a, b, c, d);
        break;
    case '-':
        subtract(a, b, c, d);
        break;
    case '*':
        multiply(a, b, c, d);
        break;
    case '/':
        divide(a, b, c, d);
        break;
    default:
        cout << "Invalid operator";
    }
}
