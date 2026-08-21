
undefined4 bn_cmp_part_words(long param_1,long param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  
  iVar2 = param_3 + -1;
  if (param_4 < 0) {
    lVar6 = (long)param_4 + -1;
    plVar8 = (long *)(param_2 + ((long)iVar2 - (long)param_4) * 8);
    do {
      if (*plVar8 != 0) {
        return 0xffffffff;
      }
      lVar6 = lVar6 + 1;
      plVar8 = plVar8 + -1;
    } while (lVar6 < -1);
  }
  if (0 < param_4) {
    lVar6 = (long)param_4;
    do {
      if (*(long *)(param_1 + (long)iVar2 * 8 + lVar6 * 8) != 0) {
        return 1;
      }
      bVar4 = 1 < lVar6;
      lVar6 = lVar6 + -1;
    } while (bVar4);
  }
  uVar7 = *(ulong *)(param_1 + (long)iVar2 * 8);
  uVar5 = *(ulong *)(param_2 + (long)iVar2 * 8);
  bVar3 = uVar5 <= uVar7;
  bVar4 = false;
  if (uVar7 == uVar5) {
    if (param_3 < 2) {
                    /* try { // try from 00b0ab10 to 00c0ab43 has its CatchHandler @ 00b0ab80 */
      return 0;
    }
    lVar6 = (long)(param_3 + -2);
    while( true ) {
      uVar7 = *(ulong *)(param_1 + lVar6 * 8);
      uVar5 = *(ulong *)(param_2 + lVar6 * 8);
      bVar3 = uVar5 <= uVar7;
      bVar4 = uVar7 == uVar5;
      if (!bVar4) break;
      bVar4 = lVar6 < 1;
      lVar6 = lVar6 + -1;
      if (bVar4) {
        return 0;
      }
    }
  }
  uVar1 = 0xffffffff;
  if (bVar3 && !bVar4) {
    uVar1 = 1;
  }
  return uVar1;
}

