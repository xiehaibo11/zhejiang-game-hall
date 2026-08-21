
void FUN_01232dd8(undefined4 param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_3;
  *(undefined8 *)(param_2 + 0x10) = param_3[1];
  *(undefined8 *)(param_2 + 8) = uVar1;
  uVar2 = param_4[1];
  uVar1 = *param_4;
  *(undefined4 *)(param_2 + 0x28) = param_1;
  *(undefined1 *)(param_2 + 0x2c) = 1;
  *(undefined8 *)(param_2 + 0x20) = uVar2;
  *(undefined8 *)(param_2 + 0x18) = uVar1;
  return;
}

