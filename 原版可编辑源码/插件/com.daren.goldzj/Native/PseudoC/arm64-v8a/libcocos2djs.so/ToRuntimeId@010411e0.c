
/* v8::internal::interpreter::IntrinsicsHelper::ToRuntimeId(v8::internal::interpreter::IntrinsicsHelper::IntrinsicId)
    */

undefined4 v8::internal::interpreter::IntrinsicsHelper::ToRuntimeId(uint param_1)

{
  if (param_1 < 0x19) {
    return *(undefined4 *)(&DAT_019cb4dc + (long)(int)param_1 * 4);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

