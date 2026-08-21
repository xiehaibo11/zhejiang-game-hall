
int BN_mul_word(BIGNUM *a,ulong w)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
                    /* catch() { ... } // from try @ 00affb8c with catch @ 00affc54 */
  if (a->top != 0) {
                    /* try { // try from 00affc68 to 00bffc97 has its CatchHandler @ 00affc68
                       catch() { ... } // from try @ 00affc68 with catch @ 00affc68
                       catch() { ... } // from try @ 00affcc8 with catch @ 00affc68 */
    if (w == 0) {
                    /* try { // try from 00affcb8 to 00bffcbb has its CatchHandler @ 00affd2c */
      BN_set_word(a,0);
    }
    else {
      uVar2 = bn_mul_words(a->d,a->d,a->top,w);
      if (uVar2 != 0) {
        lVar3 = bn_wexpand(a,a->top + 1);
        if (lVar3 == 0) {
          return 0;
        }
                    /* try { // try from 00affc98 to 00bffc9b has its CatchHandler @ 00affd4c */
        iVar1 = a->top;
        a->top = iVar1 + 1;
        a->d[iVar1] = uVar2;
      }
    }
  }
                    /* try { // try from 00affcc0 to 00bffcc7 has its CatchHandler @ 00affd08 */
                    /* try { // try from 00affcc8 to 00bffd63 has its CatchHandler @ 00affc68 */
  return 1;
}

