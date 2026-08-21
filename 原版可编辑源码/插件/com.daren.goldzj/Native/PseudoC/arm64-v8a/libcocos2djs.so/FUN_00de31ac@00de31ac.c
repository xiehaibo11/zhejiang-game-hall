
int FUN_00de31ac(long param_1,long param_2,undefined8 *param_3)

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
  iVar1 = FUN_00de27bc(param_1,param_2,0,0,0,&local_d0,0,&local_118);
  iVar2 = 4;
  if (iVar1 != 7 && iVar1 != 0 || local_d0 == 0) {
    iVar2 = iVar1;
  }
  if (iVar2 != 0) {
    return iVar2;
  }
  FUN_00de764c(&local_d0,0x208);
  lStack_68 = local_118 + local_100;
  local_70 = lStack_110 - local_100;
  FUN_00de61f8(param_3,&local_d0);
  if (local_d8 == 0) {
    piVar3 = (int *)FUN_00de768c();
    if (piVar3 == (int *)0x0) {
      return 1;
    }
    *(undefined8 *)(piVar3 + 0x2e8) = uStack_f0;
    *(undefined8 *)(piVar3 + 0x2e6) = local_f8;
    iVar2 = FUN_00de7944(piVar3,&local_d0);
    if (iVar2 == 0) {
LAB_00de3358:
      iVar2 = *piVar3;
    }
    else {
      iVar2 = FUN_00de4010(local_d0,uStack_cc,param_3[5],*param_3);
      if (iVar2 == 0) {
        iVar2 = FUN_00de5ac0(param_3[5],&local_118,local_d0,uStack_cc);
        piVar3[0x32] = iVar2;
        FUN_00de45a8(param_3[5],piVar3);
        iVar2 = FUN_00de87f0(piVar3,&local_d0);
        if (iVar2 == 0) goto LAB_00de3358;
        iVar2 = 0;
      }
    }
    FUN_00de7724(piVar3);
    goto joined_r0x00de3364;
  }
  piVar3 = (int *)FUN_00de9740();
  if (piVar3 == (int *)0x0) {
    return 1;
  }
  iVar2 = FUN_00debc2c(piVar3,&local_d0);
  if (iVar2 == 0) {
LAB_00de3320:
    iVar2 = *piVar3;
  }
  else {
    iVar2 = FUN_00de4010(local_d0,uStack_cc,param_3[5],*param_3);
    if (iVar2 == 0) {
      iVar2 = FUN_00debd28(piVar3);
      if (iVar2 == 0) goto LAB_00de3320;
      iVar2 = 0;
    }
  }
  FUN_00de9834(piVar3);
joined_r0x00de3364:
  if (iVar2 != 0) {
    WebPFreeDecBuffer(*param_3);
  }
  if ((param_3[5] != 0) && (*(int *)(param_3[5] + 0x30) != 0)) {
    iVar2 = FUN_00de3f5c(*param_3);
  }
  return iVar2;
}

