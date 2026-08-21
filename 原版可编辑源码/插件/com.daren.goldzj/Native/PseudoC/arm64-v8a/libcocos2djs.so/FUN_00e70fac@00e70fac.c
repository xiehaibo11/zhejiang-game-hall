
void FUN_00e70fac(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x19] = param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  param_1[0xe] = param_1 + 0x11;
  param_1[0x10] = 0x40;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 9;
  param_1[0x1a] = uVar1;
  *param_1 = 0;
  return;
}

