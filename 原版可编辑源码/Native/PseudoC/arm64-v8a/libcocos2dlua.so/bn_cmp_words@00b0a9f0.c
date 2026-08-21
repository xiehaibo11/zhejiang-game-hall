
undefined4 bn_cmp_words(long param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar4 = -(ulong)(param_3 - 1U >> 0x1f) & 0xfffffff800000000 | (ulong)(param_3 - 1U) << 3;
  uVar6 = *(ulong *)(param_1 + uVar4);
  uVar4 = *(ulong *)(param_2 + uVar4);
  bVar2 = uVar4 <= uVar6;
  bVar3 = false;
  if (uVar6 == uVar4) {
    if (param_3 < 2) {
      return 0;
    }
    lVar5 = (long)(param_3 + -2);
    while( true ) {
      uVar6 = *(ulong *)(param_1 + lVar5 * 8);
      uVar4 = *(ulong *)(param_2 + lVar5 * 8);
                    /* catch() { ... } // from try @ 00b0a9b0 with catch @ 00b0aa20 */
      bVar2 = uVar4 <= uVar6;
      bVar3 = uVar6 == uVar4;
      if (!bVar3) break;
      bVar3 = lVar5 < 1;
      lVar5 = lVar5 + -1;
      if (bVar3) {
                    /* try { // try from 00b0aa34 to 00c0ab0f has its CatchHandler @ 00b0aa34
                       catch() { ... } // from try @ 00b0aa34 with catch @ 00b0aa34
                       catch() { ... } // from try @ 00b0ab44 with catch @ 00b0aa34 */
        return 0;
      }
    }
  }
  uVar1 = 0xffffffff;
  if (bVar2 && !bVar3) {
    uVar1 = 1;
  }
  return uVar1;
}

