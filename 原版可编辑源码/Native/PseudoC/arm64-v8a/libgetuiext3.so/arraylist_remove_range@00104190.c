
void arraylist_remove_range(long *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if (-1 < (int)(param_3 | param_2)) {
    iVar1 = param_3 + param_2;
    uVar2 = (int)param_1[1] - iVar1;
    if (iVar1 <= (int)param_1[1]) {
      thunk_EXT_FUN_00002bb0
                (*param_1 + (long)(int)param_2 * 8,*param_1 + (long)iVar1 * 8,
                 -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3);
      *(uint *)(param_1 + 1) = (int)param_1[1] - param_3;
    }
  }
  return;
}

