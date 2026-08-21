
int BN_add_word(BIGNUM *a,ulong w)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  if (w != 0) {
    iVar2 = BN_is_zero(a);
    if (iVar2 != 0) {
      iVar2 = BN_set_word(a,w);
      return iVar2;
    }
    if (a->neg != 0) {
      a->neg = 0;
      iVar2 = BN_sub_word(a,w);
      iVar3 = BN_is_zero(a);
      if (iVar3 == 0) {
        a->neg = (uint)(a->neg == 0);
        return iVar2;
      }
      return iVar2;
    }
    iVar2 = a->top;
    lVar4 = 0;
    do {
      if (iVar2 <= lVar4) {
        if (iVar2 != (int)lVar4) {
          return 1;
        }
        lVar4 = bn_wexpand(a,iVar2 + 1);
        if (lVar4 != 0) {
          a->top = a->top + 1;
          a->d[iVar2] = w;
          return 1;
        }
        return 0;
      }
      uVar5 = a->d[lVar4];
      bVar1 = CARRY8(uVar5,w);
      uVar5 = uVar5 + w;
      w = (ulong)bVar1;
      a->d[lVar4] = uVar5;
      lVar4 = lVar4 + 1;
    } while (bVar1);
  }
                    /* try { // try from 00affb3c to 00bffb8b has its CatchHandler @ 00affb3c
                       catch() { ... } // from try @ 00affb3c with catch @ 00affb3c
                       catch() { ... } // from try @ 00affc40 with catch @ 00affb3c */
  return 1;
}

