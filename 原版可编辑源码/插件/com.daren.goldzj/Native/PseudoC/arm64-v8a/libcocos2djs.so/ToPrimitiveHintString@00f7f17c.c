
/* v8::internal::Factory::ToPrimitiveHintString(v8::internal::ToPrimitiveHint) */

Factory * __thiscall v8::internal::Factory::ToPrimitiveHintString(Factory *this,uint param_2)

{
  if (param_2 < 3) {
    return this + *(long *)(&DAT_019be5b8 + (long)(int)param_2 * 8);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

