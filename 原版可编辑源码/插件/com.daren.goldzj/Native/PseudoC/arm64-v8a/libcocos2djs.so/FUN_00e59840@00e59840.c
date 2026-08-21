
int FUN_00e59840(long param_1,undefined8 param_2,char param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_38;
  
  uVar3 = 0x686d7478;
  if (param_3 != '\0') {
    uVar3 = 0x766d7478;
  }
  iVar4 = (**(code **)(param_1 + 0x340))(param_1,uVar3,param_2,&local_38);
  if (iVar4 == 0) {
    lVar1 = 0x4e0;
    if (param_3 != '\0') {
      lVar1 = 0x4e8;
    }
    lVar2 = 0x590;
    if (param_3 != '\0') {
      lVar2 = 0x598;
    }
    *(undefined8 *)(param_1 + lVar1) = local_38;
    uVar5 = FUN_00e1d4a0(param_2);
    *(undefined8 *)(param_1 + lVar2) = uVar5;
  }
  return iVar4;
}

