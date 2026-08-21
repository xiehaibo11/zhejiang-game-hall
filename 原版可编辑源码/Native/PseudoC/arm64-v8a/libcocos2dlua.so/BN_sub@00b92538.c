
int BN_sub(BIGNUM *r,BIGNUM *a,BIGNUM *b)

{
  BIGNUM *pBVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  int iVar7;
  ulong uVar8;
  ulong *rp;
  BIGNUM *pBVar9;
  long lVar10;
  BIGNUM *a_00;
  ulong *puVar11;
  uint uVar12;
  
  iVar2 = b->neg;
  if (a->neg == 0) {
    pBVar9 = b;
    a_00 = a;
    if (iVar2 == 0) goto LAB_00b92630;
    uVar12 = 0;
  }
  else {
    uVar12 = (uint)(iVar2 == 0);
    pBVar9 = a;
    a_00 = b;
    if (iVar2 != 0) {
LAB_00b92630:
      pBVar1 = a_00;
      if (a_00->top <= pBVar9->top) {
        pBVar1 = pBVar9;
      }
      lVar5 = bn_wexpand(r,pBVar1->top);
      if (lVar5 != 0) {
        iVar2 = BN_ucmp(a_00,pBVar9);
        if (iVar2 < 0) {
          iVar2 = BN_usub(r,pBVar9,a_00);
          if (iVar2 == 0) {
            return 0;
          }
          iVar2 = 1;
        }
        else {
          iVar3 = BN_usub(r,a_00,pBVar9);
          iVar2 = 0;
          if (iVar3 == 0) {
            return 0;
          }
        }
        r->neg = iVar2;
        return 1;
      }
      return 0;
    }
  }
  pBVar9 = b;
  if (b->top <= a->top) {
    pBVar9 = a;
    a = b;
  }
  iVar2 = pBVar9->top;
  iVar3 = a->top;
  lVar10 = (long)iVar3;
  lVar5 = bn_wexpand(r,iVar2 + 1);
  if (lVar5 != 0) {
    r->top = iVar2;
    puVar11 = pBVar9->d;
    rp = r->d;
    uVar4 = bn_add_words(rp,puVar11,a->d,iVar3);
    puVar6 = rp + lVar10;
    if (iVar2 != iVar3) {
      iVar7 = iVar3 - iVar2;
      puVar11 = puVar11 + lVar10;
      do {
        uVar8 = *puVar11;
        iVar7 = iVar7 + 1;
        *puVar6 = uVar8 + uVar4;
        uVar4 = uVar4 & uVar8 + uVar4 == 0;
        puVar6 = puVar6 + 1;
        puVar11 = puVar11 + 1;
      } while (iVar7 != 0);
      puVar6 = rp + lVar10 + 1 + (ulong)(uint)((iVar2 + -1) - iVar3);
    }
    *puVar6 = uVar4;
    r->neg = uVar12;
    r->top = (int)uVar4 + r->top;
    return 1;
  }
  return 0;
}

