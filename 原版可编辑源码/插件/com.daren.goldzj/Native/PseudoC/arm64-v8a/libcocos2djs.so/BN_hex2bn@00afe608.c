
int BN_hex2bn(BIGNUM **a,char *str)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  BIGNUM *pBVar7;
  BIGNUM *a_00;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  ulong uVar14;
  char *pcVar15;
  
  if (str != (char *)0x0) {
    if (*str == '\0') {
      return 0;
    }
    bVar4 = *str == '-';
    if (bVar4) {
      str = str + 1;
    }
    iVar11 = -1;
    iVar12 = 0x3f;
    lVar8 = 0;
    do {
      iVar5 = isxdigit((uint)(byte)str[lVar8]);
      if (iVar5 == 0) {
        uVar9 = (uint)lVar8;
        if (uVar9 != 0) {
          iVar5 = bVar4 + uVar9;
          if (a == (BIGNUM **)0x0) {
            return iVar5;
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
          if ((int)uVar9 < 0x1ffffff1) {
            iVar2 = iVar12 + 0x3f;
            if (-1 < iVar12) {
              iVar2 = iVar12;
            }
            if ((iVar2 >> 6 <= a_00->dmax) ||
               (pBVar7 = bn_expand2(a_00,iVar2 >> 6), pBVar7 != (BIGNUM *)0x0)) {
              if ((int)uVar9 < 1) {
                iVar12 = 0;
              }
              else {
                pcVar15 = str + lVar8 + 1;
                if (iVar11 < -0x10) {
                  iVar11 = -0x11;
                }
                uVar3 = iVar11 + uVar9 + 0x10 >> 4;
                uVar14 = 0;
                uVar9 = ~uVar9;
                do {
                  uVar6 = uVar9;
                  if ((int)uVar9 < -0x10) {
                    uVar6 = 0xffffffef;
                  }
                  lVar8 = (long)(int)-uVar6;
                  uVar10 = 0;
                  pcVar13 = pcVar15 + -lVar8;
                  do {
                    lVar8 = lVar8 + -1;
                    uVar6 = OPENSSL_hexchar2int(*pcVar13);
                    uVar10 = (ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)) | uVar10 << 4;
                    pcVar13 = pcVar13 + 1;
                  } while (1 < lVar8);
                    /* try { // try from 00afe79c to 00bfe7e7 has its CatchHandler @ 00afe79c
                       catch() { ... } // from try @ 00afe79c with catch @ 00afe79c
                       catch() { ... } // from try @ 00afe84c with catch @ 00afe79c */
                  uVar9 = uVar9 + 0x10;
                  pcVar15 = pcVar15 + -0x10;
                  a_00->d[uVar14] = uVar10;
                  uVar14 = uVar14 + 1;
                } while (uVar14 != uVar3 + 1);
                iVar12 = uVar3 + 1;
              }
              a_00->top = iVar12;
              bn_correct_top(a_00);
              *a = a_00;
              if (a_00->top != 0) {
                a_00->neg = (uint)bVar4;
                return iVar5;
              }
              return iVar5;
            }
          }
          goto LAB_00afe6ac;
        }
        break;
      }
      iVar11 = iVar11 + -1;
      iVar12 = iVar12 + 4;
      bVar1 = lVar8 < 0x1fffffff;
      lVar8 = lVar8 + 1;
    } while (bVar1);
    a_00 = (BIGNUM *)0x0;
LAB_00afe6ac:
    if (*a == (BIGNUM *)0x0) {
      BN_free(a_00);
    }
  }
  return 0;
}

