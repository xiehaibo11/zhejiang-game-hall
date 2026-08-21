
void FUN_010a2e20(long param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 5);
  *(undefined8 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)((long)param_2 + 0x2c);
  FUN_010a59c0(param_1,param_2,0);
  FUN_010a59c0(param_1,param_2,1);
  return;
}

