/* { dg-do compile }  */
/* { dg-options "-O2" }  */

struct b {
      char c;
      char bg;
};

struct bj {
  char bk;
  struct b bn[];
};

struct bj at;

int bu;
void a();

void f() {
  a(at.bn[bu]);
}

/* { dg-final { scan-assembler "add1 " } } */
