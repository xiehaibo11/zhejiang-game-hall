
long FUN_011a1a9c(long param_1,uint param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  if (param_2 != 0) {
    uVar6 = (ulong)param_2;
    if (param_2 < 5) {
      lVar8 = 0;
      lVar4 = 0;
    }
    else {
      uVar1 = 4;
      if ((param_2 & 3) != 0) {
        uVar1 = uVar6 & 3;
      }
      lVar8 = uVar6 - uVar1;
      plVar5 = (long *)(param_1 + 0x28);
      lVar7 = 0;
      lVar10 = 0;
      lVar11 = 0;
      lVar12 = 0;
      lVar4 = lVar8;
      do {
        plVar9 = plVar5 + -4;
        lVar13 = *plVar5;
        plVar2 = plVar5 + 2;
        plVar3 = plVar5 + -2;
        lVar4 = lVar4 + -4;
        plVar5 = plVar5 + 8;
        lVar11 = lVar13 + lVar11;
        lVar12 = *plVar2 + lVar12;
        lVar7 = *plVar9 + lVar7;
        lVar10 = *plVar3 + lVar10;
      } while (lVar4 != 0);
      lVar4 = lVar11 + lVar7 + lVar12 + lVar10;
    }
    lVar7 = uVar6 - lVar8;
    plVar5 = (long *)(param_1 + lVar8 * 0x10 + 8);
    do {
      lVar7 = lVar7 + -1;
      lVar4 = *plVar5 + lVar4;
      plVar5 = plVar5 + 2;
    } while (lVar7 != 0);
    return lVar4;
  }
  return 0;
}

