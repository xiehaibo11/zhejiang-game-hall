
undefined8 FUN_00135af4(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar3 = *param_1;
  uVar4 = param_1[4];
  uVar1 = param_1[1] - lVar3;
  if (uVar4 <= (ulong)(param_1[1] - lVar3)) {
    uVar1 = uVar4;
  }
  if (uVar1 != 0) {
    lVar5 = param_1[3];
    if (param_1[5] - uVar4 != 0) {
      memmove((void *)(lVar5 + (uVar4 - uVar1)),(void *)(lVar5 + uVar4),param_1[5] - uVar4);
      lVar3 = *param_1;
      uVar4 = param_1[5];
    }
    uVar2 = (**(code **)(param_1[2] + 0x10))(param_1[2],lVar3,lVar5 + (uVar4 - uVar1),lVar5 + uVar4)
    ;
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    param_1[4] = param_1[4] - uVar1;
    *param_1 = *param_1 + uVar1;
  }
  return 1;
}

