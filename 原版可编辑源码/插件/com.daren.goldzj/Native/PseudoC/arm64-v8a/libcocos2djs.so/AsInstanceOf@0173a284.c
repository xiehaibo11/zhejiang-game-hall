
/* v8::internal::compiler::ProcessedFeedback::AsInstanceOf() const */

void __thiscall v8::internal::compiler::ProcessedFeedback::AsInstanceOf(ProcessedFeedback *this)

{
  if (*(int *)this == 7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kInstanceOf == kind()");
}

