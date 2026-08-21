
/* v8::internal::compiler::ProcessedFeedback::AsElementAccess() const */

void __thiscall v8::internal::compiler::ProcessedFeedback::AsElementAccess(ProcessedFeedback *this)

{
  if (*(int *)this == 4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kElementAccess == kind()");
}

