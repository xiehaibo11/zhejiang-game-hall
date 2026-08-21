
undefined8 FUN_00a18d80(long param_1,undefined2 *param_2,ulong param_3)

{
  if (*(char *)(param_1 + 0x44) == '\0') {
    return 0;
  }
  if (param_3 < 3) {
    return 0xfffffffe;
  }
  *param_2 = 0x281b;
  *(undefined1 *)(param_2 + 1) = 0x42;
  return 3;
}

