
/* v8::internal::interpreter::IntrinsicsHelper::FromRuntimeId(v8::internal::Runtime::FunctionId) */

undefined4 v8::internal::interpreter::IntrinsicsHelper::FromRuntimeId(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 0x1db;
  if ((uVar1 < 0x1c) && ((0xdeffffdU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    return *(undefined4 *)(&DAT_019cb46c + (long)(int)uVar1 * 4);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

