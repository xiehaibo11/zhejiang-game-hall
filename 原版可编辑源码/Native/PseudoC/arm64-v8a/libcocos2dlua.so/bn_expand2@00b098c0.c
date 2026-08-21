
BIGNUM * bn_expand2(BIGNUM *a,int words)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *ptr;
  int iVar5;
  int line;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong *puVar9;
  ulong *puVar10;
  uint uVar11;
  ulong *puVar12;
  long lVar13;
  ulong *puVar14;
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
  ulong uVar28;
  
  if (words <= a->dmax) {
    return a;
  }
  if (0x7fffff < words) {
    iVar5 = 0x72;
    line = 0xff;
LAB_00b09a50:
    ERR_put_error(3,0x78,iVar5,"crypto/bn/bn_lib.c",line);
    return (BIGNUM *)0x0;
  }
  if (((uint)a->flags >> 1 & 1) != 0) {
    iVar5 = 0x69;
    line = 0x103;
    goto LAB_00b09a50;
  }
  uVar3 = -(ulong)((uint)words >> 0x1f) & 0xfffffff800000000 | (ulong)(uint)words << 3;
  if (((uint)a->flags >> 3 & 1) == 0) {
    puVar4 = (ulong *)CRYPTO_zalloc(uVar3,"crypto/bn/bn_lib.c",0x109);
  }
  else {
    puVar4 = (ulong *)CRYPTO_secure_zalloc(uVar3,"crypto/bn/bn_lib.c",0x107);
  }
  if (puVar4 == (ulong *)0x0) {
    iVar5 = 0x41;
    line = 0x10b;
    goto LAB_00b09a50;
  }
  ptr = a->d;
  if (ptr == (ulong *)0x0) goto LAB_00b09b10;
  uVar1 = a->top;
  uVar11 = (int)uVar1 >> 2;
  puVar12 = ptr;
  puVar9 = puVar4;
  if (0 < (int)uVar11) {
    uVar6 = 0xfffffffe;
    if (-2 < (int)~uVar11) {
      uVar6 = ~uVar11;
    }
    uVar7 = (ulong)(uVar11 + uVar6 + 1);
    uVar3 = uVar7 + 1;
    if (uVar3 < 4) {
LAB_00b09a74:
      iVar5 = uVar11 + 1;
      puVar10 = puVar9;
      do {
        uVar3 = *puVar12;
        uVar16 = puVar12[3];
        uVar15 = puVar12[2];
        iVar5 = iVar5 + -1;
        puVar9 = puVar10 + 4;
        puVar10[1] = puVar12[1];
        *puVar10 = uVar3;
        puVar10[3] = uVar16;
        puVar10[2] = uVar15;
        puVar10 = puVar9;
        puVar12 = puVar12 + 4;
      } while (1 < iVar5);
    }
    else {
      uVar6 = uVar11 + uVar6 + 2 & 3;
      lVar13 = uVar3 - uVar6;
      if (lVar13 == 0) goto LAB_00b09a74;
      uVar8 = 0xfffffffe;
      if (-2 < (int)~uVar11) {
        uVar8 = ~uVar11;
      }
      uVar3 = (ulong)(uVar11 + uVar8 + 1);
      if ((puVar4 < ptr + uVar3 * 4 + 4) && (ptr < puVar4 + uVar3 * 4 + 4)) goto LAB_00b09a74;
      uVar11 = uVar11 - (int)lVar13;
      puVar12 = ptr + 8;
      puVar9 = puVar4 + lVar13 * 4;
      lVar2 = lVar13 * 4;
      puVar10 = puVar4 + 8;
      do {
        puVar14 = puVar12 + -8;
        uVar3 = *puVar12;
        uVar16 = puVar12[1];
        uVar18 = puVar12[2];
        uVar20 = puVar12[3];
        uVar15 = puVar12[4];
        uVar17 = puVar12[5];
        uVar19 = puVar12[6];
        uVar21 = puVar12[7];
        uVar23 = puVar12[-7];
        uVar25 = puVar12[-6];
        uVar27 = puVar12[-5];
        uVar22 = puVar12[-4];
        uVar24 = puVar12[-3];
        uVar26 = puVar12[-2];
        uVar28 = puVar12[-1];
        puVar12 = puVar12 + 0x10;
        lVar13 = lVar13 + -4;
        puVar10[-8] = *puVar14;
        puVar10[-7] = uVar23;
        puVar10[-6] = uVar25;
        puVar10[-5] = uVar27;
        puVar10[-4] = uVar22;
        puVar10[-3] = uVar24;
        puVar10[-2] = uVar26;
        puVar10[-1] = uVar28;
        *puVar10 = uVar3;
        puVar10[1] = uVar16;
        puVar10[2] = uVar18;
        puVar10[3] = uVar20;
        puVar10[4] = uVar15;
        puVar10[5] = uVar17;
        puVar10[6] = uVar19;
        puVar10[7] = uVar21;
        puVar10 = puVar10 + 0x10;
      } while (lVar13 != 0);
      puVar12 = ptr + lVar2;
      if (uVar6 != 0) goto LAB_00b09a74;
    }
    puVar12 = ptr + uVar7 * 4 + 4;
  }
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 3) != 1) {
      if ((uVar1 & 3) != 2) {
        puVar9[2] = puVar12[2];
      }
      puVar9[1] = puVar12[1];
    }
    *puVar9 = *puVar12;
  }
  if (ptr != (ulong *)0x0) {
    OPENSSL_cleanse(ptr,(long)a->dmax << 3);
    if (((byte)a->flags >> 3 & 1) == 0) {
      CRYPTO_free(a->d);
    }
    else {
      CRYPTO_secure_free(a->d,"crypto/bn/bn_lib.c",0xae);
    }
  }
LAB_00b09b10:
  a->d = puVar4;
  a->dmax = words;
  return a;
}

