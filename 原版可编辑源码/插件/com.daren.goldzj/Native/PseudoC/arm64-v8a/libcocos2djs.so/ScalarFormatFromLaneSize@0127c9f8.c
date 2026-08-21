
/* v8::internal::ScalarFormatFromLaneSize(int) */

undefined4 v8::internal::ScalarFormatFromLaneSize(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 8U >> 3 | param_1 << 0x1d;
  if ((uVar1 < 8) && ((0x8bU >> (ulong)(param_1 - 8U >> 3 & 0x1f) & 1) != 0)) {
    return *(undefined4 *)(&DAT_019f41e0 + (long)(int)uVar1 * 4);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

