
/* v8::internal::compiler::ProcessedFeedback::AsNamedAccess() const */

void __thiscall v8::internal::compiler::ProcessedFeedback::AsNamedAccess(ProcessedFeedback *this)

{
  if (*(int *)this == 9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kNamedAccess == kind()");
}

