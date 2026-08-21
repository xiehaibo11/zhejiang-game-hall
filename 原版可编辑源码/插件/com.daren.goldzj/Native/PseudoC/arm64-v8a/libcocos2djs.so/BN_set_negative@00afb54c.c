
void BN_set_negative(BIGNUM *b,int n)

{
  if ((n != 0) && (b->top != 0)) {
    b->neg = 1;
    return;
  }
                    /* try { // try from 00afb564 to 00bfb56b has its CatchHandler @ 00afb95c */
  b->neg = 0;
                    /* try { // try from 00afb56c to 00bfb617 has its CatchHandler @ 00afb430 */
  return;
}

