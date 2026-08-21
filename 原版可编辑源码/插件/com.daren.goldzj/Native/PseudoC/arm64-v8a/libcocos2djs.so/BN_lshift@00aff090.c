
int BN_lshift(BIGNUM *r,BIGNUM *a,int n)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  long lVar5;
  ulong *__s;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  if (n < 0) {
                    /* catch() { ... } // from try @ 00aff128 with catch @ 00aff13c */
    ERR_put_error(3,0x91,0x77,"crypto/bn/bn_shift.c",0x5b);
    return 0;
  }
  uVar3 = (uint)n >> 6;
  r->neg = a->neg;
  lVar5 = bn_wexpand(r,uVar3 + 1 + a->top);
  if (lVar5 == 0) {
    return 0;
  }
  uVar2 = a->top;
  uVar7 = (ulong)(int)uVar2;
  __s = r->d;
  puVar6 = a->d;
  uVar1 = n & 0x3f;
  __s[(int)(uVar2 + uVar3)] = 0;
  if (uVar1 == 0) {
    if (0 < (int)uVar2) {
      uVar10 = uVar7;
      if ((3 < uVar2) && (uVar8 = uVar7 & 0xfffffffffffffffc, uVar8 != 0)) {
        if ((puVar6 + uVar7 <= __s + uVar3) || (__s + uVar7 + uVar3 <= puVar6)) {
          uVar10 = uVar7 - uVar8;
          puVar9 = __s + uVar7 + uVar3 + -2;
          puVar11 = puVar6 + uVar7 + -2;
          uVar12 = uVar8;
          do {
            puVar4 = puVar11 + -1;
            uVar15 = puVar11[-2];
            uVar14 = puVar11[1];
            uVar13 = *puVar11;
            uVar12 = uVar12 - 4;
            puVar11 = puVar11 + -4;
            puVar9[-1] = *puVar4;
            puVar9[-2] = uVar15;
            puVar9[1] = uVar14;
            *puVar9 = uVar13;
            puVar9 = puVar9 + -4;
          } while (uVar12 != 0);
          if (uVar8 == uVar7) goto LAB_00aff1f0;
        }
      }
      do {
        uVar7 = uVar10 - 1;
        __s[(ulong)uVar3 + (uVar10 - 1)] = puVar6[uVar10 - 1];
        uVar10 = uVar7;
      } while (0 < (long)uVar7);
    }
  }
  else if (0 < (int)uVar2) {
    puVar9 = __s + uVar7 + uVar3;
    do {
      uVar10 = puVar6[uVar7 - 1];
      uVar7 = uVar7 - 1;
                    /* try { // try from 00aff128 to 00bff137 has its CatchHandler @ 00aff13c */
      *puVar9 = *puVar9 | uVar10 >> ((ulong)(0x40 - uVar1) & 0x3f);
      puVar9[-1] = uVar10 << uVar1;
      puVar9 = puVar9 + -1;
    } while (0 < (long)uVar7);
  }
LAB_00aff1f0:
  memset(__s,0,(ulong)(uVar3 << 3));
  r->top = uVar3 + 1 + a->top;
  bn_correct_top(r);
  return 1;
}

