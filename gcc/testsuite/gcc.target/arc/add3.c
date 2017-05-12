/* { dg-do compile }  */
/* { dg-options "-O2" }  */

struct b {
      int c;
      char bg;
};

struct bj {
  int bk;
  struct b bn[];
};

struct bj at;

int bu;
void a();

void f() {
  a(at.bn[bu]);
}

/* { dg-final { scan-assembler "add3 " } } */
