
/* v8::internal::GetSequenceIndexFromFastElementsKind(v8::internal::ElementsKind) */

undefined4 v8::internal::GetSequenceIndexFromFastElementsKind(byte param_1)

{
  if (param_1 < 6) {
    return *(undefined4 *)(&DAT_019d5dbc + (long)(char)param_1 * 4);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

