
long * hash_table_new(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)thunk_EXT_FUN_00002bb0(0x38);
  if (plVar1 != (long *)0x0) {
    plVar1[2] = param_1;
    plVar1[3] = param_2;
    plVar1[5] = 0;
    plVar1[6] = 0;
    plVar1[4] = 0;
    *(undefined4 *)(plVar1 + 1) = 0xc1;
    lVar2 = thunk_EXT_FUN_00002bb0(0xc1,8);
    *plVar1 = lVar2;
    if (lVar2 == 0) {
      thunk_EXT_FUN_00002bb0(plVar1);
      plVar1 = (long *)0x0;
    }
  }
  return plVar1;
}

