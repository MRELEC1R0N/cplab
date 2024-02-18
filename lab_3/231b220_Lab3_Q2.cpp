#include<iostream>


using namespace std;

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

int main(){

    int arr[] = { 12, 1234, 45, 67, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int min, max;
    minmax(arr, n, min, max);
    cout << "Minimum element of array: " << min << endl;
    cout << "Maximum element of array: " << max;

}
