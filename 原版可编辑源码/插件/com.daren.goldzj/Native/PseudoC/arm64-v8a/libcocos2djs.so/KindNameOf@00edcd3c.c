
/* v8::internal::Builtins::KindNameOf(int) */

undefined * v8::internal::Builtins::KindNameOf(int param_1)

{
  if ((uint)(&DAT_01c98620)[(long)param_1 * 6] < 7) {
    return (&PTR_DAT_01ca10b0)[(int)(&DAT_01c98620)[(long)param_1 * 6]];
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

