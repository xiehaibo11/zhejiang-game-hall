
long FUN_00e13bcc(long param_1,ulong param_2,ulong param_3,ulong param_4,long param_5,int *param_6)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  
  if ((long)(param_3 | param_2 | param_4) < 0) {
    iVar4 = 6;
    goto LAB_00e13c8c;
  }
  if ((param_2 == 0) || (param_4 == 0)) {
    if (param_5 != 0) {
      (**(code **)(param_1 + 0x10))(param_1,param_5);
      param_5 = 0;
    }
  }
  else {
    lVar3 = 0;
    if (param_2 != 0) {
      lVar3 = 0x7fffffff / (long)param_2;
    }
    if (lVar3 < (long)param_4) {
      iVar4 = 10;
      goto LAB_00e13c8c;
    }
    if (param_3 == 0) {
      param_5 = (**(code **)(param_1 + 8))(param_1,param_4 * param_2);
      iVar4 = (uint)(param_5 == 0) << 6;
      if ((long)param_4 < 1) goto LAB_00e13c8c;
    }
    else {
      lVar3 = (**(code **)(param_1 + 0x18))(param_1,param_3 * param_2,param_4 * param_2,param_5);
      iVar4 = (uint)(lVar3 == 0) << 6;
      if (lVar3 != 0) {
        param_5 = lVar3;
      }
      uVar2 = param_4 - param_3;
      bVar1 = (long)param_4 < (long)param_3;
      param_4 = uVar2;
      if (uVar2 == 0 || bVar1) goto LAB_00e13c8c;
    }
    if ((iVar4 != 0) || (param_5 == 0)) goto LAB_00e13c8c;
    memset((void *)(param_5 + param_3 * param_2),0,param_4 * param_2);
  }
  iVar4 = 0;
LAB_00e13c8c:
  *param_6 = iVar4;
  return param_5;
}

