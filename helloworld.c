#include <stdio.h>
 
int main()
{
  int a, b, c, ab, modac;
  char * name = "Bubba Gump";
  a = 9;
  b = 10;
  c = 19;
  ab = a + b;
  modac = c % a;
  printf("%d\t%d\n", ab, modac);
  name = "duh";
  printf("%s", name);
  return 0;
}