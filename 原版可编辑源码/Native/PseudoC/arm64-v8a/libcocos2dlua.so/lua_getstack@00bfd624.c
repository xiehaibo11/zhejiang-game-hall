
undefined8 lua_getstack(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int local_4;
  
  lVar1 = FUN_00bfc824(param_1,param_2,&local_4);
  if (lVar1 != 0) {
    *(int *)(param_3 + 0x238) = (int)(lVar1 - *(long *)(param_1 + 0x38) >> 3) + local_4 * 0x10000;
    return 1;
  }
  *(int *)(param_3 + 0x238) = (int)param_2 - local_4;
  return 0;
}

