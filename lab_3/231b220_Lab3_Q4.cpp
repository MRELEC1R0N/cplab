#include <iostream>

using namespace std;

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


int main(){

    int a = 1, b = 2, c = 3;
    float d = 1.1, e = 2.2, f = 3.3;
    double g = 1.11, h = 2.22, i = 3.33;
    long double j = 1.111, k = 2.222, l = 3.333;

    cout << "Sum of three integers: " << add(a, b, c) << endl;
    cout << "Sum of three floats: " << add(d, e, f) << endl;
    cout << "Sum of three doubles: " << add(g, h, i) << endl;
    cout << "Sum of three long doubles: " << add(j, k, l) << endl;

}
