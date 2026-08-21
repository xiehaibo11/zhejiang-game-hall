
undefined8 FUN_011a526c(long param_1,int param_2,long *param_3)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 != 0) {
    return 0xffffffda;
  }
  iVar1 = (int)param_3[3];
  if ((iVar1 < 0) && (*(int *)(param_3 + 3) = iVar1 + 8, iVar1 + 8 < 1)) {
    iVar1 = *(int *)(param_3[1] + (long)iVar1);
  }
  else {
    piVar2 = (int *)*param_3;
    *param_3 = (long)(piVar2 + 2);
    iVar1 = *piVar2;
  }
  if (iVar1 == 0x1b) {
    *(ulong *)(param_1 + 0x38) = *(ulong *)(param_1 + 0x38) | 1;
    return 0;
  }
  return 0xffffffea;
}

