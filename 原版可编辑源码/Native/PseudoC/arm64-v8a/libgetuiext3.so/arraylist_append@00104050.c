
undefined8 arraylist_append(long *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
    uVar5 = 0;
  }
  else {
    iVar2 = *(int *)((long)param_1 + 0xc);
    if (iVar1 < iVar2) {
      lVar4 = *param_1;
      iVar3 = iVar1;
    }
    else {
      lVar4 = thunk_EXT_FUN_00002bb0(*param_1,(long)iVar2 << 4);
      if (lVar4 == 0) {
        return 0;
      }
      iVar3 = (int)param_1[1];
      *param_1 = lVar4;
      *(int *)((long)param_1 + 0xc) = iVar2 << 1;
    }
    thunk_EXT_FUN_00002bb0
              (lVar4 + (long)(iVar1 + 1) * 8,lVar4 + (long)iVar1 * 8,
               -(ulong)((uint)(iVar3 - iVar1) >> 0x1f) & 0xfffffff800000000 |
               (ulong)(uint)(iVar3 - iVar1) << 3);
    uVar5 = 1;
    *(undefined8 *)(*param_1 + (long)iVar1 * 8) = param_2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  }
  return uVar5;
}

