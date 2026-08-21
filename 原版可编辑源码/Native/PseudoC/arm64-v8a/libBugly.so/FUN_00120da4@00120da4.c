
undefined8
FUN_00120da4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4,int param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar2 = *(int *)(param_4 + 0x28);
  uVar4 = *(undefined8 *)(param_4 + 0x10);
  uVar3 = *(undefined8 *)(param_4 + 0x18);
  param_3[4] = *(undefined8 *)(param_4 + 0x20);
  *param_3 = uVar4;
  param_3[1] = uVar3;
  *(int *)(param_3 + 6) = iVar2;
  if (iVar2 == 0) {
    param_3[3] = *(undefined8 *)(param_4 + 0x38);
    lVar1 = param_4;
    if (param_5 == 0) {
      lVar1 = 0;
    }
    param_3[2] = 0;
    param_3[5] = (ulong)*(uint *)(param_4 + 0x40);
    param_3[7] = lVar1;
    *(undefined4 *)((long)param_3 + 0x34) = 0;
    return 0;
  }
  if ((-1 < iVar2) && (iVar2 < 3)) {
    uVar3 = _Uaarch64_dwarf_search_unwind_table(param_1,param_2,param_4,param_3);
    return uVar3;
  }
  return 0xfffffff8;
}

