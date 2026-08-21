
/* v8::internal::ConditionalSourceRanges::GetRange(v8::internal::SourceRangeKind) */

undefined8 __thiscall
v8::internal::ConditionalSourceRanges::GetRange(ConditionalSourceRanges *this,int param_2)

{
  if (param_2 == 3) {
    this = this + 0x10;
  }
  else {
    if (param_2 != 6) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    this = this + 8;
  }
  return *(undefined8 *)this;
}

