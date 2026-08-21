
void FUN_0184eb24(long param_1,undefined8 param_2,undefined8 *param_3)

{
  if (DAT_01d5412f == '\b') {
    *param_3 = param_2;
    if ((*(ulong *)(param_1 + 0x340) >> 0x3e & 1) != 0) {
      *(undefined1 *)(param_1 + 0x377) = 0;
    }
    *(undefined8 **)(param_1 + 0xf8) = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

