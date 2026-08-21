
void BN_set_negative(BIGNUM *b,int n)

{
  if ((n != 0) && (b->top != 0)) {
    b->neg = 1;
    return;
  }
                    /* try { // try from 00b0a9e4 to 00c0aa33 has its CatchHandler @ 00b0a8d4 */
  b->neg = 0;
  return;
}

