// integer & float get_smaller function + invoke with ints & floats
#include <iostream>

int get_smaller(int a, int b) {
    return a < b ? a : b;
}

float get_smaller(float a, float b) {
    return a < b ? a : b;
}

int main() {
    int a{320};
    int b{18};
    std::cout << "The smaller of " << a
              << " & " << b << " is "
              << get_smaller(a, b) << '\n';

    float c{8.1};
    float d{8.8};
    std::cout << "The smaller of " << c
              << " & " << d << " is "
              << get_smaller(c, d) << '\n';
}

// The smaller of 320 & 18 is 18
// The smaller of 8.1 & 8.8 is 8.1
