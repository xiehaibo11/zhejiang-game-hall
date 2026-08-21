
void arraylist_remove(long *param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  
  if ((-1 < param_2) && (param_2 < (int)param_1[1])) {
    lVar1 = (long)param_2 + 1;
    uVar2 = (int)param_1[1] - (int)lVar1;
    thunk_EXT_FUN_00002bb0
              (*param_1 + (long)param_2 * 8,*param_1 + lVar1 * 8,
               -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3);
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  }
  return;
}

