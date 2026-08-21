
undefined8 FUN_00a1c658(long param_1,undefined2 *param_2,ulong param_3)

{
  if (*(int *)(param_1 + 0x44) == 0) {
    return 0;
  }
  if (param_3 < 2) {
    return 0xfffffffe;
  }
  *param_2 = 0x7d7e;
  return 2;
}

