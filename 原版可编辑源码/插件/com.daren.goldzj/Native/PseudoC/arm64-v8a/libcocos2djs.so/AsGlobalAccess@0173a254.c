
/* v8::internal::compiler::ProcessedFeedback::AsGlobalAccess() const */

void __thiscall v8::internal::compiler::ProcessedFeedback::AsGlobalAccess(ProcessedFeedback *this)

{
  if (*(int *)this == 6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kGlobalAccess == kind()");
}

