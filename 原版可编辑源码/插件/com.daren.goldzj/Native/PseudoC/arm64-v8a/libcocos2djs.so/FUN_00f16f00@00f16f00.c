
ulong FUN_00f16f00(undefined8 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = *(int *)(param_1 + 2);
  if (iVar2 - param_2 == 0 || iVar2 < param_2) {
    uVar4 = (ulong)(uint)((*(int *)((long)param_1 + 0x14) - param_3) * 4);
  }
  else if (param_3 < *(int *)((long)param_1 + 0x14)) {
    uVar6 = *(uint *)(param_1[1] + (long)(param_2 + iVar2 * param_3) * 4);
    if (uVar6 < 0xfffffffc) {
      uVar4 = (ulong)(uVar6 & 0xfffffffc);
    }
    else {
      uVar4 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,param_2,param_3);
      if ((uVar4 & 1) == 0) {
        iVar2 = FUN_00f16f00(param_1,param_2 + 1,param_3);
        iVar3 = FUN_00f16f00(param_1,param_2,param_3 + 1);
        uVar6 = 1;
        if (iVar3 <= iVar2) {
          uVar6 = 2;
        }
        iVar1 = iVar3;
        if (iVar2 == iVar3 || iVar2 < iVar3) {
          iVar1 = iVar2;
        }
        uVar5 = 3;
        if (iVar2 != iVar3) {
          uVar5 = uVar6;
        }
        uVar4 = (ulong)(iVar1 + 4);
      }
      else {
        uVar4 = FUN_00f16f00(param_1,param_2 + 1,param_3 + 1);
        uVar5 = 0;
      }
      *(uint *)(param_1[1] + (long)(param_2 + *(int *)(param_1 + 2) * param_3) * 4) =
           (uint)uVar4 | uVar5;
    }
  }
  else {
    uVar4 = (ulong)(uint)((iVar2 - param_2) * 4);
  }
  return uVar4;
}

