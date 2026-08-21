
void FUN_01091098(undefined8 param_1,ulong *param_2,int param_3,ulong param_4)

{
  double *pdVar1;
  ulong uVar2;
  
  uVar2 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 7);
  if ((param_4 & 1) == 0) {
    *(double *)(uVar2 + (long)(int)(param_3 << 3 | 7)) = (double)((int)param_4 >> 1);
    return;
  }
  pdVar1 = (double *)(uVar2 + (long)(int)(param_3 << 3 | 7));
  if (NAN(*(double *)(param_4 + 3))) {
    *pdVar1 = NAN;
    return;
  }
  *pdVar1 = *(double *)(param_4 + 3);
  return;
}

