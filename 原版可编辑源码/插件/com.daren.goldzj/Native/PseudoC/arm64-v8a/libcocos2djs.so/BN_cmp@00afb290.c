
int BN_cmp(BIGNUM *a,BIGNUM *b)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  
  if ((a != (BIGNUM *)0x0) && (b != (BIGNUM *)0x0)) {
    iVar3 = a->neg;
    iVar1 = -1;
    if (iVar3 == 0) {
      iVar1 = 1;
    }
    iVar5 = iVar1;
    if (iVar3 == b->neg) {
      iVar4 = a->top;
      lVar7 = (long)iVar4;
      iVar2 = 1;
      if (iVar3 == 0) {
        iVar2 = -1;
      }
      if ((iVar4 <= b->top) && (iVar5 = iVar2, b->top <= iVar4)) {
        do {
          lVar8 = lVar7 + -1;
          if (lVar7 < 1) {
            return 0;
          }
          iVar5 = iVar1;
        } while ((a->d[lVar8] <= b->d[lVar8]) &&
                (iVar5 = iVar2, lVar7 = lVar8, b->d[lVar8] <= a->d[lVar8]));
      }
    }
    return iVar5;
  }
  uVar6 = (uint)(b != (BIGNUM *)0x0);
  if (a != (BIGNUM *)0x0) {
    uVar6 = 0xffffffff;
  }
  return uVar6;
}

