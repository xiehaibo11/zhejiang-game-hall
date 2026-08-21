
undefined8 MDC2_Init(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[7] = 1;
  builtin_strncpy((char *)(param_1 + 5),"%%%%%%%%",8);
  builtin_strncpy((char *)(param_1 + 3),"RRRRRRRR",8);
  return 1;
}

