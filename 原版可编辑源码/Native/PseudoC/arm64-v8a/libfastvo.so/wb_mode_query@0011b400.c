
undefined8 wb_mode_query(long param_1,uint param_2,int *param_3)

{
  long lVar1;
  
  if (param_2 != 1) {
    if (param_2 == 0) {
      *param_3 = *(int *)(param_1 + 8) << 1;
      return 0;
    }
    fprintf((FILE *)0x14d168,"warning: %s %d\n","Unknown wb_mode_query request: ",(ulong)param_2);
    return 0xffffffff;
  }
  if (*param_3 == 0) {
    *param_3 = 4;
    return 0;
  }
  lVar1 = *(long *)(param_1 + (long)*param_3 * 8 + 0x20);
  if (lVar1 != 0) {
    *param_3 = *(int *)(lVar1 + 0x54);
    return 0;
  }
  *param_3 = -1;
  return 0;
}

