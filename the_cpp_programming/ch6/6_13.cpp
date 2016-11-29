#include<iostream>
#include<string>
using namespace std;

int strlen_(const char* p)
{
    int len = 0;
    while(*p++ != 0)
    {
        len++;
    }
    return len;
}

char* cat(const char* str1, char* str2)
{
    int len1 = strlen_(str1);
    int len2 = strlen_(str2);
    char* str3 = new char[len1 + len2];
    char* strori = str3;
    while (*str1 != 0)
        *str3++ = *str1++;
    while (*str2 != 0)
        *str3++ = *str2++;
    return strori;
}

int main(int argc, char const *argv[]) {
    char* pp;
    pp = cat("cat", "pig");
    cout << pp << endl;
    delete[] pp;
    return 0;
}
