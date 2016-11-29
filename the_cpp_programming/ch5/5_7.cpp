#include<iostream>
#include<string.h>
using namespace std;

struct month{
  string name;
  int daynum;
};
int main(int argc, char const *argv[]) {
  /* code */
  struct month list1[3] = {{"Jan", 31}, {"Feb", 28}, {"Mar", 31}};
  int daynum[3] = {31, 28, 31};
  string name[3] = {"Jan", "Feb", "Mar"};
  for (int i = 0; i < 3; i++)
  {
      cout << list1[i].name << " " << list1[i].daynum << endl;
      cout << name[i] << " " << daynum[i] << endl;
  }
  return 0;
}
