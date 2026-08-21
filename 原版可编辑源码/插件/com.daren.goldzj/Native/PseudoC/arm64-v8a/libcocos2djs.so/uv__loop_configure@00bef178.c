
undefined8 uv__loop_configure(long param_1,int param_2,long *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    piVar1 = (int *)*param_3;
    if ((int)param_3[3] < -7) {
      piVar1 = (int *)(param_3[1] + (long)(int)param_3[3]);
    }
    if (*piVar1 == 0x1b) {
      uVar2 = 0;
      *(ulong *)(param_1 + 0x38) = *(ulong *)(param_1 + 0x38) | 1;
    }
    else {
      uVar2 = 0xffffffea;
    }
  }
  else {
    uVar2 = 0xffffffda;
  }
  return uVar2;
}

