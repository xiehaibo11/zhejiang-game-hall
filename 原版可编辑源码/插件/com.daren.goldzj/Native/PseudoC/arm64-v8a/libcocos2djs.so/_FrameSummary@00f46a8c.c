
/* v8::internal::FrameSummary::~FrameSummary() */

void __thiscall v8::internal::FrameSummary::~FrameSummary(FrameSummary *this)

{
  if (*(uint *)(this + 8) < 3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

