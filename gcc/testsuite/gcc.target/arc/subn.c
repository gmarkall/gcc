/* { dg-do compile }  */
/* { dg-options "-O2" }  */

int a;

double b1() {
  int c = a << 1;
  return 1 - c;
}

double b2() {
  int c = a << 2;
  return 1 - c;
}

double b3() {
  int c = a << 3;
  return 1 - c;
}

/* { dg-final { scan-assembler "sub1 " } } */
/* { dg-final { scan-assembler "sub2 " } } */
/* { dg-final { scan-assembler "sub3 " } } */
