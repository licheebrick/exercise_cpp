#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[]) {
    char cr = 'A';
    char *pa = &cr; //到一个字符的指针

    int a[10] = {0,0,0,0,0,0,0};
    int (&b)[10] = a;  //到一个有10个整数的数组的引用
    cout << a << b << endl;

    string *(cx)[5];  //到字符串数组的指针
    char **cpp; //到字符的指针的指针

    const int i = 1;
    int j = 2;
    const int *ps = &i;
    int const *sp = &j;

    int (*p10)[10]; //到10个数的数组的指针
    int *p[10]; //10个指针
    return 0;
}
