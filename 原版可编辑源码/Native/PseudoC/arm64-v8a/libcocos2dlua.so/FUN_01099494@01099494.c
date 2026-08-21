
short FUN_01099494(long param_1,int *param_2)

{
  ulong uVar1;
  long lVar2;
  short sVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  uVar6 = 0;
  if (uVar1 != 0) {
    uVar5 = (ulong)(*param_2 + 1);
    uVar7 = uVar1;
    do {
      uVar8 = uVar6 + uVar7 >> 1;
      uVar9 = *(ulong *)(lVar2 + uVar8 * 0x10);
      if (uVar9 == uVar5) goto LAB_010994ec;
      if (uVar9 < uVar5) {
        uVar6 = uVar8 + 1;
        uVar8 = uVar7;
      }
      uVar7 = uVar8;
    } while (uVar6 < uVar7);
  }
  if (uVar6 < uVar1) {
    uVar5 = *(ulong *)(lVar2 + uVar6 * 0x10);
    uVar8 = uVar6;
LAB_010994ec:
    sVar3 = *(short *)(lVar2 + uVar8 * 0x10 + 8) + 1;
  }
  else {
    sVar3 = 0;
    uVar5 = 0;
  }
  iVar4 = 0;
  if (uVar5 >> 0x20 == 0) {
    iVar4 = (int)uVar5;
  }
  *param_2 = iVar4;
  return sVar3;
}

