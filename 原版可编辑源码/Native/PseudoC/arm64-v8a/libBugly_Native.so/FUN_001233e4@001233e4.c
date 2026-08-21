
undefined8
FUN_001233e4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_4 + 0x10);
  param_3[1] = *(undefined8 *)(param_4 + 0x18);
  *param_3 = uVar3;
  param_3[4] = *(undefined8 *)(param_4 + 0x20);
  iVar1 = *(int *)(param_4 + 0x28);
  *(int *)(param_3 + 6) = iVar1;
  if (iVar1 - 1U < 2) {
    uVar3 = _Uaarch64_dwarf_search_unwind_table(param_1,param_2,param_4,param_3);
    return uVar3;
  }
  if (iVar1 == 0) {
    uVar3 = *(undefined8 *)(param_4 + 0x38);
    param_3[2] = 0;
    param_3[3] = uVar3;
    uVar2 = *(uint *)(param_4 + 0x40);
    *(undefined4 *)((long)param_3 + 0x34) = 0;
    param_3[5] = (ulong)uVar2;
    if (param_5 != 0) {
      param_3[7] = param_4;
      return 0;
    }
    param_3[7] = 0;
    return 0;
  }
  return 0xfffffff8;
}

