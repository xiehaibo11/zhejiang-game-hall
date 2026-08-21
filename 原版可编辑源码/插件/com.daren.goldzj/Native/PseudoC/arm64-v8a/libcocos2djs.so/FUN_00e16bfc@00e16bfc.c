
undefined4 FUN_00e16bfc(long param_1,int *param_2,char param_3,ulong *param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  
  if ((*(byte *)(param_1 + 0x10) >> 1 & 1) == 0) {
    return 0x23;
  }
  if (*param_2 != 0) {
    return 7;
  }
  lVar6 = *(long *)(param_2 + 2);
  if (param_2[6] == 0) {
    uVar3 = param_2[7];
    lVar8 = *(long *)(param_2 + 4);
    lVar5 = lVar6;
  }
  else {
    lVar5 = (long)(lVar6 * (ulong)(uint)param_2[6] + 0x24) / 0x48;
    uVar3 = param_2[7];
    lVar8 = *(long *)(param_2 + 4);
  }
  lVar9 = lVar8;
  if (uVar3 != 0) {
    lVar9 = (long)(lVar8 * (ulong)uVar3 + 0x24) / 0x48;
  }
  lVar2 = lVar5;
  if (lVar8 != 0) {
    lVar2 = lVar9;
  }
  lVar8 = lVar2;
  if (lVar6 != 0) {
    lVar8 = lVar5;
  }
  if (lVar6 != 0) {
    lVar9 = lVar2;
  }
  uVar1 = lVar8 + 0x20U & 0xffffffffffffffc0;
  if ((uVar1 != 0) && (uVar7 = lVar9 + 0x20U & 0xffffffffffffffc0, uVar7 != 0)) {
    iVar4 = *(int *)(param_1 + 0x38);
    if (iVar4 < 1) {
      return 0x17;
    }
    if (param_3 == '\0') {
      uVar10 = 0;
      plVar11 = (long *)(*(long *)(param_1 + 0x40) + 0x18);
      do {
        if ((uVar7 == (*plVar11 + 0x20U & 0xffffffffffffffc0)) &&
           (uVar1 == (plVar11[-1] + 0x20U & 0xffffffffffffffc0))) goto LAB_00e16d6c;
        uVar10 = uVar10 + 1;
        plVar11 = plVar11 + 4;
      } while ((long)uVar10 < (long)iVar4);
    }
    else {
      uVar10 = 0;
      plVar11 = (long *)(*(long *)(param_1 + 0x40) + 0x18);
      do {
        if (uVar7 == (*plVar11 + 0x20U & 0xffffffffffffffc0)) {
LAB_00e16d6c:
          if (param_4 == (ulong *)0x0) {
            return 0;
          }
          *param_4 = uVar10 & 0xffffffff;
          return 0;
        }
        uVar10 = uVar10 + 1;
        plVar11 = plVar11 + 4;
      } while ((long)uVar10 < (long)iVar4);
    }
  }
  return 0x17;
}

