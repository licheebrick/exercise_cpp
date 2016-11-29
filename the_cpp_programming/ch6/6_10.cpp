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

char* strcpy_(const char* str1, char* str2)
{
    int len1 = strlen_(str1);
    str2 = new char[len1];
    for (int i = 0; i < len1; i++)
    {
        str2[i] = str1[i];
    }
    return str2;
}

bool strcmp_(const char* str1, const char* str2)
{
    while(*str1 != 0 && *str2 != 0)
    {
        if (*str1++ != *str2++)
            return false;
    }
    if (*str1 != *str2)
        return false;
    else
        return true;
}

int main(int argc, char const *argv[]) {
    string a = "";
    string b = "test";
    string c;

    cout << sizeof(a) << " " << sizeof(a[0]) << endl;
    // a is a pointer, so sizeof(a) is 8;
    cout << a[0] << endl;
    cout << b[0] << endl;

    const char* ca = "lalala";
    const char* cb = "dqq";
    cout << strlen_(ca) << endl;

    char* cc;
    cc = strcpy_(cb, cc);
    cout << cc << endl;
    delete[] cc;

    cout << strcmp_("asdf", "asdf") << endl;
    return 0;
}
