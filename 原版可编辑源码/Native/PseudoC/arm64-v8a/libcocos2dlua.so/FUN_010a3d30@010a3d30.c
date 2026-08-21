
void FUN_010a3d30(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[4];
  *(undefined8 *)(param_1 + 0x30) = param_2[5];
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = param_2[2];
  *(undefined8 *)(param_1 + 0x20) = param_2[3];
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x10) = param_2[1];
  *(undefined8 *)(param_1 + 8) = uVar1;
  FUN_010a749c(param_1,param_2,0);
  FUN_010a749c(param_1,param_2,1);
  return;
}

