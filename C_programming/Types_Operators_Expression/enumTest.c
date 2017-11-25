// enum (It gives an opportunity to invent own data type and define what values the variable of this data type can take)

#include <stdio.h>

enum month {

   JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};


int main() {
  enum month m1,m2,m3;
  m1 = MAR;
  m2 = JUL;
  m3 = NOV;

  printf("%d %d %d ",m1,m2,m3);
  return 0;

}
