/* { dg-do compile } */
/* { dg-options "-fPIC" } */

void
fn1 (void)
{
  static long long a = 0;
  static int b = 0;
  static short c = 0;
  static signed char d = 0;
  a += 2;
  b += 2;
  c += 2;
  d += 2;
}
