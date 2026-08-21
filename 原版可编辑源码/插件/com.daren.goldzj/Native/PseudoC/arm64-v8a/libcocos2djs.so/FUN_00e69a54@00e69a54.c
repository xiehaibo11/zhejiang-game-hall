
void FUN_00e69a54(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_00e6bd3c(param_1 + 0x30,uVar1);
  FUN_00e6bd3c(param_1 + 0x60,uVar1);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}

