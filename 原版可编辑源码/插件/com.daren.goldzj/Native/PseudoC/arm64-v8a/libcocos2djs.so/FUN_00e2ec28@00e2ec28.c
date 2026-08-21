
undefined8 FUN_00e2ec28(long param_1,uint param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 local_38;
  
  lVar3 = *(long *)(param_1 + 0x4c0);
  if (lVar3 == 0) {
    uVar2 = FUN_00e2dd88(param_1,0);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    lVar3 = *(long *)(param_1 + 0x4c0);
    uVar1 = *(ushort *)(param_1 + 0x1a);
  }
  else {
    uVar2 = 6;
    uVar1 = *(ushort *)(param_1 + 0x1a);
  }
  if (uVar1 < param_2) {
    return uVar2;
  }
  if (param_2 != 0) {
    puVar5 = *(undefined4 **)(lVar3 + 0x18);
    lVar3 = *(long *)(puVar5 + 6);
    if (lVar3 != 0) {
      lVar3 = lVar3 + (ulong)param_2 * 0x10;
      uVar4 = *(undefined8 *)(param_1 + 0xb8);
      uVar2 = (**(code **)(*(long *)(param_1 + 0x370) + 0x120))
                        (param_1,*(undefined4 *)(lVar3 + -8),&local_38);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      FUN_00e139fc(uVar4,*(undefined8 *)(param_1 + 0x30));
      *(undefined8 *)(param_1 + 0x30) = local_38;
      uVar2 = FUN_00e2e848(param_1,*puVar5,*(undefined8 *)(lVar3 + -0x10));
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      goto LAB_00e2ecf0;
    }
  }
  uVar2 = FUN_00e2e848(param_1,0,0);
LAB_00e2ecf0:
  *(ulong *)(param_1 + 8) = (ulong)*(ushort *)(param_1 + 8) | (ulong)(param_2 << 0x10);
  *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) & 0xffffffffffff7fff;
  return uVar2;
}

