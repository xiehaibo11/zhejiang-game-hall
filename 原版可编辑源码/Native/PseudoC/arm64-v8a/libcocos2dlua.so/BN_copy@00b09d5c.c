
BIGNUM * BN_copy(BIGNUM *a,BIGNUM *b)

{
  BIGNUM *pBVar1;
  uint words;
  uint uVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
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
  
  if (a == b) {
    return a;
  }
  words = b->top;
  if (a->dmax < (int)words) {
    pBVar1 = bn_expand2(a,words);
    if (pBVar1 == (BIGNUM *)0x0) {
      return (BIGNUM *)0x0;
    }
    words = b->top;
  }
  puVar4 = a->d;
  puVar6 = b->d;
  uVar2 = (int)words >> 2;
  if (0 < (int)uVar2) {
    uVar9 = 0xfffffffe;
    if (-2 < (int)~uVar2) {
      uVar9 = ~uVar2;
    }
    uVar12 = (ulong)(uVar2 + uVar9 + 1) + 1;
    puVar5 = puVar4;
    if (3 < uVar12) {
      uVar9 = uVar2 + uVar9 + 2 & 3;
      lVar10 = uVar12 - uVar9;
      if (lVar10 != 0) {
        uVar11 = 0xfffffffe;
        if (-2 < (int)~uVar2) {
          uVar11 = ~uVar2;
        }
        uVar12 = (ulong)(uVar2 + uVar11 + 1);
        if ((puVar6 + uVar12 * 4 + 4 <= puVar4) || (puVar4 + uVar12 * 4 + 4 <= puVar6)) {
          uVar2 = uVar2 - (int)lVar10;
          puVar8 = puVar6 + 8;
          puVar5 = puVar4 + lVar10 * 4;
          puVar6 = puVar6 + lVar10 * 4;
          puVar4 = puVar4 + 8;
          do {
            puVar7 = puVar8 + -8;
            uVar12 = *puVar8;
            uVar14 = puVar8[1];
            uVar16 = puVar8[2];
            uVar18 = puVar8[3];
            uVar13 = puVar8[4];
            uVar15 = puVar8[5];
            uVar17 = puVar8[6];
            uVar19 = puVar8[7];
            uVar21 = puVar8[-7];
            uVar23 = puVar8[-6];
            uVar25 = puVar8[-5];
            uVar20 = puVar8[-4];
            uVar22 = puVar8[-3];
            uVar24 = puVar8[-2];
            uVar26 = puVar8[-1];
            puVar8 = puVar8 + 0x10;
            lVar10 = lVar10 + -4;
            puVar4[-8] = *puVar7;
            puVar4[-7] = uVar21;
            puVar4[-6] = uVar23;
            puVar4[-5] = uVar25;
            puVar4[-4] = uVar20;
            puVar4[-3] = uVar22;
            puVar4[-2] = uVar24;
            puVar4[-1] = uVar26;
            *puVar4 = uVar12;
            puVar4[1] = uVar14;
            puVar4[2] = uVar16;
            puVar4[3] = uVar18;
            puVar4[4] = uVar13;
            puVar4[5] = uVar15;
            puVar4[6] = uVar17;
            puVar4[7] = uVar19;
            puVar4 = puVar4 + 0x10;
          } while (lVar10 != 0);
          puVar4 = puVar5;
          if (uVar9 == 0) goto LAB_00b09e84;
        }
      }
    }
    iVar3 = uVar2 + 1;
    puVar8 = puVar6;
    do {
      puVar6 = puVar8 + 4;
      uVar12 = *puVar8;
      uVar14 = puVar8[3];
      uVar13 = puVar8[2];
      iVar3 = iVar3 + -1;
      puVar4 = puVar5 + 4;
      puVar5[1] = puVar8[1];
      *puVar5 = uVar12;
      puVar5[3] = uVar14;
      puVar5[2] = uVar13;
      puVar5 = puVar4;
      puVar8 = puVar6;
    } while (1 < iVar3);
  }
LAB_00b09e84:
  uVar2 = words & 3;
  if (uVar2 != 0) {
    if (uVar2 != 1) {
      if (uVar2 != 2) {
        puVar4[2] = puVar6[2];
      }
      puVar4[1] = puVar6[1];
    }
    *puVar4 = *puVar6;
  }
  a->top = words;
  a->neg = b->neg;
  return a;
}

