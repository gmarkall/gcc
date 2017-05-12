/* { dg-do compile }  */
/* { dg-options "-O2" }  */

struct b {
      short c;
      char bg;
};

struct bj {
  short bk;
  struct b bn[];
};

struct bj at;

int bu;
void a();

void f() {
  a(at.bn[bu]);
}

/* { dg-final { scan-assembler "add2 " } } */
