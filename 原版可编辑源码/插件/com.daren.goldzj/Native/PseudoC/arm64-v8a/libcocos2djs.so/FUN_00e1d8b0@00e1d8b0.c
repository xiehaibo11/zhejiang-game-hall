
long FUN_00e1d8b0(long param_1,long param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  
  if (0 < param_2) {
    lVar2 = (**(code **)(param_1 + 8))();
    *param_3 = (uint)(lVar2 == 0) << 6;
    return lVar2;
  }
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = 6;
  }
  *param_3 = iVar1;
  return 0;
}

