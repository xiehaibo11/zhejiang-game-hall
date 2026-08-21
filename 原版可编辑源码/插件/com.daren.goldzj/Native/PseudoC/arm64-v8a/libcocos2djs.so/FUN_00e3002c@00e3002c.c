
undefined8 FUN_00e3002c(uint *param_1,uint param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  uVar5 = *param_1;
  if (uVar5 == 0) {
    uVar1 = 0x10000;
  }
  else if ((param_2 >> 0xe & 1) == 0) {
    uVar10 = 0;
    uVar1 = 0x10000;
    do {
      uVar4 = *(ulong *)(param_3 + uVar10 * 8);
      if (uVar4 != 0) {
        uVar2 = *(ulong *)(*(long *)(param_1 + 4) + uVar10 * 8);
        if (uVar2 == 0) {
          return 0;
        }
        if (uVar2 != uVar4) {
          if (((long)uVar2 < (long)(uVar4 & (long)uVar4 >> 0x3f)) ||
             ((long)(uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU)) < (long)uVar2)) {
            return 0;
          }
          uVar1 = FT_MulDiv(uVar1);
          uVar5 = *param_1;
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar5);
  }
  else {
    uVar10 = 0;
    uVar1 = 0x10000;
    do {
      lVar6 = *(long *)(param_3 + uVar10 * 8);
      if (lVar6 != 0) {
        lVar7 = *(long *)(*(long *)(param_1 + 4) + uVar10 * 8);
        if (lVar7 == 0) {
          return 0;
        }
        if (lVar7 != lVar6) {
          lVar8 = *(long *)(param_4 + uVar10 * 8);
          if (lVar7 - lVar8 == 0 || lVar7 < lVar8) {
            return 0;
          }
          lVar9 = *(long *)(param_5 + uVar10 * 8);
          lVar3 = lVar9 - lVar7;
          if (lVar3 == 0 || lVar9 < lVar7) {
            return 0;
          }
          if (lVar7 < lVar6) {
            lVar6 = lVar6 - lVar8;
            lVar3 = lVar7 - lVar8;
          }
          else {
            lVar6 = lVar9 - lVar6;
          }
          uVar1 = FT_MulDiv(uVar1,lVar3,lVar6);
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *param_1);
  }
  return uVar1;
}

