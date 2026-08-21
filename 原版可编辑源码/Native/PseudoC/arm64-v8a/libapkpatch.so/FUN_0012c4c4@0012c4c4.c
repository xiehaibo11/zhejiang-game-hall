
void FUN_0012c4c4(long param_1,long param_2)

{
  code *pcVar1;
  
  (**(code **)(param_2 + 8))(param_2,*(undefined8 *)(param_1 + 8));
  pcVar1 = *(code **)(param_2 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  (*pcVar1)(param_2,*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}

