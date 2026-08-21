
/* v8::internal::IC::TransitionMarkFromState(v8::internal::InlineCacheState) */

ulong __thiscall v8::internal::IC::TransitionMarkFromState(undefined8 param_1,uint param_2)

{
  if (param_2 < 7) {
    return 0x474e505e313058 >> (((ulong)param_2 & 7) << 3);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

