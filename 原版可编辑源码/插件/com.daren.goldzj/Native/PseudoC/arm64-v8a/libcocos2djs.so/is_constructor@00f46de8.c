
/* v8::internal::FrameSummary::is_constructor() const */

bool __thiscall v8::internal::FrameSummary::is_constructor(FrameSummary *this)

{
  if (*(int *)(this + 8) - 1U < 2) {
    return false;
  }
  if (*(int *)(this + 8) == 0) {
    return this[0x2c] != (FrameSummary)0x0;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

