
undefined8 nb_mode_query(int *param_1,uint param_2,int *param_3)

{
  if (param_2 != 1) {
    if (param_2 == 0) {
      *param_3 = *param_1;
      return 0;
    }
    fprintf((FILE *)0x14d168,"warning: %s %d\n","Unknown nb_mode_query request: ",(ulong)param_2);
    return 0xffffffff;
  }
  if (*param_3 == 0) {
    *param_3 = 5;
    return 0;
  }
  if (*(long *)(param_1 + (long)*param_3 * 2 + 8) != 0) {
    *param_3 = *(int *)(*(long *)(param_1 + (long)*param_3 * 2 + 8) + 0x54);
    return 0;
  }
  *param_3 = -1;
  return 0;
}

