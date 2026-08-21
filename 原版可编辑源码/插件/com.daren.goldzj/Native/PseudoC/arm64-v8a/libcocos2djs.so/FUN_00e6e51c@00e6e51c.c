
undefined8
FUN_00e6e51c(uint *param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
            long param_7)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  
  uVar11 = param_5 - param_3;
  if ((long)uVar11 < 1) {
    return 0;
  }
  if (param_6 <= param_5) {
    if (param_7 < param_3) {
      return 0;
    }
    param_4 = param_4 - param_2;
    if (param_6 - param_3 == 0 || param_6 < param_3) {
      uVar7 = (ulong)*param_1;
      iVar14 = (int)(param_3 >> (uVar7 & 0x3f));
      uVar6 = param_1[1] - 1 & (uint)param_3;
    }
    else {
      lVar3 = FT_MulDiv(param_4,param_6 - param_3,uVar11);
      uVar7 = (ulong)*param_1;
      uVar6 = 0;
      param_2 = lVar3 + param_2;
      iVar14 = (int)(param_6 >> (uVar7 & 0x3f));
    }
    if (param_7 < param_5) {
      uVar15 = 0;
      iVar12 = (int)(param_7 >> (uVar7 & 0x3f));
    }
    else {
      uVar15 = param_1[1] - 1 & (uint)param_5;
      iVar12 = (int)(param_5 >> (uVar7 & 0x3f));
    }
    if ((int)uVar6 < 1) {
      if (*(char *)((long)param_1 + 0x7b) != '\0') {
        *(undefined1 *)((long)param_1 + 0x7b) = 0;
        *(long *)(param_1 + 0xc) = *(long *)(param_1 + 0xc) + -8;
      }
    }
    else {
      if (iVar14 == iVar12) {
        return 0;
      }
      lVar3 = FT_MulDiv(param_4,(long)(int)param_1[1] - (long)(int)uVar6,uVar11);
      param_2 = lVar3 + param_2;
      iVar14 = iVar14 + 1;
    }
    *(bool *)((long)param_1 + 0x7b) = uVar15 == 0;
    if (*(char *)((long)param_1 + 0x7a) != '\0') {
      *(long *)(*(long *)(param_1 + 0x20) + 0x28) = (long)iVar14;
      *(undefined1 *)((long)param_1 + 0x7a) = 0;
    }
    iVar13 = (iVar12 - iVar14) + 1;
    if ((ulong)(*(long *)(param_1 + 0xc) + (long)iVar13 * 8) < *(ulong *)(param_1 + 10)) {
      if (param_4 < 1) {
        lVar3 = -param_4;
        lVar4 = FUN_00e12c3c((long)(int)param_1[1],lVar3,uVar11);
        param_4 = (long)(int)param_1[1];
        lVar4 = -lVar4;
        uVar7 = 0xffffffffffffffff;
        plVar8 = *(long **)(param_1 + 0xc);
      }
      else {
        lVar4 = FUN_00e12c3c((long)(int)param_1[1],param_4,uVar11);
        lVar3 = (long)(int)param_1[1];
        uVar7 = 1;
        plVar8 = *(long **)(param_1 + 0xc);
      }
      if (-1 < iVar12 - iVar14) {
        lVar2 = 0;
        if (uVar11 != 0) {
          lVar2 = (param_4 * lVar3) / (long)uVar11;
        }
        lVar10 = -uVar11;
        plVar9 = plVar8;
        do {
          lVar10 = lVar10 + (param_4 * lVar3 - lVar2 * uVar11);
          iVar13 = iVar13 + -1;
          uVar1 = lVar10 >> 0x3f;
          plVar8 = plVar9 + 1;
          *plVar9 = param_2;
          param_2 = param_2 + lVar4 + (uVar7 & (uVar1 ^ 0xffffffffffffffff));
          lVar10 = lVar10 - (uVar11 & (uVar1 ^ 0xffffffffffffffff));
          plVar9 = plVar8;
        } while (0 < iVar13);
      }
      uVar5 = 0;
      *(long **)(param_1 + 0xc) = plVar8;
    }
    else {
      param_1[0xe] = 0x62;
      uVar5 = 1;
    }
    return uVar5;
  }
  return 0;
}

