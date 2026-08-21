
undefined8 FUN_01317384(int param_1)

{
  if ((param_1 - 0xa8U < 10) && ((1 << (ulong)(param_1 - 0xa8U & 0x1f) & 0x3cfU) != 0)) {
    return 1;
  }
  if (param_1 - 0xfc00U < 8) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

