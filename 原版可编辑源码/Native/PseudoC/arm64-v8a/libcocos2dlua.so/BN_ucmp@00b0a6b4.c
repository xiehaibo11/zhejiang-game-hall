
int BN_ucmp(BIGNUM *a,BIGNUM *b)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = a->top - b->top;
  if (iVar1 != 0) {
    return iVar1;
  }
  lVar3 = (long)a->top;
  do {
    lVar2 = lVar3 + -1;
    if (lVar3 < 1) {
      return 0;
    }
    lVar3 = lVar2;
  } while (a->d[lVar2] == b->d[lVar2]);
  iVar1 = -1;
  if (b->d[lVar2] < a->d[lVar2]) {
    iVar1 = 1;
  }
  return iVar1;
}

