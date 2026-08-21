
/* v8::internal::compiler::ProcessedFeedback::AsLiteral() const */

void __thiscall v8::internal::compiler::ProcessedFeedback::AsLiteral(ProcessedFeedback *this)

{
  if (*(int *)this == 8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kLiteral == kind()");
}

