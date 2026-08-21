
undefined8 FUN_01073e08(uint *param_1,uint param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  uVar3 = *param_1;
  if (uVar3 == 0) {
    uVar2 = 0x10000;
  }
  else if ((param_2 >> 0xe & 1) == 0) {
    uVar5 = 0;
    uVar2 = 0x10000;
    do {
      lVar6 = *(long *)(param_3 + (ulong)uVar5 * 8);
      if (lVar6 != 0) {
        lVar4 = *(long *)(*(long *)(param_1 + 2) + (ulong)uVar5 * 8);
                    /* try { // try from 01073e60 to 01173f5f has its CatchHandler @ 01073e60
                       catch() { ... } // from try @ 01073e60 with catch @ 01073e60
                       catch() { ... } // from try @ 01073f9c with catch @ 01073e60 */
        if (((lVar4 == 0) || ((0 < lVar6 && (lVar4 < 0)))) || ((lVar6 < 0 && (0 < lVar4)))) {
          return 0;
        }
        lVar6 = -lVar4;
        if (-1 < lVar4) {
          lVar6 = lVar4;
        }
        uVar2 = FT_MulFix(uVar2,lVar6);
        uVar3 = *param_1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  else {
    uVar5 = 0;
    uVar2 = 0x10000;
    do {
      lVar6 = *(long *)(param_3 + (ulong)uVar5 * 8);
      uVar9 = (ulong)uVar5;
      if (lVar6 != 0) {
        lVar4 = *(long *)(*(long *)(param_1 + 2) + uVar9 * 8);
        if (lVar4 == 0) {
          return 0;
        }
        if ((0 < lVar6) && (lVar4 < 0)) {
          return 0;
        }
        if ((lVar6 < 0) && (0 < lVar4)) {
          return 0;
        }
        lVar7 = *(long *)(param_4 + uVar9 * 8);
        if (lVar4 - lVar7 == 0 || lVar4 < lVar7) {
          return 0;
        }
        lVar8 = *(long *)(param_5 + uVar9 * 8);
        if (lVar8 - lVar4 == 0 || lVar8 < lVar4) {
          return 0;
        }
        lVar1 = lVar4 - lVar7;
        lVar7 = lVar6 - lVar7;
        if (lVar6 <= lVar4) {
          lVar1 = lVar8 - lVar4;
          lVar7 = lVar8 - lVar6;
        }
        uVar2 = FT_MulDiv(uVar2,lVar1,lVar7);
        uVar3 = *param_1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  return uVar2;
}

