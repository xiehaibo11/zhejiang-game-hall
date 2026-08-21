
void FUN_00d89f6c(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  jcopy_sample_rows(param_3,0,param_4,0,*(undefined4 *)(param_1 + 0x164),
                    *(undefined4 *)(param_1 + 0x30));
  uVar4 = (ulong)*(uint *)(param_1 + 0x164);
  if (0 < (int)*(uint *)(param_1 + 0x164)) {
    uVar1 = *(uint *)(param_1 + 0x30);
    iVar2 = *(int *)(param_2 + 0x24) * *(int *)(param_2 + 0x1c);
    if (0 < (int)(iVar2 - uVar1)) {
      iVar3 = (uVar1 - 1) - iVar2;
      if (iVar3 < -1) {
        iVar3 = -2;
      }
      do {
        memset((void *)(*param_4 + (ulong)uVar1),
               (uint)*(byte *)((long)(*param_4 + (ulong)uVar1) + -1),
               (ulong)((1 - uVar1) + iVar2 + iVar3) + 1);
        uVar4 = uVar4 - 1;
        param_4 = param_4 + 1;
      } while (uVar4 != 0);
    }
  }
  return;
}

