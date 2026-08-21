
undefined8 arraylist_insert(long *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  
  if ((-1 < (int)param_2) && (iVar3 = (int)param_1[1], (int)param_2 <= iVar3)) {
    iVar1 = *(int *)((long)param_1 + 0xc);
    if (iVar3 < iVar1) {
      lVar2 = *param_1;
    }
    else {
      lVar2 = thunk_EXT_FUN_00002bb0(*param_1,(long)iVar1 << 4);
      if (lVar2 == 0) {
        return 0;
      }
      iVar3 = (int)param_1[1];
      *param_1 = lVar2;
      *(int *)((long)param_1 + 0xc) = iVar1 << 1;
    }
    uVar4 = -(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3;
    lVar2 = lVar2 + uVar4;
    thunk_EXT_FUN_00002bb0
              (lVar2 + 8,lVar2,
               -(ulong)(iVar3 - param_2 >> 0x1f) & 0xfffffff800000000 |
               (ulong)(iVar3 - param_2) << 3);
    *(undefined8 *)(*param_1 + uVar4) = param_3;
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    return 1;
  }
  return 0;
}

