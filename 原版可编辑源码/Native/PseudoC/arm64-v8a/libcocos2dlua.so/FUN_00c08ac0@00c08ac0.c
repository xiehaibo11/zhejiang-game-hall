
void FUN_00c08ac0(long param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  FUN_00c08290();
  if (param_2[2] == 10) {
    FUN_00c07bd8(param_1,param_2 + 3,*param_2);
  }
  iVar5 = param_2[4];
  if (param_2[3] != iVar5) {
    iVar1 = FUN_00c07d20(param_1 + 0x48);
    if ((iVar1 == 0) && (iVar1 = FUN_00c07d20(param_1 + 0x48,iVar5), iVar1 == 0)) {
      uVar4 = 0xffffffff;
      uVar3 = 0xffffffff;
    }
    else {
      uVar2 = 0xffffffff;
      if (param_2[2] != 10) {
        uVar2 = FUN_00c0899c(param_1);
      }
      uVar3 = FUN_00c07f70(param_1,param_3 << 8 | 0x1002b);
      FUN_00c07f70(param_1,*(int *)(param_1 + 0x34) << 8 | 0x80010058);
      uVar4 = FUN_00c07f70(param_1,param_3 << 8 | 0x2002b);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x28);
      FUN_00c07bd8(param_1,param_1 + 0x30,uVar2);
      iVar5 = param_2[4];
    }
    uVar2 = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    FUN_00c07d88(param_1,iVar5,uVar2,param_3,uVar3);
    FUN_00c07d88(param_1,param_2[3],uVar2,param_3,uVar4);
  }
  *param_2 = param_3;
  param_2[3] = -1;
  param_2[4] = -1;
  param_2[2] = 0xc;
  return;
}

