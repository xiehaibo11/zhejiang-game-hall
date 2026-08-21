
int BN_lshift1(BIGNUM *r,BIGNUM *a)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (r == a) {
    lVar3 = bn_wexpand(r,r->top + 1);
    if (lVar3 == 0) {
      return 0;
    }
  }
  else {
    r->neg = a->neg;
    lVar3 = bn_wexpand(r,a->top + 1);
    if (lVar3 == 0) {
      return 0;
    }
    r->top = a->top;
  }
  iVar2 = a->top;
  if (0 < iVar2) {
    puVar4 = r->d;
    puVar5 = a->d;
    uVar6 = 0;
    lVar3 = 0;
    do {
      uVar7 = puVar5[lVar3];
      lVar1 = lVar3 + 1;
      puVar4[lVar3] = uVar6 | uVar7 << 1;
      uVar6 = -((long)uVar7 >> 0x3f);
      lVar3 = lVar1;
    } while ((int)lVar1 < iVar2);
    if (uVar6 != 0) {
      puVar4[lVar1] = 1;
      r->top = r->top + 1;
      return 1;
    }
  }
  return 1;
}

