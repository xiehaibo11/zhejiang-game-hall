
int BN_rshift1(BIGNUM *r,BIGNUM *a)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  
  iVar2 = BN_is_zero(a);
  if (iVar2 == 0) {
    iVar2 = a->top;
    puVar7 = a->d;
    lVar8 = (long)iVar2 + -1;
    uVar4 = puVar7[lVar8];
    iVar1 = iVar2 - (uint)(uVar4 == 1);
    if (a != r) {
      lVar3 = bn_wexpand(r,iVar1);
      if (lVar3 == 0) {
        return 0;
      }
      r->neg = a->neg;
      uVar4 = puVar7[lVar8];
    }
    puVar5 = r->d;
    if (uVar4 >> 1 != 0) {
      puVar5[lVar8] = uVar4 >> 1;
    }
    if (1 < iVar2) {
      lVar8 = (long)iVar2 + -2;
      do {
        uVar6 = puVar7[lVar8];
        lVar3 = lVar8 + 1;
        puVar5[lVar8] = uVar6 >> 1 | uVar4 << 0x3f;
        uVar4 = uVar6;
        lVar8 = lVar8 + -1;
      } while (1 < lVar3);
    }
    r->top = iVar1;
  }
  else {
    BN_set_word(r,0);
  }
  return 1;
}

