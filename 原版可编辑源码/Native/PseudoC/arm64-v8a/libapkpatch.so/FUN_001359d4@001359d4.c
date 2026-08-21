
void FUN_001359d4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(long *)(param_1 + 0x28) = param_3;
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_4 - param_3;
  *(code **)(param_1 + 0x10) = FUN_001359f0;
  return;
}

