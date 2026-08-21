
undefined8 arraylist_prepend(long *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  if ((int)uVar1 < 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = *(int *)((long)param_1 + 0xc);
    if ((int)uVar1 < iVar2) {
      lVar4 = *param_1;
    }
    else {
      lVar4 = thunk_EXT_FUN_00002bb0(*param_1,(long)iVar2 << 4);
      if (lVar4 == 0) {
        return 0;
      }
      uVar1 = *(uint *)(param_1 + 1);
      *param_1 = lVar4;
      *(int *)((long)param_1 + 0xc) = iVar2 << 1;
    }
    thunk_EXT_FUN_00002bb0
              (lVar4 + 8,lVar4,-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3);
    uVar3 = 1;
    *(undefined8 *)*param_1 = param_2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  }
  return uVar3;
}

