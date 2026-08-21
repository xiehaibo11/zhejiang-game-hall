
long FUN_00e1ea0c(long param_1,ulong param_2,ulong param_3,ulong param_4,long param_5,int *param_6)

{
  long lVar1;
  int iVar2;
  
  if ((long)(param_3 | param_2 | param_4) < 0) {
    iVar2 = 6;
  }
  else if ((param_2 == 0) || (param_4 == 0)) {
    if (param_5 == 0) {
      iVar2 = 0;
    }
    else {
      (**(code **)(param_1 + 0x10))(param_1,param_5);
      iVar2 = 0;
      param_5 = 0;
    }
  }
  else {
    lVar1 = 0;
    if (param_2 != 0) {
      lVar1 = 0x7fffffff / (long)param_2;
    }
    if (lVar1 < (long)param_4) {
      iVar2 = 10;
    }
    else if (param_3 == 0) {
      param_5 = (**(code **)(param_1 + 8))(param_1,param_4 * param_2);
      iVar2 = (uint)(param_5 == 0) << 6;
    }
    else {
      lVar1 = (**(code **)(param_1 + 0x18))(param_1,param_3 * param_2,param_4 * param_2,param_5);
      iVar2 = (uint)(lVar1 == 0) << 6;
      if (lVar1 != 0) {
        param_5 = lVar1;
      }
    }
  }
  *param_6 = iVar2;
  return param_5;
}

