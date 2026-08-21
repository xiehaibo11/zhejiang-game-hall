
undefined8 FUN_00da24e4(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ushort *puVar9;
  long lVar10;
  long lVar11;
  undefined8 local_68;
  undefined8 uStack_60;
  ulong local_58;
  int local_50;
  long local_48;
  
  lVar10 = *(long *)(param_1 + 0x270);
  if ((*(int *)(param_1 + 0x174) != 0) && (*(int *)(lVar10 + 0x40) == 0)) {
    lVar11 = *(long *)(param_1 + 0x268);
    iVar2 = *(int *)(lVar10 + 0x20);
    iVar5 = iVar2 + 7;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    *(int *)(lVar11 + 0x24) = *(int *)(lVar11 + 0x24) + (iVar5 >> 3);
    *(undefined4 *)(lVar10 + 0x20) = 0;
    uVar3 = (**(code **)(lVar11 + 0x10))(param_1);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    if (0 < *(int *)(param_1 + 0x1c0)) {
      lVar11 = 0;
      do {
        *(undefined4 *)(lVar10 + 0x2c + lVar11 * 4) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)(param_1 + 0x1c0));
    }
    *(undefined4 *)(lVar10 + 0x28) = 0;
    *(undefined4 *)(lVar10 + 0x40) = *(undefined4 *)(param_1 + 0x174);
    if (*(int *)(param_1 + 0x23c) == 0) {
      *(undefined4 *)(lVar10 + 0x3c) = 0;
    }
  }
  puVar8 = *(undefined8 **)(param_1 + 0x28);
  local_68 = *puVar8;
  uStack_60 = puVar8[1];
  uVar4 = *(ulong *)(lVar10 + 0x18);
  uVar6 = *(uint *)(lVar10 + 0x20);
  uVar7 = (ulong)uVar6;
  if (0 < *(int *)(param_1 + 0x1f0)) {
    uVar1 = *(uint *)(param_1 + 0x228);
    lVar11 = 0;
    local_48 = param_1;
    do {
      iVar5 = (int)uVar7;
      if (((int)uVar7 < 1) &&
         (uVar3 = FUN_00da3d1c(&local_68,uVar4,uVar7,1), uVar4 = local_58, iVar5 = local_50,
         (int)uVar3 == 0)) {
        return uVar3;
      }
      uVar6 = iVar5 - 1;
      uVar7 = (ulong)uVar6;
      if ((1L << (uVar7 & 0x3f) & uVar4) != 0) {
        puVar9 = *(ushort **)(param_2 + lVar11 * 8);
        *puVar9 = (ushort)(1 << (ulong)(uVar1 & 0x1f)) | *puVar9;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(param_1 + 0x1f0));
    puVar8 = *(undefined8 **)(param_1 + 0x28);
  }
  *puVar8 = local_68;
  puVar8[1] = uStack_60;
  *(ulong *)(lVar10 + 0x18) = uVar4;
  *(uint *)(lVar10 + 0x20) = uVar6;
  *(int *)(lVar10 + 0x40) = *(int *)(lVar10 + 0x40) + -1;
  return 1;
}

