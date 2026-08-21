
void FUN_00a41834(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 3) = 1;
  param_1[2] = 0xffffffdf;
  param_1[1] = 0;
  *(undefined1 *)((long)param_1 + 0x1a) = 0;
  return;
}

