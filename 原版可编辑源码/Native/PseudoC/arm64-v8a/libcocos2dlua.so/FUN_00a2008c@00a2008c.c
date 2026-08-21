
undefined8 FUN_00a2008c(long param_1,undefined1 *param_2,long param_3)

{
  if (*(char *)(param_1 + 0x44) == '\0') {
    return 0;
  }
  if (param_3 != 0) {
    *param_2 = 0xf;
    return 1;
  }
  return 0xfffffffe;
}

