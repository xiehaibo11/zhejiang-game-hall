
int FUN_0113f654(long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long local_118;
  long lStack_110;
  undefined4 local_108;
  long local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  int local_d8;
  int local_d0;
  undefined4 uStack_cc;
  long local_70;
  long lStack_68;
  
  local_108 = 1;
  local_d0 = 0;
  local_118 = param_1;
  lStack_110 = param_2;
  iVar1 = FUN_0113ec64(param_1,param_2,0,0,0,&local_d0,0,&local_118);
  iVar2 = 4;
  if (iVar1 != 7 && iVar1 != 0 || local_d0 == 0) {
    iVar2 = iVar1;
  }
  if (iVar2 != 0) {
    return iVar2;
  }
  FUN_01143af4(&local_d0,0x208);
  lStack_68 = local_118 + local_100;
  local_70 = lStack_110 - local_100;
  FUN_011426a0(param_3,&local_d0);
  if (local_d8 == 0) {
    piVar3 = (int *)FUN_01143b34();
    if (piVar3 == (int *)0x0) {
      return 1;
    }
    *(undefined8 *)(piVar3 + 0x2e8) = uStack_f0;
    *(undefined8 *)(piVar3 + 0x2e6) = local_f8;
    iVar2 = FUN_01143dec(piVar3,&local_d0);
    if (iVar2 == 0) {
LAB_0113f800:
      iVar2 = *piVar3;
    }
    else {
      iVar2 = FUN_011404b8(local_d0,uStack_cc,param_3[5],*param_3);
      if (iVar2 == 0) {
        iVar2 = FUN_01141f68(param_3[5],&local_118,local_d0,uStack_cc);
        piVar3[0x32] = iVar2;
        FUN_01140a50(param_3[5],piVar3);
        iVar2 = FUN_01144c98(piVar3,&local_d0);
        if (iVar2 == 0) goto LAB_0113f800;
        iVar2 = 0;
      }
    }
    FUN_01143bcc(piVar3);
    goto joined_r0x0113f80c;
  }
  piVar3 = (int *)FUN_01145be8();
  if (piVar3 == (int *)0x0) {
    return 1;
  }
  iVar2 = FUN_011480d4(piVar3,&local_d0);
  if (iVar2 == 0) {
LAB_0113f7c8:
    iVar2 = *piVar3;
  }
  else {
    iVar2 = FUN_011404b8(local_d0,uStack_cc,param_3[5],*param_3);
    if (iVar2 == 0) {
      iVar2 = FUN_011481d0(piVar3);
      if (iVar2 == 0) goto LAB_0113f7c8;
      iVar2 = 0;
    }
  }
  FUN_01145cdc(piVar3);
joined_r0x0113f80c:
  if (iVar2 != 0) {
    WebPFreeDecBuffer(*param_3);
  }
  if ((param_3[5] != 0) && (*(int *)(param_3[5] + 0x30) != 0)) {
    iVar2 = FUN_01140404(*param_3);
  }
  return iVar2;
}

