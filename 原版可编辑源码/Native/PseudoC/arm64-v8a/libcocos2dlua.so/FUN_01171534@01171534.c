
void FUN_01171534(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = cpHashSetInsert(*(undefined8 *)(param_1 + 0x30),param_3,param_2,FUN_01171d00,param_1);
  (**(code **)(param_1 + 8))(param_2);
  FUN_01171d84(param_1,uVar1);
  return;
}

