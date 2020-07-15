// integer & float get_smaller function + invoke with ints & floats & longs (ambiguous error)
#include <iostream>

int get_smaller(int a, int b) {
    return a < b ? a : b;
}

float get_smaller(float a, float b) {
    return a < b ? a : b;
}

int main() {
    int a{8};
    int b{18};
    std::cout << "The smaller of " << a
              << " & " << b << " is "
              << get_smaller(a, b) << '\n';

    float c{8.1};
    float d{8.8};
    std::cout << "The smaller of " << c
              << " & " << d << " is "
              << get_smaller(c, d) << '\n';

    long e{INT_MAX - 1};
    long f{INT_MAX - 2};
    std::cout << "The smaller of " << e
              << " & " << f << " is "
              << get_smaller(e, f) << '\n';
}

// error: call to 'get_smaller' is ambiguous
