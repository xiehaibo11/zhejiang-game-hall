
ulong BN_mod_word(BIGNUM *a,ulong w)

{
  bool bVar1;
  int iVar2;
  BIGNUM *a_00;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
                    /* try { // try from 00aff8c4 to 00bff8cf has its CatchHandler @ 00aff970 */
                    /* try { // try from 00aff8d0 to 00bff90b has its CatchHandler @ 00aff764 */
  if (w != 0) {
    if (w < 0x100000001) {
      if (0 < a->top) {
        uVar3 = 0;
        lVar4 = (long)a->top;
        do {
          uVar5 = a->d[lVar4 + -1];
          iVar2 = 0;
          if (w != 0) {
            iVar2 = (int)((uVar5 >> 0x20 | uVar3 << 0x20) / w);
          }
                    /* try { // try from 00aff954 to 00bff957 has its CatchHandler @ 00aff970 */
          uVar3 = uVar5 & 0xffffffff | (ulong)(uint)((int)(uVar5 >> 0x20) - iVar2 * (int)w) << 0x20;
                    /* try { // try from 00aff958 to 00bff98f has its CatchHandler @ 00aff764 */
          uVar5 = 0;
          if (w != 0) {
            uVar5 = uVar3 / w;
          }
                    /* catch() { ... } // from try @ 00aff81c with catch @ 00aff95c
                       catch() { ... } // from try @ 00aff90c with catch @ 00aff95c */
          uVar3 = uVar3 - uVar5 * w;
          bVar1 = 1 < lVar4;
          lVar4 = lVar4 + -1;
        } while (bVar1);
        return uVar3;
      }
      return 0;
    }
    a_00 = BN_dup(a);
    if (a_00 != (BIGNUM *)0x0) {
      uVar3 = BN_div_word(a_00,w);
                    /* try { // try from 00aff90c to 00bff913 has its CatchHandler @ 00aff95c */
      BN_free(a_00);
      return uVar3;
                    /* try { // try from 00aff914 to 00bff953 has its CatchHandler @ 00aff764 */
    }
  }
                    /* catch() { ... } // from try @ 00aff8c4 with catch @ 00aff970
                       catch() { ... } // from try @ 00aff954 with catch @ 00aff970 */
  return 0xffffffffffffffff;
}

