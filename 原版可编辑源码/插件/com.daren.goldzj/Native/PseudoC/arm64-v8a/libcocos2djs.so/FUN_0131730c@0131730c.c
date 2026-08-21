
undefined8 FUN_0131730c(int param_1)

{
  uint uVar1;
  
  if (param_1 - 0xa8U < 10) {
    uVar1 = 1 << (ulong)(param_1 - 0xa8U & 0x1f);
    if ((uVar1 & 0xc3) != 0) {
      return 0x60b;
    }
    if ((uVar1 & 0x30c) != 0) {
      return 0x60c;
    }
  }
  if (7 < param_1 - 0xfc00U) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  if ((1 << (ulong)(param_1 - 0xfc00U & 0x1f) & 0x33U) == 0) {
    return 0x60c;
  }
  return 0x60b;
}

