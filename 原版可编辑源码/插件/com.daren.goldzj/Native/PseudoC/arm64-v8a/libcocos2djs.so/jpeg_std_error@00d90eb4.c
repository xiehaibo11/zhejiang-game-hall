
void jpeg_std_error(undefined8 *param_1)

{
  *param_1 = FUN_00d90f0c;
  param_1[1] = FUN_00d90f38;
  param_1[2] = FUN_00d90f9c;
  param_1[3] = FUN_00d91008;
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[4] = FUN_00d910d8;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = jpeg_std_message_table;
  *(undefined4 *)(param_1 + 0x12) = 0x7e;
  return;
}

