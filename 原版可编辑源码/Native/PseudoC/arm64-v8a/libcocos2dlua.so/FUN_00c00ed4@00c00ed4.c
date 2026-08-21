
void FUN_00c00ed4(long param_1,uint param_2,byte param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  if ((int)param_4 < 0) {
    iVar1 = (int)(param_4 - 8) / 9;
    uVar4 = (ulong)(iVar1 + 0x40);
    uVar2 = (uint)param_3 +
            *(int *)(&DAT_014100c0 + (long)(int)(param_4 + iVar1 * -9) * 4) * (uint)param_3 +
            *(int *)(param_1 + uVar4 * 4);
  }
  else {
    uVar4 = (ulong)param_4 / 9;
    uVar2 = (uint)param_3 +
            *(int *)(&DAT_014100c0 + (long)(int)(param_4 + (int)uVar4 * -9) * 4) * (uint)param_3 +
            *(int *)(param_1 + uVar4 * 4);
  }
  if (999999999 < uVar2) {
    uVar3 = (uint)uVar4;
    *(uint *)(param_1 + uVar4 * 4) = uVar2 + 0xc4653600;
    while( true ) {
      if (param_2 == uVar3) {
        *(undefined4 *)(param_1 + (ulong)(param_2 + 1 & 0x3f) * 4) = 1;
        return;
      }
      uVar3 = (int)uVar4 + 1U & 0x3f;
      uVar4 = (ulong)uVar3;
      iVar1 = *(int *)(param_1 + uVar4 * 4);
      uVar2 = iVar1 + 1;
      if (uVar2 < 1000000000) break;
      *(int *)(param_1 + (ulong)uVar3 * 4) = iVar1 + -999999999;
    }
  }
  *(uint *)(param_1 + uVar4 * 4) = uVar2;
  return;
}

