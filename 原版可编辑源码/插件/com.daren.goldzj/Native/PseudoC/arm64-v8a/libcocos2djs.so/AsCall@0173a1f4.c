
/* v8::internal::compiler::ProcessedFeedback::AsCall() const */

void __thiscall v8::internal::compiler::ProcessedFeedback::AsCall(ProcessedFeedback *this)

{
  if (*(int *)this == 2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kCall == kind()");
}

