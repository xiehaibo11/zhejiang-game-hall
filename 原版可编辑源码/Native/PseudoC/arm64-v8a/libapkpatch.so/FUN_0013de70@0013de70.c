
void FUN_0013de70(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  FUN_00137ea0(param_1,1);
  FUN_00137ea0(param_1 + 8,(long)param_3);
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar1 = FUN_00136de0();
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_00137ea0(param_1 + 0x28,0xffffffffffffffff);
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}

