
/* v8::internal::compiler::ProcessedFeedback::AsCompareOperation() const */

void __thiscall
v8::internal::compiler::ProcessedFeedback::AsCompareOperation(ProcessedFeedback *this)

{
  if (*(int *)this == 3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kCompareOperation == kind()");
}

