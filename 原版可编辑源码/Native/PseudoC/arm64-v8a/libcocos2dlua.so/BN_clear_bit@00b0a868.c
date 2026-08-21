
int BN_clear_bit(BIGNUM *a,int n)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong *puVar5;
  
  if (n < 0) {
    return 0;
  }
  iVar4 = a->top;
  uVar2 = (uint)n >> 6;
  if (iVar4 <= (int)uVar2) {
    return 0;
  }
  puVar5 = a->d;
                    /* try { // try from 00b0a890 to 00c0a8d3 has its CatchHandler @ 00b0a7dc */
  puVar5[uVar2] = puVar5[uVar2] & (1L << (n & 0x3fU) ^ 0xffffffffffffffffU);
  if (0 < iVar4) {
    puVar5 = puVar5 + iVar4;
    iVar3 = iVar4;
    do {
      puVar5 = puVar5 + -1;
      iVar4 = iVar3;
      if (*puVar5 != 0) break;
      iVar4 = iVar3 + -1;
                    /* catch() { ... } // from try @ 00b0a850 with catch @ 00b0a8c0 */
      bVar1 = 0 < iVar3;
      iVar3 = iVar4;
    } while (iVar4 != 0 && bVar1);
    a->top = iVar4;
  }
  if (iVar4 != 0) {
                    /* try { // try from 00b0a8d4 to 00c0a9af has its CatchHandler @ 00b0a8d4
                       catch() { ... } // from try @ 00b0a8d4 with catch @ 00b0a8d4
                       catch() { ... } // from try @ 00b0a9e4 with catch @ 00b0a8d4 */
    return 1;
  }
  a->neg = 0;
  return 1;
}

