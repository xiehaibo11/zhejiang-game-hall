
void FUN_010bdaa8(undefined8 param_1,long *param_2,long param_3,ulong param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_2 + 0x27) + (ulong)*(uint *)(*param_2 + 0x2f);
  if ((param_4 & 1) == 0) {
    *(double *)(lVar1 + param_3 * 8) = (double)((int)param_4 >> 1);
    return;
  }
  *(undefined8 *)(lVar1 + param_3 * 8) = *(undefined8 *)(param_4 + 3);
  return;
}

