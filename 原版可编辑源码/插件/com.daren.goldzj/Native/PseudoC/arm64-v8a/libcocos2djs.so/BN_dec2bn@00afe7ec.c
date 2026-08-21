
int BN_dec2bn(BIGNUM **a,char *str)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  BIGNUM *pBVar6;
  BIGNUM *a_00;
  ulong w;
  int iVar7;
  long lVar8;
  ulong uVar9;
  
  if (str != (char *)0x0) {
    if (*str == '\0') {
      return 0;
    }
    bVar4 = *str == '-';
    if (bVar4) {
      str = str + 1;
    }
    iVar5 = 0x3f;
    lVar8 = 0;
    do {
                    /* try { // try from 00afe83c to 00bfe84b has its CatchHandler @ 00afe8ac */
      if (9 < (byte)str[lVar8] - 0x30) {
        iVar7 = (int)lVar8;
        if (iVar7 != 0) {
          if (a == (BIGNUM **)0x0) {
            return (uint)bVar4 + iVar7;
          }
          a_00 = *a;
          if (a_00 == (BIGNUM *)0x0) {
            a_00 = BN_new();
            if (a_00 == (BIGNUM *)0x0) {
              return 0;
            }
          }
          else {
            BN_set_word(a_00,0);
          }
          if (0x1ffffff0 < iVar7) goto LAB_00afe884;
          iVar2 = iVar5 + 0x3f;
          if (-1 < iVar5) {
            iVar2 = iVar5;
          }
                    /* catch() { ... } // from try @ 00afe7e8 with catch @ 00afe8e8 */
          if ((a_00->dmax < iVar2 >> 6) &&
             (pBVar6 = bn_expand2(a_00,iVar2 >> 6), pBVar6 == (BIGNUM *)0x0)) goto LAB_00afe884;
          if (iVar7 < 1) goto LAB_00afe988;
                    /* catch() { ... } // from try @ 00afe958 with catch @ 00afe910 */
          w = 0;
          uVar9 = lVar8 + 1;
          iVar5 = 0;
          if (iVar7 % 0x13 != 0) {
            iVar5 = 0x13 - iVar7 % 0x13;
          }
          goto LAB_00afe934;
        }
        break;
      }
                    /* try { // try from 00afe84c to 00bfe90f has its CatchHandler @ 00afe79c */
      iVar5 = iVar5 + 4;
      bVar1 = lVar8 < 0x1fffffff;
      lVar8 = lVar8 + 1;
    } while (bVar1);
    a_00 = (BIGNUM *)0x0;
LAB_00afe884:
    if (*a == (BIGNUM *)0x0) {
      BN_free(a_00);
    }
  }
  return 0;
LAB_00afe934:
  iVar5 = iVar5 + 1;
  w = ((ulong)(byte)*str + w * 10) - 0x30;
  if (iVar5 == 0x13) {
                    /* try { // try from 00afe954 to 00bfe957 has its CatchHandler @ 00afe984 */
                    /* try { // try from 00afe958 to 00bfe99f has its CatchHandler @ 00afe910 */
    iVar5 = BN_mul_word(a_00,10000000000000000000);
    if ((iVar5 == 0) || (iVar5 = BN_add_word(a_00,w), iVar5 == 0)) goto LAB_00afe884;
    w = 0;
    iVar5 = 0;
  }
  uVar3 = (int)uVar9 - 1;
  uVar9 = (ulong)uVar3;
                    /* catch() { ... } // from try @ 00afe954 with catch @ 00afe984 */
  str = str + 1;
  if ((int)uVar3 < 2) {
LAB_00afe988:
    bn_correct_top(a_00);
    *a = a_00;
    if (a_00->top != 0) {
      a_00->neg = (uint)bVar4;
    }
                    /* catch() { ... } // from try @ 00afe83c with catch @ 00afe8ac */
    return (uint)bVar4 + iVar7;
  }
  goto LAB_00afe934;
}

