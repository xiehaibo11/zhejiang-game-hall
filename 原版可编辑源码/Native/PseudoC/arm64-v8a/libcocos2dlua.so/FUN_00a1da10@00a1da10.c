
undefined8 FUN_00a1da10(long param_1,undefined1 *param_2,ulong param_3)

{
  if ((*(uint *)(param_1 + 0x44) & 0xff) == 0) {
    return 0;
  }
  if (param_3 < 2) {
    return 0xfffffffe;
  }
  param_2[1] = (char)*(uint *)(param_1 + 0x44);
  *param_2 = 0x88;
  return 2;
}

