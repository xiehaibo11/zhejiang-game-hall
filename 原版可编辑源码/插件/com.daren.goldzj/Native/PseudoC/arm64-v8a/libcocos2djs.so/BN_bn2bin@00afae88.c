
int BN_bn2bin(BIGNUM *a,uchar *to)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong *puVar6;
  
  if (a->top != 0) {
    puVar6 = a->d;
    iVar3 = a->top + -1;
    iVar5 = BN_num_bits_word(puVar6[iVar3]);
    uVar1 = iVar5 + (iVar3 * 0x40 | 7U);
    uVar2 = uVar1 + 7;
                    /* try { // try from 00afaecc to 00bfaf47 has its CatchHandler @ 00afaecc
                       catch() { ... } // from try @ 00afaecc with catch @ 00afaecc
                       catch() { ... } // from try @ 00afaf58 with catch @ 00afaecc */
    if (-1 < (int)uVar1) {
      uVar2 = uVar1;
    }
    if (0xe < uVar1 + 7) {
      iVar3 = (int)uVar2 >> 3;
      iVar4 = iVar3 + -1;
      iVar5 = iVar3 + 6;
      if (-1 < iVar4) {
        iVar5 = iVar4;
      }
      *to = (uchar)(puVar6[iVar5 >> 3] >> ((ulong)(uint)(iVar4 * 8) & 0x3f));
      if (iVar4 == 0) {
        return iVar3;
      }
      iVar5 = iVar3 + -2;
      do {
        to = to + 1;
        iVar4 = iVar5 + 7;
        if (-1 < iVar5) {
          iVar4 = iVar5;
        }
        uVar1 = iVar5 << 3;
        iVar5 = iVar5 + -1;
                    /* try { // try from 00afaf48 to 00bfaf57 has its CatchHandler @ 00afb184 */
        *to = (uchar)(a->d[iVar4 >> 3] >> ((ulong)uVar1 & 0x3f));
      } while (iVar5 != -1);
      return iVar3;
    }
  }
                    /* try { // try from 00afaf58 to 00bfb19f has its CatchHandler @ 00afaecc */
  return 0;
}

