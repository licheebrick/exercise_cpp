#include<iostream>
using namespace std;

void exchange_pointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void exchange_ref(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main(int argc, char const *argv[]) {
    /* code */
    int a = 1;
    int b = 2;
    exchange_ref(a, b);
    cout << a << b << endl;
    exchange_pointer(&a, &b);
    cout << a << b << endl;
    return 0;
}
