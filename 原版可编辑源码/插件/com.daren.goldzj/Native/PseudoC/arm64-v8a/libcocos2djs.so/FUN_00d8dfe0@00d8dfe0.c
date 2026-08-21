
undefined8 FUN_00d8dfe0(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = *(int *)((long)param_1 + 0x23c);
  if (iVar3 == 0) {
    uVar2 = FUN_00d8c688(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    iVar3 = *(int *)((long)param_1 + 0x23c);
  }
  iVar1 = *(int *)(param_1[0x4d] + 0x20);
  if (iVar3 == iVar1 + 0xd0) {
    lVar4 = *param_1;
    *(undefined4 *)(lVar4 + 0x28) = 100;
    *(int *)(lVar4 + 0x2c) = iVar1;
    (**(code **)(lVar4 + 8))(param_1,3);
    *(undefined4 *)((long)param_1 + 0x23c) = 0;
  }
  else {
    uVar2 = (**(code **)(param_1[5] + 0x28))(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  *(uint *)(param_1[0x4d] + 0x20) = *(int *)(param_1[0x4d] + 0x20) + 1U & 7;
  return 1;
}

