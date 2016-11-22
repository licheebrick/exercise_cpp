#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    for (int i = int('a'); i <= int('z'); i++)
    {
        cout << hex << i << dec << ' ';
        cout << i << ":" << char(i) << '\n';
    }
    return 0;
}
