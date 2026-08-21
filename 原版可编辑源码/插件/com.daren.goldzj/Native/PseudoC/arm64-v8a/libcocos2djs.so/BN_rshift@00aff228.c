
int BN_rshift(BIGNUM *r,BIGNUM *a,int n)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  int iVar4;
  long lVar5;
  ulong *puVar6;
  int iVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  int iVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  
  if (n < 0) {
    ERR_put_error(3,0x92,0x77,"crypto/bn/bn_shift.c",0x82);
    return 0;
  }
  uVar2 = (uint)n >> 6;
  if (((int)uVar2 < a->top) && (a->top != 0)) {
    iVar4 = BN_num_bits(a);
    iVar4 = (0x3f - n) + iVar4;
    iVar11 = iVar4 + 0x3f;
    if (-1 < iVar4) {
      iVar11 = iVar4;
    }
    if (r == a) {
      if (n == 0) {
        return 1;
      }
    }
    else {
      r->neg = a->neg;
      lVar5 = bn_wexpand(r,iVar11 >> 6);
      if (lVar5 == 0) {
        return 0;
      }
    }
    puVar10 = a->d;
    iVar4 = a->top;
    puVar6 = r->d;
    uVar1 = n & 0x3f;
    uVar12 = (ulong)uVar2;
    puVar9 = puVar10 + uVar2;
    iVar7 = iVar4 - uVar2;
    r->top = iVar11 >> 6;
    if (uVar1 == 0) {
      if (iVar7 != 0) {
        uVar2 = (iVar4 + -1) - uVar2;
        uVar8 = (ulong)uVar2 + 1;
        if (3 < uVar8) {
          uVar1 = uVar2 + 1 & 3;
          lVar5 = uVar8 - uVar1;
          if ((lVar5 != 0) &&
             ((puVar10 + uVar12 + uVar2 + 1 <= puVar6 || (puVar6 + (ulong)uVar2 + 1 <= puVar9)))) {
            iVar7 = iVar7 - (int)lVar5;
            puVar13 = puVar6 + 2;
            puVar9 = puVar9 + lVar5;
            puVar6 = puVar6 + lVar5;
            puVar10 = puVar10 + uVar12 + 2;
            do {
              puVar3 = puVar10 + -1;
              uVar12 = puVar10[-2];
              uVar14 = puVar10[1];
              uVar8 = *puVar10;
              lVar5 = lVar5 + -4;
              puVar10 = puVar10 + 4;
              puVar13[-1] = *puVar3;
              puVar13[-2] = uVar12;
              puVar13[1] = uVar14;
              *puVar13 = uVar8;
              puVar13 = puVar13 + 4;
            } while (lVar5 != 0);
            if (uVar1 == 0) {
              return 1;
            }
          }
        }
        do {
          iVar7 = iVar7 + -1;
          *puVar6 = *puVar9;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (iVar7 != 0);
      }
    }
    else {
      uVar8 = *puVar9 >> uVar1;
      if (iVar7 != 1) {
        puVar10 = puVar10 + uVar12;
        iVar11 = (uVar2 + 1) - iVar4;
        puVar9 = puVar6;
        do {
          puVar10 = puVar10 + 1;
          uVar12 = *puVar10;
          iVar11 = iVar11 + 1;
          *puVar9 = uVar12 << ((ulong)(0x40 - uVar1) & 0x3f) | uVar8;
          uVar8 = uVar12 >> uVar1;
          puVar9 = puVar9 + 1;
        } while (iVar11 != 0);
        puVar6 = puVar6 + (ulong)((iVar4 + -2) - uVar2) + 1;
      }
      if (uVar8 != 0) {
        *puVar6 = uVar8;
      }
    }
  }
  else {
    BN_set_word(r,0);
  }
  return 1;
}

