#include <iostream>

using namespace std;

int main()
{
    int n, k;
    long long s = 0;
    cin >> n >> k;
    int* array = new int[n];
    int temp = k;
    for (int i = 0; i < n; ++i) {
        array[i] = temp;
        temp += 4;
    }

    for (int i = 1; i < n; ++i) {
        s += array[i];
    }

    cout << s;
    delete[] array;
}