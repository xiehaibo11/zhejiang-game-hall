
int BN_mul_word(BIGNUM *a,ulong w)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  if (a->top != 0) {
    if (w == 0) {
      BN_set_word(a,0);
    }
    else {
      uVar2 = bn_mul_words(a->d,a->d,a->top,w);
      if (uVar2 != 0) {
        lVar3 = bn_wexpand(a,a->top + 1);
        if (lVar3 == 0) {
          return 0;
        }
        iVar1 = a->top;
        a->top = iVar1 + 1;
        a->d[iVar1] = uVar2;
      }
    }
  }
  return 1;
}

