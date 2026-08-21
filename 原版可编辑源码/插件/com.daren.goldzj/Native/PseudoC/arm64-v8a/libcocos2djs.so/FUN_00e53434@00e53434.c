
short FUN_00e53434(long param_1,uint *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  short sVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar8 = *(ulong *)(param_1 + 0x18);
  lVar4 = *(long *)(param_1 + 0x20);
  uVar9 = 0;
  if (uVar8 != 0) {
    uVar11 = uVar8 >> 1;
    uVar7 = (ulong)(*param_2 + 1);
    uVar10 = uVar8;
    do {
      uVar2 = uVar10 + uVar9 >> 1;
      if (uVar9 <= uVar11 && uVar11 <= uVar10) {
        uVar2 = uVar11;
      }
      uVar11 = *(ulong *)(lVar4 + uVar2 * 0x10);
      if (uVar11 == uVar7) {
        sVar5 = *(short *)(lVar4 + uVar2 * 0x10 + 8);
        *param_2 = *param_2 + 1;
        return sVar5 + 1;
      }
      uVar3 = uVar2;
      if (uVar11 < uVar7) {
        uVar9 = uVar2 + 1;
        uVar3 = uVar10;
      }
      uVar11 = (uVar2 + uVar7) - uVar11;
      uVar10 = uVar3;
    } while (uVar9 < uVar3);
  }
  if (uVar8 <= uVar9) {
    *param_2 = 0;
    return 0;
  }
  puVar1 = (ulong *)(lVar4 + uVar9 * 0x10);
  uVar9 = puVar1[1];
  uVar8 = *puVar1;
  uVar6 = 0;
  if (uVar8 >> 0x20 == 0) {
    uVar6 = (uint)uVar8;
  }
  *param_2 = uVar6;
  return (short)uVar9 + 1;
}

