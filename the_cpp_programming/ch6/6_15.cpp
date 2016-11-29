#include<iostream>
using namespace std;

void send(int* to, int* from, int count)
{
    int n = (count + 7) / 8;
    switch (count % 8)
    {
    case 0: do { *to++ = *from++;
    case 7:      *to++ = *from++;
    case 6:      *to++ = *from++;
    case 5:      *to++ = *from++;
    case 4:      *to++ = *from++;
    case 3:      *to++ = *from++;
    case 2:      *to++ = *from++;
    case 1:      *to++ = *from++;
        } while(--n>0);
    }
}

int main(int argc, char const *argv[]) {
    int to[20];
    int from[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    send(to, from, 15);
    for (int i = 0; i < 20; i++)
        cout << to[i] << endl;
    return 0;
}
