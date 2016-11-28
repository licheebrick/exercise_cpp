#include<iostream>

void f(char a)
{
  std::cout << a << '\n';
}

void g(char &a)
{
  std::cout << a << '\n';
}

void h(const char &a)
{
  std::cout << a << '\n';
}

int main(int argc, char const *argv[]) {
  /* code */
  f('a');
  //g('a'); //wrong: unmatched type: const char with char
  h('a');
  g(s);
  f(49);
  //g(49); //wrong: unmatched type: int with char;
  h(49);
  f(3300);  //Implicit conversion from int to const char;
  //g(3300); //wrong, unmatched type: int to char;
  h(3300);  //Implicit conversion from int to const char;
  char c = '1';
  f(c);
  g(c);
  h(c);
  unsigned char uc = '2';
  f(uc);
  //g(uc); //wrong: unmatched type: unsigned char with char;
  h(uc);
  return 0;
}
