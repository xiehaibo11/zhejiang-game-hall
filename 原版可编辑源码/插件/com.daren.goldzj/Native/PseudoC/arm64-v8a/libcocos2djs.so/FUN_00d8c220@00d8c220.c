
void FUN_00d8c220(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[0x4c];
  *puVar1 = FUN_00d8bcbc;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 1;
  (**(code **)(*param_1 + 0x20))();
  (**(code **)param_1[0x4d])(param_1);
  param_1[0x18] = 0;
  return;
}

