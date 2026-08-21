
void FUN_010580f8(undefined8 *param_1)

{
  *(undefined1 *)((long)param_1 + 0xb2) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[0x15] = 0x100000000;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

