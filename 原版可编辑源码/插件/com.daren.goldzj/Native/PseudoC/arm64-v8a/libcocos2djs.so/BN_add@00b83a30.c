
int BN_add(BIGNUM *r,BIGNUM *a,BIGNUM *b)

{
  BIGNUM *pBVar1;
  int num;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  int iVar7;
  ulong uVar8;
  ulong *rp;
  long lVar9;
  ulong *puVar10;
  
  iVar2 = a->neg;
  if (iVar2 == b->neg) {
    pBVar1 = b;
    if (b->top <= a->top) {
      pBVar1 = a;
    }
    iVar3 = pBVar1->top;
    if (b->top <= a->top) {
      a = b;
    }
    num = a->top;
    lVar9 = (long)num;
    lVar4 = bn_wexpand(r,iVar3 + 1);
    if (lVar4 == 0) {
      iVar3 = 0;
    }
    else {
      r->top = iVar3;
      puVar10 = pBVar1->d;
      rp = r->d;
      uVar5 = bn_add_words(rp,puVar10,a->d,num);
      puVar6 = rp + lVar9;
      if (iVar3 != num) {
        iVar7 = num - iVar3;
        puVar10 = puVar10 + lVar9;
        do {
          uVar8 = *puVar10;
          iVar7 = iVar7 + 1;
          *puVar6 = uVar8 + uVar5;
          uVar5 = uVar5 & uVar8 + uVar5 == 0;
          puVar6 = puVar6 + 1;
          puVar10 = puVar10 + 1;
        } while (iVar7 != 0);
        puVar6 = rp + lVar9 + 1 + (ulong)(uint)((iVar3 + -1) - num);
      }
      *puVar6 = uVar5;
      r->neg = 0;
      iVar3 = 1;
      r->top = (int)uVar5 + r->top;
    }
    r->neg = iVar2;
  }
  else {
    pBVar1 = a;
    if (iVar2 != 0) {
      pBVar1 = b;
      b = a;
    }
    iVar2 = BN_ucmp(pBVar1,b);
    if (iVar2 < 0) {
      iVar2 = BN_usub(r,b,pBVar1);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = 1;
    }
    else {
      iVar3 = BN_usub(r,pBVar1,b);
      iVar2 = 0;
      if (iVar3 == 0) {
        return 0;
      }
    }
    r->neg = iVar2;
    iVar3 = 1;
  }
  return iVar3;
}

