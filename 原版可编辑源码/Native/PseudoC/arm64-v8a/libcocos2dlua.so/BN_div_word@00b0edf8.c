
ulong BN_div_word(BIGNUM *a,ulong w)

{
  bool bVar1;
  uint n;
  long lVar2;
  int iVar3;
  ulong h;
  ulong uVar4;
  ulong *puVar5;
  ulong d;
  ulong l;
  long lVar6;
  
  if (w != 0) {
    if (a->top == 0) {
      return 0;
    }
    iVar3 = BN_num_bits_word(w);
    n = 0x40 - iVar3;
    iVar3 = BN_lshift(a,a,n);
    if (iVar3 != 0) {
      if (a->top < 1) {
        h = 0;
      }
      else {
        puVar5 = a->d;
        h = 0;
        d = w << ((ulong)n & 0x3f);
        lVar2 = (long)a->top;
        do {
          lVar6 = lVar2 + -1;
          l = puVar5[lVar6];
          uVar4 = bn_div_words(h,l,d);
          puVar5 = a->d;
          h = l - uVar4 * d;
          puVar5[lVar6] = uVar4;
          bVar1 = 1 < lVar2;
          lVar2 = lVar6;
        } while (bVar1);
        iVar3 = a->top + -1;
        if ((0 < a->top) && (a->d[iVar3] == 0)) {
          a->top = iVar3;
        }
      }
      return h >> ((ulong)n & 0x3f);
    }
  }
  return 0xffffffffffffffff;
}

