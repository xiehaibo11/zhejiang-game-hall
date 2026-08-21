
void FUN_0115f290(ulong *param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  
  uVar2 = param_1[2];
  uVar8 = param_1[3];
  if (uVar8 + 8 < uVar2) {
    *(int *)(param_1 + 4) = (int)param_1[4] + -0x20;
    uVar5 = *(uint *)(param_1[1] + uVar8);
    param_1[3] = uVar8 + 4;
    *param_1 = *param_1 >> 0x20 | (ulong)uVar5 << 0x20;
    return;
  }
  iVar9 = (int)param_1[4];
  if (iVar9 < 8) {
LAB_0115f32c:
    iVar4 = *(int *)((long)param_1 + 0x24);
    iVar7 = iVar9;
  }
  else {
    do {
      if (uVar2 <= uVar8) goto LAB_0115f32c;
      uVar3 = *param_1;
      iVar7 = iVar9 + -8;
      *param_1 = uVar3 >> 8;
      bVar6 = *(byte *)(param_1[1] + uVar8);
      uVar8 = uVar8 + 1;
      param_1[3] = uVar8;
      *(int *)(param_1 + 4) = iVar7;
      *param_1 = uVar3 >> 8 | (ulong)bVar6 << 0x38;
      bVar1 = 0xf < iVar9;
      iVar9 = iVar7;
    } while (bVar1);
    iVar4 = *(int *)((long)param_1 + 0x24);
  }
  if ((iVar4 == 0) && ((iVar7 < 0x41 || (uVar8 != uVar2)))) {
    return;
  }
  param_1[4] = 0x100000000;
  return;
}

