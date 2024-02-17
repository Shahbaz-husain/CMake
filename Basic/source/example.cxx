#include <iostream>
#include <concepts>

using namespace std;

template <typename T>
requires integral<T>
void printInteger(T value) {
    cout << value << endl;
}

int main() {
    printInteger(42);
    //printInteger("Hello"); // Error: non-integral type
    return 0;
}
