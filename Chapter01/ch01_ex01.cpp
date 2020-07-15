// integer get_smaller function + invocation
#include <iostream>

int get_smaller(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int a{320};
    int b{18};
    std::cout << "The smaller of " << a
              << " & " << b << " is "
              << get_smaller(a, b) << '\n';
}

// The smaller of 320 & 18 is 18
