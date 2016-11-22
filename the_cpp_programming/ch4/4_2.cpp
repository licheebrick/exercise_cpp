#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int a;
    long b;
    char c;
    float d;
    enum flag {REAL = 1, WRONG = 5, LAL = 2};
    cout << sizeof(a) << " " << sizeof(b) << " " << sizeof(c) << " " << sizeof(d) << " " << sizeof(flag) << endl;
    return 0;
}
