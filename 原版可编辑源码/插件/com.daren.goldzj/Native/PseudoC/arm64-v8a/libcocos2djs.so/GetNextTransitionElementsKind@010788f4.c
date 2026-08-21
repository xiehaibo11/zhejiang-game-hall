
/* v8::internal::GetNextTransitionElementsKind(v8::internal::ElementsKind) */

undefined1 v8::internal::GetNextTransitionElementsKind(byte param_1)

{
  if (param_1 < 6) {
    return (&DAT_019d5db5)[*(long *)(&DAT_019d5dd8 + (long)(char)param_1 * 8)];
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

