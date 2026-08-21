
char * FUN_001650c8(int param_1)

{
  if (param_1 + 2U < 0x62) {
    return &DAT_00120d8c + *(int *)(&DAT_00120d8c + (long)(int)(param_1 + 2U) * 4);
  }
  return "unknown register";
}

