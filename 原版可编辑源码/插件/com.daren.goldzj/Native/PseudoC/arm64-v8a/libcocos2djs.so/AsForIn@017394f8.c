
/* v8::internal::compiler::ProcessedFeedback::AsForIn() const */

void __thiscall v8::internal::compiler::ProcessedFeedback::AsForIn(ProcessedFeedback *this)

{
  if (*(int *)this == 5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kForIn == kind()");
}

