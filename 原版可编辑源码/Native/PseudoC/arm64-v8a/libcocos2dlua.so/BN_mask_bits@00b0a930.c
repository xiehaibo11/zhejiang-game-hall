
int BN_mask_bits(BIGNUM *a,int n)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  
  if (n < 0) {
    return 0;
  }
  uVar2 = (uint)n >> 6;
  if (a->top <= (int)uVar2) {
    return 0;
  }
  if ((n & 0x3fU) == 0) {
    a->top = uVar2;
    if (uVar2 == 0) goto LAB_00b0a9c0;
  }
  else {
    a->top = uVar2 + 1;
    a->d[uVar2] = a->d[uVar2] & (-1L << (n & 0x3fU) ^ 0xffffffffffffffffU);
    uVar2 = uVar2 + 1;
  }
  puVar4 = a->d + (int)uVar2;
  do {
    puVar4 = puVar4 + -1;
    uVar3 = uVar2;
    if (*puVar4 != 0) break;
    uVar3 = uVar2 - 1;
    bVar1 = 0 < (int)uVar2;
    uVar2 = uVar3;
  } while (uVar3 != 0 && bVar1);
                    /* try { // try from 00b0a9b0 to 00c0a9e3 has its CatchHandler @ 00b0aa20 */
  a->top = uVar3;
  if (uVar3 != 0) {
    return 1;
  }
LAB_00b0a9c0:
  a->neg = 0;
  return 1;
}

