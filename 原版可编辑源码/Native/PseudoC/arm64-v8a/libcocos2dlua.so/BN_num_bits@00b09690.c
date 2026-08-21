
int BN_num_bits(BIGNUM *a)

{
  int iVar1;
  int iVar2;
  
  if (a->top != 0) {
    iVar1 = a->top + -1;
    iVar2 = BN_num_bits_word(a->d[iVar1]);
    return iVar2 + iVar1 * 0x40;
  }
  return 0;
}

