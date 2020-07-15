// int, float, & long get_smaller functions + invoke with ints & floats & longs
#include <iostream>

int get_smaller(int a, int b) {
    return a < b ? a : b;
}

float get_smaller(float a, float b) {
    return a < b ? a : b;
}

long get_smaller(long a, long b) {
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

    long e{INT_MAX - 1};
    long f{INT_MAX - 2};
    std::cout << "The smaller of " << e
              << " & " << f << " is "
              << get_smaller(e, f) << '\n';
}

// The smaller of 320 & 18 is 18
// The smaller of 8.1 & 8.8 is 8.1
// The smaller of 2147483646 & 2147483645 is 2147483645

