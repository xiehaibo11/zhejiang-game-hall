
void FUN_00e6038c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  uVar1 = param_2[4];
  uVar5 = param_2[1];
  uVar4 = *param_2;
  *(undefined8 *)(param_1 + 0x30) = param_2[5];
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  *(undefined8 *)(param_1 + 8) = uVar4;
  FUN_00e63af4(param_1,param_2,0);
  FUN_00e63af4(param_1,param_2,1);
  return;
}

