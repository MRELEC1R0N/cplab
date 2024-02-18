#include<iostream>
#include <string>

using namespace std;



void swap(int &x, int &y) {
    x = x + y ;
    y = x - y ;
    x = x - y ;
}



void minmax(int array[], int length, int& min, int& max) {
    min = array[0];
    max = array[0];
    for (int i = 1; i < length; i++) {
        if (array[i] < min) {
            min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        }
    }
}

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


int add(int a, int b, int c) {
    return a + b + c;
}

float add(float a, float b, float c) {
    return a + b + c;
}

double add(double a, double b, double c) {
    return a + b + c;
}

long double add(long double a, long double b, long double c) {
    return a + b + c;
}

void movie_info(string name, int minutes = 90) {
    cout << "Movie name: " << name << endl;
    cout << "Running time: " << minutes << " minutes" << endl;
}

int main() {

    /*
    // question 1
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << endl << "Before swapping: ";
    cout << "a= " << a << " and b= " << b;
    swap(a, b);
    cout << endl << "After swapping: ";
    cout << "a= " << a << " and b= " << b;
    */

    //question 2
    /*
    int arr[] = { 12, 1234, 45, 67, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int min, max;
    minmax(arr, n, min, max);
    cout << "Minimum element of array: " << min << endl;
    cout << "Maximum element of array: " << max;
    */

    //question 3
    /*
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
*/

    //question 4

    /*
    int a = 1, b = 2, c = 3;
    float d = 1.1, e = 2.2, f = 3.3;
    double g = 1.11, h = 2.22, i = 3.33;
    long double j = 1.111, k = 2.222, l = 3.333;

    cout << "Sum of three integers: " << add(a, b, c) << endl;
    cout << "Sum of three floats: " << add(d, e, f) << endl;
    cout << "Sum of three doubles: " << add(g, h, i) << endl;
    cout << "Sum of three long doubles: " << add(j, k, l) << endl;
    */

    //question 5
    /*
    string movie_name = "ANIMAL";
    int movie_time = 142;

    movie_info(movie_name);

    movie_info(movie_name, movie_time);
    */


    return 0;
}
