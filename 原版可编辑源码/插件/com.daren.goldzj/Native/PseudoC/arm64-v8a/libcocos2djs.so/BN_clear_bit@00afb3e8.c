
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
  puVar5[uVar2] = puVar5[uVar2] & (1L << (n & 0x3fU) ^ 0xffffffffffffffffU);
  if (0 < iVar4) {
    puVar5 = puVar5 + iVar4;
    iVar3 = iVar4;
                    /* try { // try from 00afb430 to 00bfb467 has its CatchHandler @ 00afb430
                       catch() { ... } // from try @ 00afb430 with catch @ 00afb430
                       catch() { ... } // from try @ 00afb56c with catch @ 00afb430
                       catch() { ... } // from try @ 00afb660 with catch @ 00afb430
                       catch() { ... } // from try @ 00afb734 with catch @ 00afb430
                       catch() { ... } // from try @ 00afb7f0 with catch @ 00afb430
                       catch() { ... } // from try @ 00afb92c with catch @ 00afb430 */
    do {
      puVar5 = puVar5 + -1;
      iVar4 = iVar3;
      if (*puVar5 != 0) break;
      iVar4 = iVar3 + -1;
      bVar1 = 0 < iVar3;
      iVar3 = iVar4;
    } while (iVar4 != 0 && bVar1);
    a->top = iVar4;
  }
  if (iVar4 != 0) {
    return 1;
  }
                    /* try { // try from 00afb468 to 00bfb473 has its CatchHandler @ 00afb964 */
  a->neg = 0;
  return 1;
}

