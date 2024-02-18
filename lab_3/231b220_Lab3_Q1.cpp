#include<iostream>
using namespace std;


void swap(int &x, int &y) {
    x = x + y ;
    y = x - y ;
    x = x - y ;
}




int main(){

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


}
