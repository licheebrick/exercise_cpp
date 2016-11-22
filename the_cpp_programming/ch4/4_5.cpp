#include <limits>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    cout << "Largest float: " << numeric_limits<float>::max() << ", Char is signed == " << numeric_limits<char>::is_signed << ", smallest int: " << numeric_limits<int>::min() << endl;
    return 0;
}
