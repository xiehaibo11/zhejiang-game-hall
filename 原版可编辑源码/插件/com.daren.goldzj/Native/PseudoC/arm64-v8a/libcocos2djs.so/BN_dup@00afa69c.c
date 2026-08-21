
BIGNUM * BN_dup(BIGNUM *a)

{
  BIGNUM *a_00;
  BIGNUM *pBVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  
  if (a == (BIGNUM *)0x0) {
    return (BIGNUM *)0x0;
  }
  uVar2 = a->flags;
  a_00 = (BIGNUM *)CRYPTO_zalloc(0x18,"crypto/bn/bn_lib.c",0xe3);
  if ((uVar2 >> 3 & 1) == 0) {
    if (a_00 == (BIGNUM *)0x0) goto LAB_00afa844;
    iVar3 = 1;
  }
  else {
    if (a_00 == (BIGNUM *)0x0) {
LAB_00afa844:
                    /* try { // try from 00afa85c to 00bfa8af has its CatchHandler @ 00afa72c */
      ERR_put_error(3,0x71,0x41,"crypto/bn/bn_lib.c",0xe4);
      return (BIGNUM *)0x0;
    }
    iVar3 = 9;
  }
  a_00->flags = iVar3;
  if (a_00 == a) {
    return a;
  }
  uVar2 = a->top;
  if (a_00->dmax < (int)uVar2) {
    pBVar1 = bn_expand2(a_00,uVar2);
    if (pBVar1 == (BIGNUM *)0x0) {
      if (((uint)a_00->flags >> 1 & 1) == 0) {
        if (((uint)a_00->flags >> 3 & 1) == 0) {
                    /* catch() { ... } // from try @ 00afa82c with catch @ 00afa894 */
          CRYPTO_free(a_00->d);
          uVar2 = a_00->flags;
          goto joined_r0x00afa8c4;
        }
        CRYPTO_secure_free(a_00->d,"crypto/bn/bn_lib.c",0xae);
      }
      uVar2 = a_00->flags;
joined_r0x00afa8c4:
      if ((uVar2 & 1) != 0) {
        CRYPTO_free(a_00);
        return (BIGNUM *)0x0;
      }
      a_00->flags = uVar2 | 0x8000;
      a_00->d = (ulong *)0x0;
      return (BIGNUM *)0x0;
    }
    uVar2 = a->top;
  }
  puVar5 = a_00->d;
  puVar7 = a->d;
  uVar4 = (int)uVar2 >> 2;
  if (0 < (int)uVar4) {
                    /* try { // try from 00afa72c to 00bfa82b has its CatchHandler @ 00afa72c
                       catch() { ... } // from try @ 00afa72c with catch @ 00afa72c
                       catch() { ... } // from try @ 00afa85c with catch @ 00afa72c */
    uVar10 = 0xfffffffe;
    if (-2 < (int)~uVar4) {
      uVar10 = ~uVar4;
    }
    uVar13 = (ulong)(uVar4 + uVar10 + 1) + 1;
    puVar6 = puVar5;
    if (3 < uVar13) {
      uVar10 = uVar4 + uVar10 + 2 & 3;
      lVar11 = uVar13 - uVar10;
      if (lVar11 != 0) {
        uVar12 = 0xfffffffe;
        if (-2 < (int)~uVar4) {
          uVar12 = ~uVar4;
        }
        uVar13 = (ulong)(uVar4 + uVar12 + 1);
        if ((puVar7 + uVar13 * 4 + 4 <= puVar5) || (puVar5 + uVar13 * 4 + 4 <= puVar7)) {
          uVar4 = uVar4 - (int)lVar11;
          puVar9 = puVar7 + 8;
          puVar6 = puVar5 + lVar11 * 4;
          puVar7 = puVar7 + lVar11 * 4;
          puVar5 = puVar5 + 8;
          do {
            puVar8 = puVar9 + -8;
            uVar13 = *puVar9;
            uVar15 = puVar9[1];
            uVar17 = puVar9[2];
            uVar19 = puVar9[3];
            uVar14 = puVar9[4];
            uVar16 = puVar9[5];
            uVar18 = puVar9[6];
            uVar20 = puVar9[7];
            uVar22 = puVar9[-7];
            uVar24 = puVar9[-6];
            uVar26 = puVar9[-5];
            uVar21 = puVar9[-4];
            uVar23 = puVar9[-3];
            uVar25 = puVar9[-2];
            uVar27 = puVar9[-1];
            puVar9 = puVar9 + 0x10;
            lVar11 = lVar11 + -4;
            puVar5[-8] = *puVar8;
            puVar5[-7] = uVar22;
            puVar5[-6] = uVar24;
            puVar5[-5] = uVar26;
            puVar5[-4] = uVar21;
            puVar5[-3] = uVar23;
            puVar5[-2] = uVar25;
            puVar5[-1] = uVar27;
            *puVar5 = uVar13;
            puVar5[1] = uVar15;
            puVar5[2] = uVar17;
            puVar5[3] = uVar19;
            puVar5[4] = uVar14;
            puVar5[5] = uVar16;
            puVar5[6] = uVar18;
            puVar5[7] = uVar20;
            puVar5 = puVar5 + 0x10;
          } while (lVar11 != 0);
          puVar5 = puVar6;
          if (uVar10 == 0) goto LAB_00afa800;
        }
      }
    }
    iVar3 = uVar4 + 1;
    puVar9 = puVar7;
    do {
      puVar7 = puVar9 + 4;
      uVar13 = *puVar9;
      uVar15 = puVar9[3];
      uVar14 = puVar9[2];
      iVar3 = iVar3 + -1;
      puVar5 = puVar6 + 4;
      puVar6[1] = puVar9[1];
      *puVar6 = uVar13;
      puVar6[3] = uVar15;
      puVar6[2] = uVar14;
      puVar6 = puVar5;
      puVar9 = puVar7;
    } while (1 < iVar3);
  }
LAB_00afa800:
  uVar4 = uVar2 & 3;
  if (uVar4 != 0) {
    if (uVar4 != 1) {
      if (uVar4 != 2) {
        puVar5[2] = puVar7[2];
      }
      puVar5[1] = puVar7[1];
    }
                    /* try { // try from 00afa82c to 00bfa85b has its CatchHandler @ 00afa894 */
    *puVar5 = *puVar7;
  }
  a_00->top = uVar2;
  a_00->neg = a->neg;
  return a_00;
}

